#pragma once

#include <algorithm>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include "RTForm.h"
#include "Header.h"

// объявляем функцию для редактирования времени
int poiskIzamena(std::string fileName, int numberStrTimeSearch, std::string hh, std::string mm, std::string ss, int numberStrTimeReplace);

namespace RT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для ReplaceRT
	/// </summary>
	public ref class ReplaceRT : public System::Windows::Forms::Form
	{
	// Создаем конструктор, который будет принимать и сохранять ссылку на первую форму для дальнейшего использования ->
	public:
		ReplaceRT(RTForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;			
			//
			//TODO: добавьте код конструктора
			//
			
		}		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ReplaceRT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label10;
	public:
	public:

	public:
	public:
		// ->
	private: RTForm^ parentForm;	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(47, 160);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"00";
			this->textBox1->Click += gcnew System::EventHandler(this, &ReplaceRT::TextBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ReplaceRT::TextBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ReplaceRT::TextBox1_KeyPress);
			this->textBox1->Leave += gcnew System::EventHandler(this, &ReplaceRT::TextBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(101, 160);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 31);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"00";
			this->textBox2->Click += gcnew System::EventHandler(this, &ReplaceRT::TextBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ReplaceRT::TextBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ReplaceRT::TextBox2_KeyPress);
			this->textBox2->Leave += gcnew System::EventHandler(this, &ReplaceRT::TextBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(159, 160);
			this->textBox3->MaxLength = 2;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(51, 31);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"00";
			this->textBox3->Click += gcnew System::EventHandler(this, &ReplaceRT::TextBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ReplaceRT::TextBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ReplaceRT::TextBox3_KeyPress);
			this->textBox3->Leave += gcnew System::EventHandler(this, &ReplaceRT::TextBox3_Leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(9, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ReplaceRT::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(174, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(70, 64);
			this->label2->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(164, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(73, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Внимание!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Включен редактор процесса:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Режим №:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Обозначение слоя:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::DarkRed;
			this->label7->Location = System::Drawing::Point(134, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(249, 24);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Введите время: ЧЧ:ММ:СС";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"ID";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(198, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Time";
			this->label10->Visible = false;
			// 
			// ReplaceRT
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(268, 254);
			this->ControlBox = false;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ReplaceRT";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Редактирование времени процесса";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {		
			switch (Int32::Parse(label9->Text))
			{
					// ПОЛИКРЕМНИЙ
			case 1:
				fileName = fileNamePolikrR5; nSTS = nSTSPolikr; nSTR = nSTRPolikr; version = versionPolikr;
				break;
			case 2:
				fileName = fileNamePolikrR6; nSTS = nSTSPolikr; nSTR = nSTRPolikr; version = versionPolikr;
				break;
			case 3:
				fileName = fileNamePolikrR9; nSTS = nSTSPolikr; nSTR = nSTRPolikr; version = versionPolikr;
				break;			
					// АЗО
			case 5:
				fileName = fileNameAZOR1; nSTS = nSTSAZO; nSTR = nSTRAZO; version = versionAZO;
				break;
			case 6:
				fileName = fileNameAZOR2; nSTS = nSTSAZO; nSTR = nSTRAZO; version = versionAZO;
				break;
			case 7:
				fileName = fileNameAZOR3; nSTS = nSTSAZO; nSTR = nSTRAZO; version = versionAZO;
				break;
			case 8:
				fileName = fileNameAZOR4; nSTS = nSTSAZO; nSTR = nSTRAZO; version = versionAZO;
				break;			
					// НИТРИД
			case 11:
				fileName = fileNameNitridR1; nSTS = nSTSFSS; nSTR = nSTRFSS; version = versionNitrid;
				break;
			case 12:
				fileName = fileNameNitridR3; nSTS = nSTSFSS; nSTR = nSTRFSS; version = versionNitrid;
				break;
			case 13:
				fileName = fileNameNitridR4; nSTS = nSTSFSS; nSTR = nSTRFSS; version = versionNitrid;
				break;
			case 14:
				fileName = fileNameNitridR5; nSTS = nSTSNitrid; nSTR = nSTRNitrid; version = versionNitrid;
				break;			
			default:
				MessageBox::Show("Неизвестная ошибка!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}		
		String^ S1 = textBox1->Text;
		String^ S2 = textBox2->Text;
		String^ S3 = textBox3->Text;			
			// добавлем 0 первым символом, если в textBox введена одна цифра 
			if (textBox1->TextLength < 2) {	S1 = "0" + S1; }
			if (textBox2->TextLength < 2) { S2 = "0" + S2; }
			if (textBox3->TextLength < 2) { S3 = "0" + S3; }
			// проверяем чтобы во всех textBox'ах не было нулей
			if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0 || textBox3->Text->Length == 0)
				return;
			int TB1 = Convert::ToInt32(textBox1->Text);
			int TB2 = Convert::ToInt32(textBox2->Text);
			int TB3 = Convert::ToInt32(textBox3->Text);
				int OTH = Int32::Parse(label10->Text->Substring(0, 2));
				int OTM = Int32::Parse(label10->Text->Substring(3, 2));
				int OTS = Int32::Parse(label10->Text->Substring(6, 2));
				if (TB1 == OTH && TB2 == OTM && TB3 == OTS)
				{
					MessageBox::Show("Введеное время совпадает с текущим!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			if (TB1 == 0 && TB2 == 0 && TB3 ==0)
			{				
				MessageBox::Show("Время введено некорректно!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;				
			}
		// конвертируем введеные значения из Syysytem::String^ в std::string
		std::string hours = marshal_as<std::string>(S1);
		std::string minutes = marshal_as<std::string>(S2);
		std::string seconds = marshal_as<std::string>(S3);
		// запускаем функцию для поиска и замены времени
		poiskIzamena(fileName, nSTS, hours, minutes, seconds, nSTR);
		// вызываем метод Set родительской формы
		switch (Int32::Parse(label9->Text))
		{
				// ПОЛИКРЕМНИЙ
		case 1:
			parentForm->Set1(S1 + ":" + S2 + ":" + S3);
			break;
		case 2:
			parentForm->Set2(S1 + ":" + S2 + ":" + S3);
			break;
		case 3:
			parentForm->Set3(S1 + ":" + S2 + ":" + S3);
			break;		
				// АЗО
		case 5:
			parentForm->Set5(S1 + ":" + S2 + ":" + S3);
			break;
		case 6:
			parentForm->Set6(S1 + ":" + S2 + ":" + S3);
			break;
		case 7:
			parentForm->Set7(S1 + ":" + S2 + ":" + S3);
			break;
		case 8:
			parentForm->Set8(S1 + ":" + S2 + ":" + S3);
			break;		
				// НИТРИД
		case 11:
			parentForm->Set11(S1 + ":" + S2 + ":" + S3);
			break;
		case 12:
			parentForm->Set12(S1 + ":" + S2 + ":" + S3);
			break;
		case 13:
			parentForm->Set13(S1 + ":" + S2 + ":" + S3);
			break;
		case 14:
			parentForm->Set14(S1 + ":" + S2 + ":" + S3);
			break;		
		default:
			MessageBox::Show("Неизвестная ошибка!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
				
		this->Close();
	}
	private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {		
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) // цифры и клавиша BackSpace
		{
			e->Handled = true;
		}		
	}
	private: System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) // цифры и клавиша BackSpace
		{
			e->Handled = true;
		}
	}
	private: System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) // цифры и клавиша BackSpace
		{
			e->Handled = true;
		}
	}	
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0)	
			return;		
		int x = Convert::ToInt32(textBox1->Text);
		if (x > 3)
		{
			textBox1->Text = "";
			MessageBox::Show("Часы введены некорректно! \nМаксимальное возможное значение 3.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text->Length == 0)
			return;
		int x = Convert::ToInt32(textBox2->Text);
		if (x > 59)
		{
			textBox2->Text = "";
			MessageBox::Show("Минуты введены некорректно! \nМаксимальное возможное значение 59.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text->Length == 0)
			return;
		int x = Convert::ToInt32(textBox3->Text);
		if (x > 59)
		{
			textBox3->Text = "";
			MessageBox::Show("Секунды введены некорректно! \nМаксимальное возможное значение 59.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void TextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox1->Text)) {
			textBox1->Text = "00";
		}		
	}
	private: System::Void TextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
	}
	private: System::Void TextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox2->Text)) {
			textBox2->Text = "00";
		}
	}
	private: System::Void TextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
	}
	private: System::Void TextBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox3->Text)) {
			textBox3->Text = "00";
		}
	}
	private: System::Void TextBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
	}
};
}