#pragma once
#include "A.h"
#include "B.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private: System::Windows::Forms::TextBox^ textBox1;
		protected:
		private: System::Windows::Forms::TextBox^ textBox2;
		private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Button^ button1;

		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

		private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(96, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Bottom base b:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Top base a:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Height h:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Trapezium area:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(99, 151);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(96, 20);
			this->textBox4->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(201, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 141);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 199);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Trapezium Area";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			B b(0, 0, 0);
			b.set(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
			textBox4->Text = "" + b.calculate();
		}
	};
}
