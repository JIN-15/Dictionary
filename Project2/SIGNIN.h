#include <msclr/marshal_cppstd.h>
#include "DICTIONARY.h"
#include <vector>
trietree dictionary;
bool f = false;
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SIGNIN
	/// </summary>
	public ref class SIGNIN : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		SIGNIN(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SIGNIN(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SIGNIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel5;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SIGNIN::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->panel1->Location = System::Drawing::Point(344, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(838, 645);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->textBox5);
			this->panel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->panel7->Location = System::Drawing::Point(39, 433);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(746, 113);
			this->panel7->TabIndex = 13;
			this->panel7->UseWaitCursor = true;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SIGNIN::panel7_Paint);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(346, 12);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(299, 39);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"MEANING TO UPDATE";
			this->textBox6->UseWaitCursor = true;
			this->textBox6->Click += gcnew System::EventHandler(this, &SIGNIN::textBox6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button5->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(14, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(260, 47);
			this->button5->TabIndex = 11;
			this->button5->Text = L"UPDATE";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->UseWaitCursor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SIGNIN::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(15, 14);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(299, 39);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"UPDATE";
			this->textBox5->UseWaitCursor = true;
			this->textBox5->Click += gcnew System::EventHandler(this, &SIGNIN::textBox5_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->panel6->Location = System::Drawing::Point(39, 322);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(746, 117);
			this->panel6->TabIndex = 12;
			this->panel6->UseWaitCursor = true;
			this->panel6->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(16, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(259, 47);
			this->button4->TabIndex = 11;
			this->button4->Text = L"DELETE WORD";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SIGNIN::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(16, 8);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(405, 39);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"DELETE WORD";
			this->textBox3->UseWaitCursor = true;
			this->textBox3->Click += gcnew System::EventHandler(this, &SIGNIN::textBox3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::DarkRed;
			this->label9->Location = System::Drawing::Point(94, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 28);
			this->label9->TabIndex = 11;
			this->label9->UseWaitCursor = true;
			this->label9->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(554, 368);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 28);
			this->label8->TabIndex = 9;
			this->label8->UseWaitCursor = true;
			this->label8->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::AliceBlue;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 564);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(838, 81);
			this->panel5->TabIndex = 8;
			this->panel5->UseWaitCursor = true;
			this->panel5->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(543, 33);
			this->label7->TabIndex = 4;
			this->label7->Text = L"SURVIVING  IN  FAST  IS  NOT  EASY ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label7->UseWaitCursor = true;
			this->label7->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 28);
			this->label6->TabIndex = 3;
			this->label6->Text = L"DID YOU KNOW\?";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label6->UseWaitCursor = true;
			this->label6->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->panel4->Location = System::Drawing::Point(39, 227);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(746, 96);
			this->panel4->TabIndex = 4;
			this->panel4->UseWaitCursor = true;
			this->panel4->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(346, 3);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(299, 39);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"MEANING";
			this->textBox4->UseWaitCursor = true;
			this->textBox4->Click += gcnew System::EventHandler(this, &SIGNIN::textBox4_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(15, 3);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(299, 39);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"ADD WORD";
			this->textBox2->UseWaitCursor = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &SIGNIN::textBox2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button3->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(15, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 47);
			this->button3->TabIndex = 10;
			this->button3->Text = L"ADD WORD";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SIGNIN::button3_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->panel3->Location = System::Drawing::Point(39, 118);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(763, 103);
			this->panel3->TabIndex = 3;
			this->panel3->UseWaitCursor = true;
			this->panel3->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(15, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(405, 39);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"SEARCH WORD";
			this->textBox1->UseWaitCursor = true;
			this->textBox1->Click += gcnew System::EventHandler(this, &SIGNIN::textBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button2->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(15, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(259, 47);
			this->button2->TabIndex = 6;
			this->button2->Text = L"SEARCH";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SIGNIN::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label4->Location = System::Drawing::Point(160, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 28);
			this->label4->TabIndex = 2;
			this->label4->Text = L"SEE THE REAL MEANING OF YOU";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label4->UseWaitCursor = true;
			this->label4->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(609, 74);
			this->label3->TabIndex = 1;
			this->label3->Text = L"DICTIONARY PROJECT";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->UseWaitCursor = true;
			this->label3->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(344, 645);
			this->panel2->TabIndex = 1;
			this->panel2->UseWaitCursor = true;
			this->panel2->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LOAD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SIGNIN::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label2->Location = System::Drawing::Point(79, 498);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 28);
			this->label2->TabIndex = 1;
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->UseWaitCursor = true;
			this->label2->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 12, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(12, 322);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KNEW THE REAL MEANING";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 215);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SIGNIN::OTHERS);
			// 
			// SIGNIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1182, 645);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SIGNIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DICRIONARY";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}




private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	//LOADING BUTTON CODE BACKEND

	dictionary.tree = dictionary.getNode(); //CREATING A HEADNODE
	dictionary.Loading(dictionary.tree);//CALLING LOAD FUNCTION TO LOAD DICTIONARY
	MessageBox::Show("LOADING COMPLETE", "STATUS", MessageBoxButtons::OK, MessageBoxIcon::Information);
	//SHOWING MESSGAE LOADING COMPLETE
	f = true;
	//BOOL TO CHECK DICTIONARY LOADED OR NOT
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//SEARCH BUTTON CODE

				String^str2; //SYSTEM STRING POINTER
		if (!f)
		{
			//DICTIONARY NOT LOADED MESSAGE SHOW
			MessageBox::Show("DICTIONARY NOT LOADED", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);



		}
		else
		{
			//CONVERITNG SYSTEM STRING TO STD STRING AND ASSIGNING TO WORD 
			string word = msclr::interop::marshal_as< std::string >(textBox1->Text);
			string temp;//FOR CHECKING WHAT IS OUTCOME
			int i = 0;
			NODE* n = dictionary.search(dictionary.tree, word, temp,i);
			if (temp == "!") // if temp is equal to ! it mean word donot exist in dictionary
			{
				//THEN CALLING THE SUGEESTION FUNCTION TO SHOW NEAR BY POSSIBLE SUGESSTION
			
			//ASKING TO SUGGEST MEANING OT NOT
				if (MessageBox::Show("LET US SHOW YOU SOME SUGGESTIONS", "MEANING", MessageBoxButtons::YesNo, MessageBoxIcon::Information)
						==System::Windows::Forms::DialogResult::Yes )	
					{
					//IF YES THEN CALLING SUGGESTION FUNCTION
	//VECTOR TO STORE ALL POSSIBLE STRINGS
				vector<string> temp = dictionary.suggestions(dictionary.tree, word);
				string t = "WE GOT " + to_string(temp.size()) + " SUGGESTIONS";
				str2 = gcnew String(t.c_str());


				MessageBox::Show(str2, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
					for (int i = 0; i <=temp.size(); i++)
					{
						if (temp.size()==0)
						{
							//IF NO SUGGESTION EXIST
							MessageBox::Show("NO SUCH WORD EXIST", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);

						}
						if (i==temp.size())
						{
							//FOR NO MORE SUGGESTIONS
							MessageBox::Show("NO MORE SUGEESTION EXIST", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
							break;
						}
						str2=gcnew String(temp[i].c_str());
						if (MessageBox::Show(str2, "MEANING", MessageBoxButtons::YesNo, MessageBoxIcon::Information)
							== System::Windows::Forms::DialogResult::Yes)
						{
							//SUGGESTING AND ASKING IF THE WORD IS CORRECT THAT YOU ARE FINDING
						//SETTING IT TO TEXTBOX
							textBox1->Text = str2;
							break;
						}
						
					}
				
						
					}
					else
					{
						MessageBox::Show("YOU CHOOSE NO", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
						//ERROE IF CHOOSE NO TO SHOW SUGGESTION
					}
					
					
					
				
				   
				  
			 }
			  
			else
			   {
				//IF WORD FOUND
				//GCNEW IS ALLOCATOR FOR SYSTEM AS NEW FOR STD
				   str2 = gcnew String(temp.c_str());
				   //CONVERTING FROM STD STRING TO SYSTEM STRING
				   MessageBox::Show(str2, "MEANING", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }

		

				
				
				
			
		}
		
	
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//BUTTON CODE TO ADD WORD
	if (!f)
	{
		//DICTIONARY NOT LOADED MESSAGE SHOW
		MessageBox::Show("DICTIONARY NOT LOADED", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else
	{//ADDING WORD IN DICTIONARY
		
		string word = msclr::interop::marshal_as< std::string >(textBox2->Text);//CONVERTING SYSTEM TO STD
		string meaning = msclr::interop::marshal_as< std::string >(textBox4->Text);//CONVERTING SYSTEM TO STD
		string n;
		if (word == " " || meaning == " ")
		{
			//IF  NOT WORD ENTER AND TRY TO ADD
			n = "PLEASE ENTER WORD";
			String^str2 = gcnew String(n.c_str());
			MessageBox::Show("PLEASE ENTER WORD", "DETAIL", MessageBoxButtons::YesNo, MessageBoxIcon::Error);
		}
		else
		{
			//IF WORD ENTER 
			if (MessageBox::Show("Do you want to ADD word", "DETAIL", MessageBoxButtons::YesNo, MessageBoxIcon::Information) ==
				System::Windows::Forms::DialogResult::Yes)
			{
				//CONFIRM TO ADD WORD OR NOT
				word = dictionary.insert(dictionary.tree, word, meaning);
				String^str2 = gcnew String(word.c_str());
				MessageBox::Show(str2, "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				//IF CHOOSE NO TO ADD WORD
				MessageBox::Show("YOU CHOOSE NO !", "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		
			
		}
	}

	


}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//BUTTON CODE TO DELETE WORD
	if (!f)
	{
		//DICTIONARY NOT LOADED MESSAGE SHOW
		MessageBox::Show("DICTIONARY NOT LOADED", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{

		
		string word = msclr::interop::marshal_as< std::string >(textBox3->Text);//CONVERT SYSTEM TO STD
		if (MessageBox::Show("Do you want to DELETE WORD", "DETAIL", MessageBoxButtons::YesNo, MessageBoxIcon::Information) ==
			System::Windows::Forms::DialogResult::Yes)
		{
			//CONFIRM TO DELTET OR NOT
			word = dictionary.DELETEWORD(dictionary.tree, word);
			String^str2 = gcnew String(word.c_str());
			MessageBox::Show(str2, "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//SHOWING INFO WORD DELETED OR NOT
		}
		else
		{
			//IF  USER CHOOSE NO
			MessageBox::Show("YOU CHOOSE NO !", "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	
}
private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "SEARCH WORD")
	{
		textBox1->Text = " ";
	}
	
	

}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (textBox2->Text == "ADD WORD")
	{
		textBox2->Text = " ";
	}
	
	
}
private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox4->Text == "MEANING")
	{
		textBox4->Text = " ";
	}
	
	
}
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e)
{
	
	if (textBox3->Text == "DELETE WORD")
	{
		textBox3->Text = " ";
	}
	
	
}
private: System::Void OTHERS(System::Object^  sender, System::EventArgs^  e) 
{
	textBox4->Text = "MEANING";
	textBox3->Text = "DELETE WORD";
	textBox2->Text = "ADD WORD";
	textBox1->Text = "SEARCH WORD";
	textBox5->Text = "UPDATE";
	textBox6->Text == "MEANING TO UPDATE";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//BUTTON CODE TO UPDATE WORD
	if (!f)
	{
		//DICTIONARY NOT LOADED MESSAGE SHOW
		MessageBox::Show("DICTIONARY NOT LOADED", "ERROR", MessageBoxButtons::OK,MessageBoxIcon::Error);

	}
	else{
		string word = msclr::interop::marshal_as< std::string >(textBox5->Text);
		string meaning = msclr::interop::marshal_as< std::string >(textBox6->Text);
		
		
		if (MessageBox::Show("Do you want to update word", "DETAIL", MessageBoxButtons::YesNo, MessageBoxIcon::Information)==
			System::Windows::Forms::DialogResult::Yes)
		{//CONFIRM TO UPDATE WORD OR NOT
			word = dictionary.UPDATE(dictionary.tree, word, meaning);
			String^str2 = gcnew String(word.c_str());
			MessageBox::Show(str2, "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//MESSAGE IF WORD UPDATE OR NOT
		}
		else
		{
			MessageBox::Show("YOU CHOOSE NO !", "DETAIL", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void textBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox5->Text =="UPDATE")
	{
		textBox5->Text = "";
	}
}
private: System::Void textBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox6->Text == "MEANING TO UPDATE")
	{
		textBox6->Text = "";
	}
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
