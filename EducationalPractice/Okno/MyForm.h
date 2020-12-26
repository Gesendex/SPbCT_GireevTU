#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <string>
#include <thread>
#include <Windows.h>
#include "MathLibrary.h"

namespace Okno {


	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	private: Thread^ myThread; //������
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�.�.�.: ������ ����� ���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"���� � �����:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"���������� ����� �� �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->textBox1->Location = System::Drawing::Point(12, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(612, 79);
			this->textBox1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(403, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"���������� ������� \"������ ��� ������\"";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->textBox2->Location = System::Drawing::Point(12, 161);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(612, 220);
			this->textBox2->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(212, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"���������� �� �����������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 387);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"������ \"0\" �� \"*\"";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 456);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)// ���������� �������� �����
	{
		
		//����� �����, ����, ������� � ��������� ����� �� �����
		DateTime datetime = DateTime::Now;
		label2->Text += datetime.ToString();
		String^ Filename = "SourceFile.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox1->Text = file->ReadToEnd();
		file->Close();
	}

	public: void thread1()//����� 1
	{
		vector <string> vect(10);
		char buff;
		ifstream a1("SourceFile.txt");
		ofstream b1("FinalFile.txt");

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a1.get(buff);
				vect[i] += buff;
			}
			b1 << vect[i] << endl;
		}
		b1.close();
		a1.close();
	}

	public: void thread2()//����� 2
	{
		LPSTR a = "FinalFile.txt";
		ATTRIBUTE(a);//������� �� ���������� ���
	}
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {// ���������� ������� ������ 1
		
		myThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::thread1));
		myThread->Start();
		myThread->Join();
		
		String^ Filename = "FinalFile.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox2->Text = file->ReadToEnd();
		file->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)// ���������� ������� ������ 2
	{
		myThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::thread2));
		myThread->Start();
		myThread->Join();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)// ���������� ������� ������ 4
	{

		vector <string> vect(10);
		char buff;
		ifstream a1("FinalFile.txt");

		for (int i = 0; i < 10; i++)
		{
			a1 >> vect[i];
			replace(vect[i].begin(), vect[i].end(), '0', '*');
		}
		a1.close();

		ofstream b1("FinalFile.txt");

		for (int i = 0; i < 10; i++)
			b1 << vect[i] << endl;

		b1.close();

		String^ Filename = "FinalFile.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox2->Text = file->ReadToEnd();
		file->Close();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)// ���������� ������� ������ 3
	{
		vector <string> vect(10);
		ifstream a1("FinalFile.txt");

		for (int i = 0; i < 10; i++)
			a1 >> vect[i];

		a1.close();

		for (int i = 1; i < 10; i++)
		{
			if (vect[i - 1].compare(vect[i]) == 1)
			{
				swap(vect[i], vect[i - 1]);
				i = 0;
			}
		}
		ofstream b1("FinalFile.txt");
		for (int i = 0; i < 10; i++)
			b1 << vect[i] << endl;

		b1.close();

		String^ Filename = "FinalFile.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox2->Text = file->ReadToEnd();
		file->Close();
	
	}
	};
}
