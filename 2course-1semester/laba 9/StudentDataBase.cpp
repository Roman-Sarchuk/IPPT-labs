// Roman Sarchuk (KNMS-21)
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;


class PersonData
{
	struct Reting {
		short phSize, mSize, iSize, chSize;
		int* physics, * math, * info, * chemistry;
	};
	struct RetingMean {
		int physics, math, info, chemistry;
	};
	struct Data
	{
		string name, group;
		int year;
		Reting ret;
		RetingMean retMean;
	} data;
	string fName;
	string dataform;

	template <typename T>
	void FillBaseData(string txt, T &value) {
		cout << txt << ":\t";
		cin >> value;
		cout << endl;
	}

	int* FillRating(string txt, int* arr, short& rSize, bool endLine=true) {
		cout << txt << ":\t";
		cin >> rSize;
		arr = new int[rSize];
		cout << "Rating:\n";
		for (short i = 0; i < rSize; i++)
		{
			cin >> arr[i];
		}
		if (endLine)
			cout << endl;
		return arr;
	}

	template <typename T>
	void fInputBaseData(ofstream &file, string txt, T value) {
		file << txt << "\t\t:\t" << value << '\n';
	}

	void fInputRating(ofstream &file, string txt, int mean, const int* arr, const short size) {
		file << txt << " [ " << mean << " ] " << "\t:\t";
		for (short i = 0; i < size; i++)
		{
			file << arr[i] << ' ';
		}
		file << '\n';
	}

	int ArthMean(int* arr, short size) {
		int sum = 0;
		for (short i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		return (sum / size);
	}

	void AddDataToFile() {
		ofstream file;
		file.open(fName);
		if (!file.is_open())
			cout << "! ERROR: Can't open file «" << fName << "» !" << endl;
		else
		{
			file << ":::::::::::: DataBase ::::::::::::\n";

			fInputBaseData(file, "Name", data.name);
			fInputBaseData(file, "Age", data.year);
			fInputBaseData(file, "Group", data.group);

			fInputRating(file, "Phys.", data.retMean.physics, data.ret.physics, data.ret.phSize);
			fInputRating(file, "Math ", data.retMean.math, data.ret.math, data.ret.mSize);
			fInputRating(file, "Info ", data.retMean.info, data.ret.info, data.ret.iSize);
			fInputRating(file, "Chem.", data.retMean.chemistry, data.ret.chemistry, data.ret.chSize);

			file << ":::::::::::: :::::::: ::::::::::::\n\n";
		}
		file.close();
	}

public:
	PersonData(string fName) {
		this->fName = fName;
		cout << ":: Input data ::\n" << endl;

		FillBaseData("Name", data.name);
		FillBaseData("Age", data.year);
		FillBaseData("Group", data.group);

		cout << ".,. Subjects .,." << endl;
		data.ret.physics = FillRating("Phys. size", data.ret.physics, data.ret.phSize);
		data.ret.math = FillRating("Math size", data.ret.math, data.ret.mSize);
		data.ret.info = FillRating("Info size", data.ret.info, data.ret.iSize);
		data.ret.chemistry = FillRating("Chem. size", data.ret.chemistry, data.ret.chSize, false);
		cout << ".,. .,.,.,., .,." << endl;

		cout << "\n:: ::::: :::: ::\n" << endl;
		data.retMean.physics = ArthMean(data.ret.physics, data.ret.phSize);
		data.retMean.math = ArthMean(data.ret.math, data.ret.mSize);
		data.retMean.info = ArthMean(data.ret.info, data.ret.iSize);
		data.retMean.chemistry = ArthMean(data.ret.chemistry, data.ret.chSize);
		AddDataToFile();
	}
	
	~PersonData() {
		delete[] data.ret.physics;
		delete[] data.ret.math;
		delete[] data.ret.info;
		delete[] data.ret.chemistry;
	}
};


class Logic
{
	enum action {
		CREATE,
		VIEW,
		CLEAR,
		EXIT,
		NONE
	};
	action myAct = action::NONE;
	string fName;

	void Create() {
		PersonData database(fName);
	}

	void View() {
		ifstream file;
		file.open(fName);
		if (!file.is_open())
			cout << "! ERROR: Can't open file «" << fName << "» !" << endl;
		else
		{
			string line;
			getline(file, line);
			if (line == "")
				cout << "! WARNING: File is empty !" << endl;
			do
			{
				cout << line << endl;
			} while (getline(file, line));
		}
		file.close();
	}

	void Clear() {
		ofstream file;
		file.open(fName);
		if (!file.is_open())
			cout << "! ERROR: Can't open file «" << fName << "» !" << endl;
		else
		{
			file << "";
		}
		file.close();
	}

public:
	Logic(string fName) {
		this->fName = fName;
	}

	void Menu() {
		short act;
		myAct = action::NONE;
		cout << ":: MENU ::" << endl;
		do {
			cout << "1. Create\n2. View\n3. Clear\n4. EXIT" << endl;
			cout << ">> ";
			cin >> act;
			act--;
			if (act >= 0 && act <= 3)
			{
				myAct = (action)act;
				break;
			}
			else
				cout << "!not correct, try again!\n" << endl;
		} while (true);
		cout << ":: :::: ::" << endl << endl;
	}

	bool Action() {
		switch (myAct)
		{
		case action::CREATE:
			Create();
			break;
		case action::VIEW:
			View();
			break;
		case action::CLEAR:
			Clear();
			break;
		case action::EXIT:
			return false;
		}
		return true;
	}
};


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Roman Sarchuk (KNMS-21) ©\n\n";

	Logic log("DataFile.txt");
	while (true)
	{
		log.Menu();
		if (!log.Action())
			break;
	}
}
