#include <msclr/marshal_cppstd.h>
#include "SIGNIN.h"

//SIGN IN PAGE FOR DICTIONARY
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
	public ref class MYFORM : public System::Windows::Forms::Form
	{
	public:
		//DEFAULT CONSTRUCTOR
		MYFORM()
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
		~MYFORM()
		{
			if (components)
			{
				delete components;
			}
		}

		//ALL PANEL BUTTON AND TEXTBOX VARIABLE PRIVATE INCLUDED IN CLASS
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;












	private:
		//INITIALIZATION OF ALL THE VARIABLES
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MYFORM::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->panel1->Location = System::Drawing::Point(344, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(838, 645);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MYFORM::panel1_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->panel3->Location = System::Drawing::Point(46, 290);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(746, 65);
			this->panel3->TabIndex = 13;
			this->panel3->UseWaitCursor = true;
			this->panel3->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 20.2F, System::Drawing::FontStyle::Italic));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(0, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(0, 12, 0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(746, 43);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"passwaord";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			this->textBox1->Click += gcnew System::EventHandler(this, &MYFORM::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MYFORM::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->button4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(268, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(302, 54);
			this->button4->TabIndex = 11;
			this->button4->Text = L"SIGN IN";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MYFORM::button4_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->panel6->Location = System::Drawing::Point(46, 192);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(739, 65);
			this->panel6->TabIndex = 12;
			this->panel6->UseWaitCursor = true;
			this->panel6->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// textBox3
			// 
			this->textBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 15.2F, System::Drawing::FontStyle::Italic));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(0, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(739, 34);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"USERNAME";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->UseWaitCursor = true;
			this->textBox3->Click += gcnew System::EventHandler(this, &MYFORM::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MYFORM::textBox3_TextChanged);
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
			this->label9->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(554, 368);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 28);
			this->label8->TabIndex = 9;
			this->label8->UseWaitCursor = true;
			this->label8->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->dateTimePicker1->Location = System::Drawing::Point(2, 618);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(339, 25);
			this->dateTimePicker1->TabIndex = 14;
			this->dateTimePicker1->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label4->Location = System::Drawing::Point(33, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 28);
			this->label4->TabIndex = 2;
			this->label4->Text = L"SEE THE REAL MEANING OF YOU";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label4->UseWaitCursor = true;
			this->label4->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(672, 74);
			this->label3->TabIndex = 1;
			this->label3->Text = L"SIGN IN TO DICTIONARY";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->UseWaitCursor = true;
			this->label3->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(344, 645);
			this->panel2->TabIndex = 1;
			this->panel2->UseWaitCursor = true;
			this->panel2->Click += gcnew System::EventHandler(this, &MYFORM::OTHER);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 13));
			this->label1->Location = System::Drawing::Point(42, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Developed By:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 16));
			this->label2->Location = System::Drawing::Point(36, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(242, 90);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ali Hassan\r\nSana Noor Iqbal\r\nBilal Nazir\r\n";
			this->label2->UseWaitCursor = true;
			this->label2->Click += gcnew System::EventHandler(this, &MYFORM::label2_Click);
			// 
			// MYFORM
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
			this->Name = L"MYFORM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DICRIONARY";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}


	//BACKEND CODE FOR BUTTON OPERATIONS

private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox3->Text=="USERNAME")
	{
		textBox3->Text = "";
	}
	//CHECKING IF CLICK USERNAME BOX IS  EQUAL TO USERNAME CLEAR IT
}

private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "PASSWORD")
	{
		textBox1->Text = "";
	}
	//CHECKING IF CLICK PASSWORD BOX IS  EQUAL TO PASSWORD CLEAR IT
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox3->Text == "ali" || textBox3->Text == "BILAL" || textBox3->Text == "bilal" || textBox3->Text == "SANA" || textBox3->Text == "sana"|| textBox3->Text == "ALI")
	{
		if (textBox1->Text =="ADMIN" || textBox1->Text == "admin")
		{//IF PASSWORD AND USERNAME IS CORRECT MOVE TO NEXT FORM
			MessageBox::Show("SIGN IN SUCCESSFULLY", "SIGN IN", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Hide();
			SIGNIN ^form = gcnew SIGNIN(this);
			form->ShowDialog();
			Application::Exit();
		}
		else
		{
			//OTHERWISE SHOW WROND PASSWORD
			MessageBox::Show("WRONG PASSWORD", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	else
	{
		//OTHERWISE SHOW WRONG USERNAME
		MessageBox::Show("INCORRECT USERNAME", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//ON CLICKING SIGN UP BUTTON SHOW MESSAGE BOX
	MessageBox::Show("SIGN UP FOR FREE", "SIGN UP", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void OTHER(System::Object^  sender, System::EventArgs^  e) {

	//IF CLICK ON ANYOTHRE PLACE IN FORM FILL TEXTBOX AGAIN
	textBox3->Text = "USERNAME";
	textBox1->Text = "PASSWORD";

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}