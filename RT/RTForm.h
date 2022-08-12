#pragma once

#include <algorithm>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include "Header.h"

// объявляем функции для поиска времени
std::string poisk(std::string route, int numberStrTimeSearchHead);

namespace RT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;	

	/// <summary>
	/// Сводка для RTForm
	/// </summary>
	public ref class RTForm : public System::Windows::Forms::Form
	{
		
	public:
		RTForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//			
		}
	// объявляемый открытый метод Set для того, чтобы можно было изменить текст label1 (текущее время процесса)
		// ПОЛИКРЕМНИЙ
	public: void Set1(String^ DataText) { label1->Text = DataText; }
	public: void Set2(String^ DataText) { label6->Text = DataText; }
	public: void Set3(String^ DataText) { label7->Text = DataText; }	
		// АЗО
	public: void Set5(String^ DataText) { label24->Text = DataText; }
	public: void Set6(String^ DataText) { label25->Text = DataText; }
	public: void Set7(String^ DataText) { label26->Text = DataText; }
	public: void Set8(String^ DataText) { label27->Text = DataText; }	
		// НИТРИД
	public: void Set11(String^ DataText) { label47->Text = DataText; }
	public: void Set12(String^ DataText) { label48->Text = DataText; }
	public: void Set13(String^ DataText) { label49->Text = DataText; }
	public: void Set14(String^ DataText) { label50->Text = DataText; }	
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RTForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	public:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;

	public:


	private:

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::Label^ label24;
	private:
	public: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button5;
	public:
	private: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Label^ label26;
	private:
	public: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button7;
	public:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;






	private:

	public:


	public:

	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	public: System::Windows::Forms::Label^ label47;
	private:
	public: System::Windows::Forms::Label^ label48;
	public: System::Windows::Forms::Label^ label49;
	public: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	public:
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;





	private:

	public:


public:






private:



public:


