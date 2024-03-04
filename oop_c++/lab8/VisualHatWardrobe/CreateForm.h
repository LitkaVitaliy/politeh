#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System::Collections::Generic;
namespace VisualHatWardrobe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:
		CreateForm(void)
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
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ colorBox;
	protected:

	protected:
	private: System::Windows::Forms::Button^ createButtonF2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ SeasonBox;

	private: System::Windows::Forms::TextBox^ priceBox;

	private: System::Windows::Forms::TextBox^ countBox;
	private: System::Windows::Forms::TextBox^ typeBox;


	private: System::Windows::Forms::TextBox^ materialBox;

	private: System::Windows::Forms::TextBox^ sizeBox;


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
			this->colorBox = (gcnew System::Windows::Forms::TextBox());
			this->createButtonF2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SeasonBox = (gcnew System::Windows::Forms::TextBox());
			this->priceBox = (gcnew System::Windows::Forms::TextBox());
			this->countBox = (gcnew System::Windows::Forms::TextBox());
			this->typeBox = (gcnew System::Windows::Forms::TextBox());
			this->materialBox = (gcnew System::Windows::Forms::TextBox());
			this->sizeBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// colorBox
			// 
			this->colorBox->Location = System::Drawing::Point(13, 13);
			this->colorBox->Name = L"colorBox";
			this->colorBox->Size = System::Drawing::Size(100, 20);
			this->colorBox->TabIndex = 0;
			// 
			// createButtonF2
			// 
			this->createButtonF2->Location = System::Drawing::Point(197, 199);
			this->createButtonF2->Name = L"createButtonF2";
			this->createButtonF2->Size = System::Drawing::Size(75, 23);
			this->createButtonF2->TabIndex = 1;
			this->createButtonF2->Text = L"Create";
			this->createButtonF2->UseVisualStyleBackColor = true;
			this->createButtonF2->Click += gcnew System::EventHandler(this, &CreateForm::createButtonF2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(119, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Колір";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(119, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Розмір";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ціна за одну";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(119, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Сезон";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(119, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Кількість";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(119, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Тип";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(119, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Матеріал";
			// 
			// SeasonBox
			// 
			this->SeasonBox->Location = System::Drawing::Point(13, 117);
			this->SeasonBox->Name = L"SeasonBox";
			this->SeasonBox->Size = System::Drawing::Size(100, 20);
			this->SeasonBox->TabIndex = 10;
			// 
			// priceBox
			// 
			this->priceBox->Location = System::Drawing::Point(13, 169);
			this->priceBox->Name = L"priceBox";
			this->priceBox->Size = System::Drawing::Size(100, 20);
			this->priceBox->TabIndex = 12;
			this->priceBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CreateForm::priceBox_KeyDown);
			// 
			// countBox
			// 
			this->countBox->Location = System::Drawing::Point(13, 143);
			this->countBox->Name = L"countBox";
			this->countBox->Size = System::Drawing::Size(100, 20);
			this->countBox->TabIndex = 13;
			this->countBox->TextChanged += gcnew System::EventHandler(this, &CreateForm::countBox_TextChanged);
			this->countBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CreateForm::countBox_KeyDown);
			// 
			// typeBox
			// 
			this->typeBox->Location = System::Drawing::Point(13, 91);
			this->typeBox->Name = L"typeBox";
			this->typeBox->Size = System::Drawing::Size(100, 20);
			this->typeBox->TabIndex = 14;
			// 
			// materialBox
			// 
			this->materialBox->Location = System::Drawing::Point(13, 65);
			this->materialBox->Name = L"materialBox";
			this->materialBox->Size = System::Drawing::Size(100, 20);
			this->materialBox->TabIndex = 15;
			// 
			// sizeBox
			// 
			this->sizeBox->Location = System::Drawing::Point(13, 39);
			this->sizeBox->Name = L"sizeBox";
			this->sizeBox->Size = System::Drawing::Size(100, 20);
			this->sizeBox->TabIndex = 16;
			// 
			// CreateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->sizeBox);
			this->Controls->Add(this->materialBox);
			this->Controls->Add(this->typeBox);
			this->Controls->Add(this->countBox);
			this->Controls->Add(this->priceBox);
			this->Controls->Add(this->SeasonBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->createButtonF2);
			this->Controls->Add(this->colorBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CreateForm";
			this->Text = L"CreateForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CreateForm::CreateForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CreateForm::CreateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		array<String^>^ properties = gcnew array<String^>(7);
		//геттер для масиву значеннь
	public: array<String^>^ getProperties() { 
		
		return properties;
	} 
#pragma endregion
	private: 
	System::Void CreateForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// Перевірка на активацію виходу з форми(Крестик)//TODO:FIX EXIT EVENT
	}
	System::Void CreateForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	//Отримання значень з текстбоксів, закриття форми вводу.
	System::Void createButtonF2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->properties[0] = colorBox->Text;
		this->properties[1] = sizeBox->Text;
		this->properties[2] = materialBox->Text;
		this->properties[3] = typeBox->Text;
		this->properties[4] = SeasonBox->Text;
		this->properties[5] = priceBox->Text;
		this->properties[6] = countBox->Text;
		if (checkValues()) {
			this->Close();
		}
		else {
			MessageBox::Show(this, "Заповніть всі поля", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	System::Void countBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	//перевірка на цифри для чисельних значень
	System::Boolean CheckSymbol(System::Windows::Forms::KeyEventArgs^ e) {
		if ((e->KeyValue >= 48 && e->KeyValue <= 57) || e->KeyValue == 188 
			|| e->KeyValue == (int)Keys::Back || e->KeyValue == 17 || e->KeyValue == 16 ) {
			return true;
		}
		else {
			MessageBox::Show(this, "Введіть числове значення", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	}
	//перевірка на заповнення всіх параметрів
	System::Boolean checkValues() {
		for (int i = 0; i < 7; i++) {
			if (properties[i] == "") {
				return false;
			}
		}
		return true;
	}
	System::Void countBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (!CheckSymbol(e)){
			countBox->Clear();
		}	
	}
	System::Void priceBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (!CheckSymbol(e)) {
			priceBox->Clear();
		}
	}
};
}
