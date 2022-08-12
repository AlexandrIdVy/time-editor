#pragma once

#include "RTForm.h"
#include "ReplaceRT.h"

// создаем обработчик нажатия кнопки для запуска формы RTForm, в h-файле оставляем только его объявление	
namespace RT {
	// 1-й канал
	System::Void RTForm::Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);			
			f2->label1->Text = "БФСС";
			f2->label2->Text = label13->Text;
			f2->label7->Text = label9->Text;
			f2->label9->Text = "1";
			f2->label10->Text = label1->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label1->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label6->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "БФСС";
			f2->label2->Text = label14->Text;
			f2->label7->Text = label10->Text;
			f2->label9->Text = "2";
			f2->label10->Text = label6->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label6->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label7->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "БФСС";
			f2->label2->Text = label15->Text;
			f2->label7->Text = label11->Text;
			f2->label9->Text = "3";
			f2->label10->Text = label7->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label7->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}	
	// 2-й канал
	System::Void RTForm::Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label24->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "ФСС";
			f2->label2->Text = label30->Text;
			f2->label7->Text = label28->Text;
			f2->label9->Text = "5";
			f2->label10->Text = label24->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label24->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label25->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "ФСС";
			f2->label2->Text = label19->Text;
			f2->label7->Text = label29->Text;
			f2->label9->Text = "6";
			f2->label10->Text = label25->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label25->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label26->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "ФСС";
			f2->label2->Text = label18->Text;
			f2->label7->Text = label31->Text;
			f2->label9->Text = "7";
			f2->label10->Text = label26->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label26->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label27->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "ФСС";
			f2->label2->Text = label17->Text;
			f2->label7->Text = label32->Text;
			f2->label9->Text = "8";
			f2->label10->Text = label27->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label27->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}	
	// 3-й канал
	System::Void RTForm::Button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label47->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "3-й ФСС";
			f2->label2->Text = label53->Text;
			f2->label7->Text = label51->Text;
			f2->label9->Text = "11";
			f2->label10->Text = label47->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label47->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label48->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "3-й ФСС";
			f2->label2->Text = label42->Text;
			f2->label7->Text = label52->Text;
			f2->label9->Text = "12";
			f2->label10->Text = label48->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label48->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label49->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "3-й ФСС";
			f2->label2->Text = label41->Text;
			f2->label7->Text = label54->Text;
			f2->label9->Text = "13";
			f2->label10->Text = label49->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label49->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void RTForm::Button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label50->Text->Length == 8) {
			ReplaceRT^ f2 = gcnew ReplaceRT(this);
			f2->label1->Text = "3-й БФСС";
			f2->label2->Text = label40->Text;
			f2->label7->Text = label55->Text;
			f2->label9->Text = "14";
			f2->label10->Text = label50->Text;
			f2->ShowDialog();
		}
		else if (Convert::ToInt32(label50->Text) == 121) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}	
}