private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ button3;
public: System::Windows::Forms::Label^ label7;
private:
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label33;
public:
	private:
	private:
	public:
	private:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RTForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(186, 74);
			this->button2->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RTForm::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(120, 37);
			this->label1->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"00:00:00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->ItemSize = System::Drawing::Size(150, 30);
			this->tabControl1->Location = System::Drawing::Point(0, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(267, 234);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(259, 196);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"1-й канал";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				82)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				65)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				137)));
			this->tableLayoutPanel1->Controls->Add(this->label15, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button3, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label7, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button2, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button1, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label11, 1, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(-4, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(271, 151);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(11, 119);
			this->label15->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 15);
			this->label15->TabIndex = 20;
			this->label15->Text = L"3";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(11, 78);
			this->label14->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 15);
			this->label14->TabIndex = 19;
			this->label14->Text = L"2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 6);
			this->label2->Margin = System::Windows::Forms::Padding(8, 5, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"№";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(50, 6);
			this->label3->Margin = System::Windows::Forms::Padding(18, 5, 3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Слой";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(120, 6);
			this->label4->Margin = System::Windows::Forms::Padding(5, 5, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Время";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(196, 6);
			this->label5->Margin = System::Windows::Forms::Padding(15, 5, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Выбор";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(120, 78);
			this->label6->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 15);
			this->label6->TabIndex = 8;
			this->label6->Text = L"00:00:00";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(186, 115);
			this->button3->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Изменить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RTForm::Button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(120, 119);
			this->label7->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"00:00:00";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(186, 33);
			this->button1->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RTForm::Button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(42, 37);
			this->label9->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 15);
			this->label9->TabIndex = 14;
			this->label9->Text = L"О.1,0Г-18";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(42, 78);
			this->label10->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 15);
			this->label10->TabIndex = 15;
			this->label10->Text = L"О.0,6Г-21";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(11, 37);
			this->label13->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 15);
			this->label13->TabIndex = 18;
			this->label13->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(42, 119);
			this->label11->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 15);
			this->label11->TabIndex = 16;
			this->label11->Text = L"О.1,5Г-24";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->tableLayoutPanel2);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(259, 196);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"2-й канал";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				82)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				65)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				137)));
			this->tableLayoutPanel2->Controls->Add(this->label17, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->button8, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->button7, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->label18, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label19, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label20, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label21, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label22, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label23, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->label24, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label25, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->label26, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->label27, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->label28, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label29, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->label30, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label31, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label32, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->button6, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->button5, 3, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(-4, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(271, 191);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(11, 160);
			this->label17->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 15);
			this->label17->TabIndex = 21;
			this->label17->Text = L"8";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(186, 156);
			this->button8->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 30);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Изменить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RTForm::Button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(186, 115);
			this->button7->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 30);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Изменить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RTForm::Button7_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(11, 119);
			this->label18->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 15);
			this->label18->TabIndex = 20;
			this->label18->Text = L"7";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(11, 78);
			this->label19->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label19->Size = System::Drawing::Size(14, 15);
			this->label19->TabIndex = 19;
			this->label19->Text = L"4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(9, 6);
			this->label20->Margin = System::Windows::Forms::Padding(8, 5, 3, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 17);
			this->label20->TabIndex = 4;
			this->label20->Text = L"№";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(50, 6);
			this->label21->Margin = System::Windows::Forms::Padding(18, 5, 3, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 17);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Слой";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(120, 6);
			this->label22->Margin = System::Windows::Forms::Padding(5, 5, 3, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 17);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Время";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(196, 6);
			this->label23->Margin = System::Windows::Forms::Padding(15, 5, 3, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(51, 17);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Выбор";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(120, 37);
			this->label24->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 15);
			this->label24->TabIndex = 3;
			this->label24->Text = L"00:00:00";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(120, 78);
			this->label25->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 15);
			this->label25->TabIndex = 8;
			this->label25->Text = L"00:00:00";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(120, 119);
			this->label26->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(55, 15);
			this->label26->TabIndex = 12;
			this->label26->Text = L"00:00:00";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(120, 160);
			this->label27->Margin = System::Windows::Forms::Padding(5, 10, 3, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(55, 15);
			this->label27->TabIndex = 13;
			this->label27->Text = L"00:00:00";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(42, 37);
			this->label28->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(61, 15);
			this->label28->TabIndex = 14;
			this->label28->Text = L"О.0,7Г-08";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(42, 78);
			this->label29->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(61, 15);
			this->label29->TabIndex = 15;
			this->label29->Text = L"О.0,6Г-14";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(11, 37);
			this->label30->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(14, 15);
			this->label30->TabIndex = 18;
			this->label30->Text = L"1";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(42, 119);
			this->label31->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(61, 15);
			this->label31->TabIndex = 16;
			this->label31->Text = L"О.1,2Г-17";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(42, 160);
			this->label32->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(61, 15);
			this->label32->TabIndex = 17;
			this->label32->Text = L"О.0,4Г-20";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(186, 74);
			this->button6->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 30);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Изменить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RTForm::Button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(186, 33);
			this->button5->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Изменить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RTForm::Button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Transparent;
			this->tabPage3->Controls->Add(this->tabControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(259, 196);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"3-й канал";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->ItemSize = System::Drawing::Size(54, 23);
			this->tabControl2->Location = System::Drawing::Point(3, 2);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(257, 187);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tableLayoutPanel4);
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(249, 156);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"ФСС";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel4->ColumnCount = 4;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				68)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				142)));
			this->tableLayoutPanel4->Controls->Add(this->label43, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label44, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->label46, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->label49, 2, 3);
			this->tableLayoutPanel4->Controls->Add(this->label48, 2, 2);
			this->tableLayoutPanel4->Controls->Add(this->label47, 2, 1);
			this->tableLayoutPanel4->Controls->Add(this->label41, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->label45, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->label42, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->label53, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label54, 1, 3);
			this->tableLayoutPanel4->Controls->Add(this->label51, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->label52, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->button12, 3, 2);
			this->tableLayoutPanel4->Controls->Add(this->button13, 3, 3);
			this->tableLayoutPanel4->Controls->Add(this->button11, 3, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(-7, 2);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 4;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(257, 150);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(8, 6);
			this->label43->Margin = System::Windows::Forms::Padding(7, 5, 0, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(22, 17);
			this->label43->TabIndex = 4;
			this->label43->Text = L"№";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(50, 6);
			this->label44->Margin = System::Windows::Forms::Padding(18, 5, 3, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(41, 17);
			this->label44->TabIndex = 5;
			this->label44->Text = L"Слой";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(184, 6);
			this->label46->Margin = System::Windows::Forms::Padding(12, 5, 3, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(51, 17);
			this->label46->TabIndex = 7;
			this->label46->Text = L"Выбор";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(110, 119);
			this->label49->Margin = System::Windows::Forms::Padding(7, 10, 3, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(55, 15);
			this->label49->TabIndex = 12;
			this->label49->Text = L"00:00:00";
			this->label49->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(110, 78);
			this->label48->Margin = System::Windows::Forms::Padding(7, 10, 3, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(55, 15);
			this->label48->TabIndex = 8;
			this->label48->Text = L"00:00:00";
			this->label48->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(110, 37);
			this->label47->Margin = System::Windows::Forms::Padding(7, 10, 3, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(55, 15);
			this->label47->TabIndex = 3;
			this->label47->Text = L"00:00:00";
			this->label47->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(11, 119);
			this->label41->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(14, 15);
			this->label41->TabIndex = 20;
			this->label41->Text = L"7";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(111, 6);
			this->label45->Margin = System::Windows::Forms::Padding(8, 5, 3, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(50, 17);
			this->label45->TabIndex = 6;
			this->label45->Text = L"Время";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(11, 78);
			this->label42->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label42->Name = L"label42";
			this->label42->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label42->Size = System::Drawing::Size(14, 15);
			this->label42->TabIndex = 19;
			this->label42->Text = L"4";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(11, 37);
			this->label53->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(14, 15);
			this->label53->TabIndex = 18;
			this->label53->Text = L"1";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(42, 119);
			this->label54->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(45, 15);
			this->label54->TabIndex = 16;
			this->label54->Text = L"КП 8%";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(42, 37);
			this->label51->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(55, 15);
			this->label51->TabIndex = 14;
			this->label51->Text = L"КП 1,5%";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(42, 78);
			this->label52->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(56, 15);
			this->label52->TabIndex = 15;
			this->label52->Text = L"КП 2-3%";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(177, 74);
			this->button12->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 30);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Изменить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &RTForm::Button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(177, 115);
			this->button13->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 30);
			this->button13->TabIndex = 11;
			this->button13->Text = L"Изменить";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &RTForm::Button13_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(177, 33);
			this->button11->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 30);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Изменить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &RTForm::Button11_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tableLayoutPanel5);
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(249, 156);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"БФСС";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel5->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel5->ColumnCount = 4;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				68)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				142)));
			this->tableLayoutPanel5->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label12, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->label50, 2, 1);
			this->tableLayoutPanel5->Controls->Add(this->label40, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label55, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->label16, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->label33, 3, 0);
			this->tableLayoutPanel5->Controls->Add(this->button14, 3, 1);
			this->tableLayoutPanel5->Location = System::Drawing::Point(-7, 2);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(260, 69);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 6);
			this->label8->Margin = System::Windows::Forms::Padding(7, 5, 0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"№";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(50, 6);
			this->label12->Margin = System::Windows::Forms::Padding(18, 5, 3, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 17);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Слой";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(110, 37);
			this->label50->Margin = System::Windows::Forms::Padding(7, 10, 3, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(55, 15);
			this->label50->TabIndex = 13;
			this->label50->Text = L"00:00:00";
			this->label50->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(11, 37);
			this->label40->Margin = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(14, 15);
			this->label40->TabIndex = 21;
			this->label40->Text = L"1";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(37, 37);
			this->label55->Margin = System::Windows::Forms::Padding(5, 10, 0, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(62, 15);
			this->label55->TabIndex = 17;
			this->label55->Text = L"КП БФСС";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(111, 6);
			this->label16->Margin = System::Windows::Forms::Padding(8, 5, 3, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 17);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Время";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(184, 6);
			this->label33->Margin = System::Windows::Forms::Padding(12, 5, 3, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 17);
			this->label33->TabIndex = 8;
			this->label33->Text = L"Выбор";
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(177, 33);
			this->button14->Margin = System::Windows::Forms::Padding(5, 6, 3, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 30);
			this->button14->TabIndex = 10;
			this->button14->Text = L"Изменить";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &RTForm::Button14_Click);
			// 
			// RTForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(268, 241);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(0, 150);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RTForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Редактор времени процессов";
			this->Load += gcnew System::EventHandler(this, &RTForm::RTForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion		
	
	// объявляем обработчик нажатия кнопки для вызова формы ReplaceRT
		// ПОЛИКРЕМНИЙ
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e);	
		// АЗО
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e);
		// НИТРИД
	private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e);	
	
	private: System::Void RTForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//	ПОЛИКРЕМНИЙ
		String^ textR5 = marshal_as<String^>(poisk(fileNamePolikrR5, nSTSHPolikr));
		label1->Text = textR5;
		String^ textR6 = marshal_as<String^>(poisk(fileNamePolikrR6, nSTSHPolikr));
		label6->Text = textR6;
		String^ textR9 = marshal_as<String^>(poisk(fileNamePolikrR9, nSTSHPolikr));
		label7->Text = textR9;		
		// АЗО
		String^ textAR1 = marshal_as<String^>(poisk(fileNameAZOR1, nSTSHAZO));
		label24->Text = textAR1;
		String^ textAR2 = marshal_as<String^>(poisk(fileNameAZOR2, nSTSHAZO));
		label25->Text = textAR2;
		String^ textAR3 = marshal_as<String^>(poisk(fileNameAZOR3, nSTSHAZO));
		label26->Text = textAR3;
		String^ textAR4 = marshal_as<String^>(poisk(fileNameAZOR4, nSTSHAZO));
		label27->Text = textAR4;		
		// НИТРИД
		String^ textNR1 = marshal_as<String^>(poisk(fileNameNitridR1, nSTSHFSS));
		label47->Text = textNR1;
		String^ textNR3 = marshal_as<String^>(poisk(fileNameNitridR3, nSTSHFSS));
		label48->Text = textNR3;
		String^ textNR4 = marshal_as<String^>(poisk(fileNameNitridR4, nSTSHFSS));
		label49->Text = textNR4;
		String^ textNR5 = marshal_as<String^>(poisk(fileNameNitridR5, nSTSHNitrid));
		label50->Text = textNR5;		
	}
};
}
