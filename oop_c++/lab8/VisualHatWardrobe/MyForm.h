#pragma once

#include "CreateForm.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "Headdress.cpp"

namespace VisualHatWardrobe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			//delete objectsList;
			if (components)
			{
				delete components;
			}
			
		}
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::ComboBox^ objectBox;

	private: System::Windows::Forms::Button^ sellButton;
	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::Button^ infoButton;
	private: System::Windows::Forms::RichTextBox^ infoBox;
	private: System::Windows::Forms::Button^ deleteButton;


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
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->objectBox = (gcnew System::Windows::Forms::ComboBox());
			this->sellButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->infoButton = (gcnew System::Windows::Forms::Button());
			this->infoBox = (gcnew System::Windows::Forms::RichTextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// createButton
			// 
			this->createButton->Location = System::Drawing::Point(13, 13);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(136, 35);
			this->createButton->TabIndex = 0;
			this->createButton->Text = L"�������� ��\'���";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &MyForm::createButton_Click);
			// 
			// objectBox
			// 
			this->objectBox->Enabled = false;
			this->objectBox->FormattingEnabled = true;
			this->objectBox->Location = System::Drawing::Point(13, 55);
			this->objectBox->Name = L"objectBox";
			this->objectBox->Size = System::Drawing::Size(136, 21);
			this->objectBox->TabIndex = 1;
			this->objectBox->Text = L"��\'����";
			this->objectBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::objectBox_SelectedIndexChanged);
			// 
			// sellButton
			// 
			this->sellButton->Enabled = false;
			this->sellButton->Location = System::Drawing::Point(13, 83);
			this->sellButton->Name = L"sellButton";
			this->sellButton->Size = System::Drawing::Size(65, 26);
			this->sellButton->TabIndex = 2;
			this->sellButton->Text = L"�������";
			this->sellButton->UseVisualStyleBackColor = true;
			this->sellButton->Visible = false;
			this->sellButton->Click += gcnew System::EventHandler(this, &MyForm::sellButton_Click);
			// 
			// addButton
			// 
			this->addButton->Enabled = false;
			this->addButton->Location = System::Drawing::Point(84, 83);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(65, 26);
			this->addButton->TabIndex = 3;
			this->addButton->Text = L"������";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Visible = false;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// infoButton
			// 
			this->infoButton->Enabled = false;
			this->infoButton->Location = System::Drawing::Point(16, 118);
			this->infoButton->Name = L"infoButton";
			this->infoButton->Size = System::Drawing::Size(132, 24);
			this->infoButton->TabIndex = 5;
			this->infoButton->Text = L"�������� ����������";
			this->infoButton->UseVisualStyleBackColor = true;
			this->infoButton->Visible = false;
			this->infoButton->Click += gcnew System::EventHandler(this, &MyForm::infoButton_Click);
			// 
			// infoBox
			// 
			this->infoBox->Location = System::Drawing::Point(186, 12);
			this->infoBox->Name = L"infoBox";
			this->infoBox->Size = System::Drawing::Size(234, 265);
			this->infoBox->TabIndex = 6;
			this->infoBox->Text = L"";
			// 
			// deleteButton
			// 
			this->deleteButton->Enabled = false;
			this->deleteButton->Location = System::Drawing::Point(16, 165);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(133, 30);
			this->deleteButton->TabIndex = 7;
			this->deleteButton->Text = L"��������";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Visible = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm::deleteButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 289);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->infoBox);
			this->Controls->Add(this->infoButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->sellButton);
			this->Controls->Add(this->objectBox);
			this->Controls->Add(this->createButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Headdress";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		//������ ���������� ������ Headdress;
		std::vector<Headdress>* objectsList = new std::vector<Headdress>();
		int counter = 0;
		int objectIndex;
	private: float StringToFloat(String^ str)
	{
		//������� ������������ ���� String^ �� float
		float result;
		if (Single::TryParse(str, result)) 
		{
			return result; 
		}
		else
		{
			//�������
			throw gcnew FormatException("Invalid float format");
		}
	}
private: 
	String^ stdStringToString(std::string str) {
		//������� ������������ std::string to String^
		return msclr::interop::marshal_as<System::String^>(str);
	}
	std::string StringToStdString(String^ str) {
		//������ ������������ String^ to std::string
		return msclr::interop::marshal_as<std::string>(str);
	}
	System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//�������� ������ ��������
		CreateForm^ form2 = gcnew CreateForm();
		form2->ShowDialog(); //³������� ���� ���������.
		counter++;
		array<String^>^ properties = form2->getProperties(); //��������� ������ � ���� ���������.
		//��������� ���������� ������ Headdress � ������
		objectsList->push_back(Headdress(StringToFloat(properties[5]), StringToStdString(properties[0]), 
			StringToStdString(properties[1]), StringToStdString(properties[2]), StringToStdString(properties[3]), 
			StringToStdString(properties[4]), (int)StringToFloat(properties[6]), (int)StringToFloat(properties[6]) == 0? true: false));
		String^ item = stdStringToString("Object" + std::to_string(counter));
		//����� ���������� ������ ��������
		objectBox->Items->Add(item);
		objectBox->Enabled = true;
	}
	System::Void objectBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//��������� ������
		sellButton->Enabled = true;
		sellButton->Visible = true;
		addButton->Enabled = true;
		addButton->Visible = true;
		infoButton->Enabled = true;
		infoButton->Visible = true;
		deleteButton->Enabled = true;
		deleteButton->Visible = true;
		objectIndex = objectBox->SelectedIndex;
	}
	System::Void sellButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//������ �� ������ �������
		bool res = objectsList->at(objectIndex).sell(1);
		if (res) { infoBox->Text += "ʳ������: " + objectsList->at(objectIndex).getCount() + "\n"; }
		else{ MessageBox::Show(this, "��������� ������� �����, �� �� �����", "�������", MessageBoxButtons::OK, MessageBoxIcon::Error); }
	}
	System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//������ �� ������ ������
		objectsList->at(objectIndex).add(1);
		infoBox->Text += "ʳ������: " + objectsList->at(objectIndex).getCount() + "\n";
	}
	System::Void infoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//���� ����������
		infoBox->Text = stdStringToString(objectsList->at(objectIndex).getInfo());
	}
    System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//��������� ���������� � �������.
		objectsList->erase(objectsList->begin() + objectIndex);
		objectBox->Items->RemoveAt(objectIndex);
		sellButton->Enabled = false;
		sellButton->Visible = false;
		addButton->Enabled = false;
		addButton->Visible = false;
		infoButton->Enabled = false;
		infoButton->Visible = false;
		deleteButton->Enabled = false;
		deleteButton->Visible = false;
		infoBox->Clear();
	}
};
}
