#pragma once
#include <ctime>
#include <math.h>
#include <stdlib.h>


namespace UIcppProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::TextBox^ arrN;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonFill;
	private: System::Windows::Forms::Label^ lStatus;
	private: System::Windows::Forms::Label^ textScore;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->arrN = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonFill = (gcnew System::Windows::Forms::Button());
			this->lStatus = (gcnew System::Windows::Forms::Label());
			this->textScore = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Array Num (1-10):\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 97);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Input some num, please:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 197);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Result:";
			// 
			// buttonCalc
			// 
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCalc->Location = System::Drawing::Point(339, 188);
			this->buttonCalc->Margin = System::Windows::Forms::Padding(4);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(153, 55);
			this->buttonCalc->TabIndex = 3;
			this->buttonCalc->Text = L"Calculate";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &MainForm::buttonCalc_Click);
			// 
			// arrN
			// 
			this->arrN->Location = System::Drawing::Point(221, 31);
			this->arrN->Margin = System::Windows::Forms::Padding(4);
			this->arrN->Name = L"arrN";
			this->arrN->Size = System::Drawing::Size(97, 28);
			this->arrN->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(4, 4);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 28);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->textBox12, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox11, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox8, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 142);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(836, 43);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox12->Location = System::Drawing::Point(751, 4);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(75, 28);
			this->textBox12->TabIndex = 15;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox11->Location = System::Drawing::Point(668, 4);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(75, 28);
			this->textBox11->TabIndex = 14;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox10->Location = System::Drawing::Point(585, 4);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 28);
			this->textBox10->TabIndex = 13;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox9->Location = System::Drawing::Point(502, 4);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(75, 28);
			this->textBox9->TabIndex = 12;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox8->Location = System::Drawing::Point(419, 4);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(75, 28);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox7->Location = System::Drawing::Point(336, 4);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(75, 28);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox6->Location = System::Drawing::Point(253, 4);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(75, 28);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox5->Location = System::Drawing::Point(170, 4);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 28);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(87, 4);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(75, 28);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(113, 196);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(219, 36);
			this->textBox1->TabIndex = 8;
			// 
			// buttonFill
			// 
			this->buttonFill->Font = (gcnew System::Drawing::Font(L"Ebrima", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFill->Location = System::Drawing::Point(339, 15);
			this->buttonFill->Margin = System::Windows::Forms::Padding(4);
			this->buttonFill->Name = L"buttonFill";
			this->buttonFill->Size = System::Drawing::Size(153, 55);
			this->buttonFill->TabIndex = 9;
			this->buttonFill->Text = L"Fill Array";
			this->buttonFill->UseVisualStyleBackColor = true;
			this->buttonFill->Click += gcnew System::EventHandler(this, &MainForm::buttonFill_Click);
			// 
			// lStatus
			// 
			this->lStatus->AutoSize = true;
			this->lStatus->Location = System::Drawing::Point(514, 35);
			this->lStatus->Name = L"lStatus";
			this->lStatus->Size = System::Drawing::Size(0, 21);
			this->lStatus->TabIndex = 10;
			// 
			// textScore
			// 
			this->textScore->AutoSize = true;
			this->textScore->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textScore->Location = System::Drawing::Point(250, 98);
			this->textScore->Name = L"textScore";
			this->textScore->Size = System::Drawing::Size(42, 27);
			this->textScore->TabIndex = 11;
			this->textScore->Text = L"#0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 252);
			this->Controls->Add(this->textScore);
			this->Controls->Add(this->lStatus);
			this->Controls->Add(this->buttonFill);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->arrN);
			this->Controls->Add(this->buttonCalc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"Array Sum";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	protected:
		int asize;
		int* arr;

		void FillArr() {
			if (asize >= 1 && asize > 0) {
				textScore->Text = "#1";
				arr[0] = Convert::ToInt16(textBox3->Text);
			}
			if (asize >= 2 && asize > 0) {
				textScore->Text = "#2";
				arr[1] = Convert::ToInt16(textBox4->Text);
			}
			if (asize >= 3 && asize > 0) {
				textScore->Text = "#3";
			arr[2] = Convert::ToInt16(textBox5->Text);
			}
			if (asize >= 4 && asize > 0) {
				textScore->Text = "#4";
				arr[3] = Convert::ToInt16(textBox6->Text);
			}
			if (asize >= 5 && asize > 0) {
				textScore->Text = "#5";
				arr[4] = Convert::ToInt16(textBox7->Text);
			}
			if (asize >= 6 && asize > 0) {
				textScore->Text = "#6";
				arr[5] = Convert::ToInt16(textBox8->Text);
			}
			if (asize >= 7 && asize > 0) {
				textScore->Text = "#7";
				arr[6] = Convert::ToInt16(textBox9->Text);
			}
			if (asize >= 8 && asize > 0) {
				textScore->Text = "#8";
				arr[7] = Convert::ToInt16(textBox10->Text);
			}
			if (asize >= 9 && asize > 0) {
				textScore->Text = "#9";
				arr[8] = Convert::ToInt16(textBox11->Text);
			}
			if (asize == 10 && asize > 0) {
				arr[9] = Convert::ToInt16(textBox12->Text);
				textScore->Text = "#10";
			}
		}

		int Calc() {
			int minItem = arr[0], k = 0, sum = 0;
			for (short i = 1; i < asize; i++)
			{
				if (arr[i] < minItem)
				{
					minItem = arr[i];
					k = i;
				}
			}
			for (short i = k; i < asize; i++)
			{
				sum += arr[i];
			}
			return sum;
		}

		void ChangeOnAbs() {
			for (short i = 0; i < asize; i++)
			{
				arr[i] = abs(arr[i]);
			}
		}

	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = Convert::ToString(Calc());
		delete[] arr;
	}
	private: System::Void buttonFill_Click(System::Object^ sender, System::EventArgs^ e) {
		if (arrN->Text != "" && Convert::ToInt16(arrN->Text) <= 10 && Convert::ToInt16(arrN->Text) >= 1)
		{
			lStatus->Text = "";
			asize = Convert::ToInt16(arrN->Text);
			arr = new int[asize];
			FillArr();
		}
		else
			lStatus->Text = "Не коректне число!";
	}
};
}
