#pragma once
#include "externObjects.h"
#include <sstream>
#include <msclr/marshal_cppstd.h>

using namespace msclr::interop;

namespace SigninForm {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerHome
	/// </summary>
public ref class CustomerHome : public System::Windows::Forms::Form {
	public:
		CustomerHome(void)
		{
			InitializeComponent();

			this->SetStyle(static_cast<ControlStyles>(ControlStyles::AllPaintingInWmPaint | ControlStyles::DoubleBuffer | ControlStyles::UserPaint), true);
			this->UpdateStyles();

			accountsPnl->Hide();
			depositPnl->Hide();
			withdrawPnl->Hide();
			openPnl->Hide();
			editPnl->Hide();
			closePnl->Hide();
			transferPnl->Hide();
			loanPnl->Hide();
			balancePnl->Hide();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerHome()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox7;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox16;



	private: System::Windows::Forms::Panel^ editPnl;
private: System::Windows::Forms::Button^ editAccButton;

	private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::TextBox^ editAccountType;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ withdrawPnl;
private: System::Windows::Forms::Button^ withdrawButton;

	private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ withdrawAmount;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ withdrawAccNo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ openPnl;
private: System::Windows::Forms::Button^ openAccButton;

	private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ initAmmount;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ accType;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ depositPnl;
private: System::Windows::Forms::TextBox^ depositAccNo;
private: System::Windows::Forms::Button^ depositButton;


	private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ depositAmmount;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ closePnl;
private: System::Windows::Forms::Button^ closeAccButton;

	private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ closeAccNo;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ transferPnl;
private: System::Windows::Forms::TextBox^ fromAccNum;
private: System::Windows::Forms::Button^ transferButton;




	private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::TextBox^ transferAmount;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ loanPnl;

	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ loanAccNumber;
private: System::Windows::Forms::Button^ loanButton;


	private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::TextBox^ loanAmmount;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ balancePnl;



private: System::Windows::Forms::TextBox^ balancReportAcc;
private: System::Windows::Forms::Button^ balanceReportBack;


	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Panel^ accountsPnl;

private: System::Windows::Forms::Button^ backAllAcc;





private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ editAccNum;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ toAccNum;

private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ reportShowButton;

private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ListView^ balanceReport;

private: System::Windows::Forms::ColumnHeader^ EVENT;
private: System::Windows::Forms::ColumnHeader^ BALANCE;
private: System::Windows::Forms::ColumnHeader^ TIME;
private: System::Windows::Forms::ListView^ accountsDetails;

private: System::Windows::Forms::ColumnHeader^ accountID;
private: System::Windows::Forms::ColumnHeader^ accountType;
private: System::Windows::Forms::ColumnHeader^ customerID;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ loanDuration;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;

private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerHome::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->editPnl = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->editAccNum = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->editAccButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->editAccountType = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->withdrawPnl = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->withdrawButton = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->withdrawAmount = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->withdrawAccNo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openPnl = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->openAccButton = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->initAmmount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->accType = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->depositPnl = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->depositAccNo = (gcnew System::Windows::Forms::TextBox());
			this->depositButton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->depositAmmount = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->closePnl = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->closeAccButton = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->closeAccNo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->transferPnl = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->toAccNum = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->fromAccNum = (gcnew System::Windows::Forms::TextBox());
			this->transferButton = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->transferAmount = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->loanPnl = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->loanDuration = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->loanAccNumber = (gcnew System::Windows::Forms::TextBox());
			this->loanButton = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->loanAmmount = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->balancePnl = (gcnew System::Windows::Forms::Panel());
			this->balanceReport = (gcnew System::Windows::Forms::ListView());
			this->EVENT = (gcnew System::Windows::Forms::ColumnHeader());
			this->BALANCE = (gcnew System::Windows::Forms::ColumnHeader());
			this->TIME = (gcnew System::Windows::Forms::ColumnHeader());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->reportShowButton = (gcnew System::Windows::Forms::Button());
			this->balancReportAcc = (gcnew System::Windows::Forms::TextBox());
			this->balanceReportBack = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->accountsPnl = (gcnew System::Windows::Forms::Panel());
			this->accountsDetails = (gcnew System::Windows::Forms::ListView());
			this->accountID = (gcnew System::Windows::Forms::ColumnHeader());
			this->accountType = (gcnew System::Windows::Forms::ColumnHeader());
			this->customerID = (gcnew System::Windows::Forms::ColumnHeader());
			this->backAllAcc = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->editPnl->SuspendLayout();
			this->withdrawPnl->SuspendLayout();
			this->openPnl->SuspendLayout();
			this->depositPnl->SuspendLayout();
			this->closePnl->SuspendLayout();
			this->transferPnl->SuspendLayout();
			this->loanPnl->SuspendLayout();
			this->balancePnl->SuspendLayout();
			this->accountsPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(609, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LOG OUT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerHome::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CUSTOMER HOME  ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(326, 90);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(152, 68);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"View Accounts: ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(500, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ACCOUNTS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CustomerHome::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(260, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(197, 3);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(260, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(197, 3);
			this->panel2->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(394, 180);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 31);
			this->button3->TabIndex = 11;
			this->button3->Text = L"DEPOSIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CustomerHome::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(279, 183);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(109, 26);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Money Deposit: ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(617, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 31);
			this->button4->TabIndex = 13;
			this->button4->Text = L"WITHDRAW";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CustomerHome::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(486, 183);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(125, 26);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Money Withdraw:";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(394, 228);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 31);
			this->button5->TabIndex = 15;
			this->button5->Text = L"LOAN";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CustomerHome::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(279, 231);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(109, 26);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"Take Loan: ";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(617, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 31);
			this->button6->TabIndex = 17;
			this->button6->Text = L"BALANCE";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &CustomerHome::button6_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(486, 231);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(125, 26);
			this->textBox5->TabIndex = 16;
			this->textBox5->Text = L"Balance Reports:";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(394, 277);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 31);
			this->button7->TabIndex = 19;
			this->button7->Text = L"OPEN";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CustomerHome::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(279, 280);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(109, 26);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"Open Account: ";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(617, 277);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 31);
			this->button8->TabIndex = 21;
			this->button8->Text = L"EDIT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &CustomerHome::button8_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(486, 280);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(125, 26);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"Edit Account:";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(617, 327);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(86, 31);
			this->button13->TabIndex = 37;
			this->button13->Text = L"Transfer";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &CustomerHome::button13_Click);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(486, 330);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(125, 26);
			this->textBox14->TabIndex = 36;
			this->textBox14->Text = L"Transfer Money:";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(394, 327);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 31);
			this->button14->TabIndex = 35;
			this->button14->Text = L"CLOSE";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &CustomerHome::button14_Click);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(279, 330);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(109, 26);
			this->textBox16->TabIndex = 34;
			this->textBox16->Text = L"Close Account: ";
			// 
			// editPnl
			// 
			this->editPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->editPnl->Controls->Add(this->button15);
			this->editPnl->Controls->Add(this->panel3);
			this->editPnl->Controls->Add(this->editAccNum);
			this->editPnl->Controls->Add(this->label15);
			this->editPnl->Controls->Add(this->editAccButton);
			this->editPnl->Controls->Add(this->panel11);
			this->editPnl->Controls->Add(this->editAccountType);
			this->editPnl->Controls->Add(this->label9);
			this->editPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->editPnl->Location = System::Drawing::Point(12, 69);
			this->editPnl->Name = L"editPnl";
			this->editPnl->Size = System::Drawing::Size(697, 379);
			this->editPnl->TabIndex = 42;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button15->Location = System::Drawing::Point(616, 323);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(56, 34);
			this->button15->TabIndex = 31;
			this->button15->Text = L"BACK";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &CustomerHome::button15_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(203, 133);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(469, 2);
			this->panel3->TabIndex = 9;
			// 
			// editAccNum
			// 
			this->editAccNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->editAccNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->editAccNum->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editAccNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->editAccNum->Location = System::Drawing::Point(213, 100);
			this->editAccNum->Name = L"editAccNum";
			this->editAccNum->Size = System::Drawing::Size(448, 28);
			this->editAccNum->TabIndex = 8;
			this->editAccNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->editAccNum->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::editAccNum_KeyDown);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(26, 96);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(196, 37);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Acc. Number: ";
			// 
			// editAccButton
			// 
			this->editAccButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->editAccButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editAccButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editAccButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->editAccButton->Location = System::Drawing::Point(256, 326);
			this->editAccButton->Name = L"editAccButton";
			this->editAccButton->Size = System::Drawing::Size(187, 34);
			this->editAccButton->TabIndex = 6;
			this->editAccButton->Text = L"EDIT ACCOUNT";
			this->editAccButton->UseVisualStyleBackColor = false;
			this->editAccButton->Click += gcnew System::EventHandler(this, &CustomerHome::button12_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel11->Location = System::Drawing::Point(203, 242);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(469, 2);
			this->panel11->TabIndex = 2;
			// 
			// editAccountType
			// 
			this->editAccountType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->editAccountType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->editAccountType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editAccountType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->editAccountType->Location = System::Drawing::Point(213, 209);
			this->editAccountType->Name = L"editAccountType";
			this->editAccountType->Size = System::Drawing::Size(448, 28);
			this->editAccountType->TabIndex = 1;
			this->editAccountType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->editAccountType->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::editAccountType_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(26, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 37);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Acc. Type: ";
			// 
			// withdrawPnl
			// 
			this->withdrawPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->withdrawPnl->Controls->Add(this->button11);
			this->withdrawPnl->Controls->Add(this->withdrawButton);
			this->withdrawPnl->Controls->Add(this->panel6);
			this->withdrawPnl->Controls->Add(this->withdrawAmount);
			this->withdrawPnl->Controls->Add(this->label4);
			this->withdrawPnl->Controls->Add(this->panel7);
			this->withdrawPnl->Controls->Add(this->withdrawAccNo);
			this->withdrawPnl->Controls->Add(this->label5);
			this->withdrawPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->withdrawPnl->Location = System::Drawing::Point(12, 69);
			this->withdrawPnl->Name = L"withdrawPnl";
			this->withdrawPnl->Size = System::Drawing::Size(697, 379);
			this->withdrawPnl->TabIndex = 43;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button11->Location = System::Drawing::Point(616, 323);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 34);
			this->button11->TabIndex = 29;
			this->button11->Text = L"BACK";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &CustomerHome::button11_Click);
			// 
			// withdrawButton
			// 
			this->withdrawButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->withdrawButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->withdrawButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->withdrawButton->Location = System::Drawing::Point(256, 323);
			this->withdrawButton->Name = L"withdrawButton";
			this->withdrawButton->Size = System::Drawing::Size(187, 34);
			this->withdrawButton->TabIndex = 6;
			this->withdrawButton->Text = L"WITHDRAW";
			this->withdrawButton->UseVisualStyleBackColor = false;
			this->withdrawButton->Click += gcnew System::EventHandler(this, &CustomerHome::button10_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(203, 241);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(469, 2);
			this->panel6->TabIndex = 5;
			// 
			// withdrawAmount
			// 
			this->withdrawAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->withdrawAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->withdrawAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->withdrawAmount->Location = System::Drawing::Point(213, 208);
			this->withdrawAmount->Name = L"withdrawAmount";
			this->withdrawAmount->Size = System::Drawing::Size(448, 28);
			this->withdrawAmount->TabIndex = 4;
			this->withdrawAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->withdrawAmount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::withdrawAmount_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Amount: ";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(203, 161);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(469, 2);
			this->panel7->TabIndex = 2;
			// 
			// withdrawAccNo
			// 
			this->withdrawAccNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->withdrawAccNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->withdrawAccNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawAccNo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->withdrawAccNo->Location = System::Drawing::Point(213, 128);
			this->withdrawAccNo->Name = L"withdrawAccNo";
			this->withdrawAccNo->Size = System::Drawing::Size(448, 28);
			this->withdrawAccNo->TabIndex = 1;
			this->withdrawAccNo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->withdrawAccNo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::withdrawAccNo_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 37);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Account No: ";
			// 
			// openPnl
			// 
			this->openPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->openPnl->Controls->Add(this->button10);
			this->openPnl->Controls->Add(this->openAccButton);
			this->openPnl->Controls->Add(this->panel8);
			this->openPnl->Controls->Add(this->initAmmount);
			this->openPnl->Controls->Add(this->label6);
			this->openPnl->Controls->Add(this->panel9);
			this->openPnl->Controls->Add(this->accType);
			this->openPnl->Controls->Add(this->label7);
			this->openPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->openPnl->Location = System::Drawing::Point(12, 69);
			this->openPnl->Name = L"openPnl";
			this->openPnl->Size = System::Drawing::Size(697, 379);
			this->openPnl->TabIndex = 44;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button10->Location = System::Drawing::Point(616, 323);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 34);
			this->button10->TabIndex = 28;
			this->button10->Text = L"BACK";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &CustomerHome::button10_Click_1);
			// 
			// openAccButton
			// 
			this->openAccButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->openAccButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->openAccButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openAccButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->openAccButton->Location = System::Drawing::Point(256, 321);
			this->openAccButton->Name = L"openAccButton";
			this->openAccButton->Size = System::Drawing::Size(187, 34);
			this->openAccButton->TabIndex = 6;
			this->openAccButton->Text = L"OPEN ACCOUNT";
			this->openAccButton->UseVisualStyleBackColor = false;
			this->openAccButton->Click += gcnew System::EventHandler(this, &CustomerHome::button11_Click_1);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(203, 238);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(469, 2);
			this->panel8->TabIndex = 5;
			// 
			// initAmmount
			// 
			this->initAmmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->initAmmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->initAmmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initAmmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->initAmmount->Location = System::Drawing::Point(213, 205);
			this->initAmmount->Name = L"initAmmount";
			this->initAmmount->Size = System::Drawing::Size(448, 28);
			this->initAmmount->TabIndex = 4;
			this->initAmmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->initAmmount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::initAmmount_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 37);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Amount: ";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel9->Location = System::Drawing::Point(203, 158);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(469, 2);
			this->panel9->TabIndex = 2;
			// 
			// accType
			// 
			this->accType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->accType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->accType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accType->Location = System::Drawing::Point(213, 125);
			this->accType->Name = L"accType";
			this->accType->Size = System::Drawing::Size(448, 28);
			this->accType->TabIndex = 1;
			this->accType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->accType->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::accType_KeyDown);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 37);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Acc. Type: ";
			// 
			// depositPnl
			// 
			this->depositPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->depositPnl->Controls->Add(this->button9);
			this->depositPnl->Controls->Add(this->depositAccNo);
			this->depositPnl->Controls->Add(this->depositButton);
			this->depositPnl->Controls->Add(this->panel5);
			this->depositPnl->Controls->Add(this->depositAmmount);
			this->depositPnl->Controls->Add(this->label3);
			this->depositPnl->Controls->Add(this->panel4);
			this->depositPnl->Controls->Add(this->label2);
			this->depositPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->depositPnl->Location = System::Drawing::Point(12, 69);
			this->depositPnl->Name = L"depositPnl";
			this->depositPnl->Size = System::Drawing::Size(697, 379);
			this->depositPnl->TabIndex = 45;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button9->Location = System::Drawing::Point(616, 321);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 34);
			this->button9->TabIndex = 27;
			this->button9->Text = L"BACK";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &CustomerHome::button9_Click_1);
			// 
			// depositAccNo
			// 
			this->depositAccNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->depositAccNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->depositAccNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositAccNo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->depositAccNo->Location = System::Drawing::Point(213, 127);
			this->depositAccNo->Name = L"depositAccNo";
			this->depositAccNo->Size = System::Drawing::Size(448, 28);
			this->depositAccNo->TabIndex = 24;
			this->depositAccNo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->depositAccNo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::depositAccNo_KeyDown);
			// 
			// depositButton
			// 
			this->depositButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->depositButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->depositButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->depositButton->Location = System::Drawing::Point(256, 323);
			this->depositButton->Name = L"depositButton";
			this->depositButton->Size = System::Drawing::Size(187, 34);
			this->depositButton->TabIndex = 6;
			this->depositButton->Text = L"DEPOSIT";
			this->depositButton->UseVisualStyleBackColor = false;
			this->depositButton->Click += gcnew System::EventHandler(this, &CustomerHome::button9_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(203, 238);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(469, 2);
			this->panel5->TabIndex = 5;
			// 
			// depositAmmount
			// 
			this->depositAmmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->depositAmmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->depositAmmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositAmmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->depositAmmount->Location = System::Drawing::Point(213, 205);
			this->depositAmmount->Name = L"depositAmmount";
			this->depositAmmount->Size = System::Drawing::Size(448, 28);
			this->depositAmmount->TabIndex = 4;
			this->depositAmmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->depositAmmount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::depositAmmount_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Amount: ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(203, 158);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(469, 2);
			this->panel4->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Account No: ";
			// 
			// closePnl
			// 
			this->closePnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->closePnl->Controls->Add(this->button12);
			this->closePnl->Controls->Add(this->closeAccButton);
			this->closePnl->Controls->Add(this->panel10);
			this->closePnl->Controls->Add(this->closeAccNo);
			this->closePnl->Controls->Add(this->label8);
			this->closePnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closePnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closePnl->Location = System::Drawing::Point(12, 69);
			this->closePnl->Name = L"closePnl";
			this->closePnl->Size = System::Drawing::Size(697, 379);
			this->closePnl->TabIndex = 46;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button12->Location = System::Drawing::Point(616, 321);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(56, 34);
			this->button12->TabIndex = 30;
			this->button12->Text = L"BACK";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &CustomerHome::button12_Click_1);
			// 
			// closeAccButton
			// 
			this->closeAccButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closeAccButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeAccButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closeAccButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->closeAccButton->Location = System::Drawing::Point(256, 326);
			this->closeAccButton->Name = L"closeAccButton";
			this->closeAccButton->Size = System::Drawing::Size(187, 34);
			this->closeAccButton->TabIndex = 6;
			this->closeAccButton->Text = L"CLOSE ACCOUNT";
			this->closeAccButton->UseVisualStyleBackColor = false;
			this->closeAccButton->Click += gcnew System::EventHandler(this, &CustomerHome::button15_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel10->Location = System::Drawing::Point(203, 202);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(469, 2);
			this->panel10->TabIndex = 2;
			// 
			// closeAccNo
			// 
			this->closeAccNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->closeAccNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->closeAccNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closeAccNo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closeAccNo->Location = System::Drawing::Point(213, 169);
			this->closeAccNo->Name = L"closeAccNo";
			this->closeAccNo->Size = System::Drawing::Size(448, 28);
			this->closeAccNo->TabIndex = 1;
			this->closeAccNo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->closeAccNo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::closeAccNo_KeyDown);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 165);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(196, 37);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Acc. Number: ";
			// 
			// transferPnl
			// 
			this->transferPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->transferPnl->Controls->Add(this->button16);
			this->transferPnl->Controls->Add(this->label19);
			this->transferPnl->Controls->Add(this->label18);
			this->transferPnl->Controls->Add(this->toAccNum);
			this->transferPnl->Controls->Add(this->panel17);
			this->transferPnl->Controls->Add(this->label17);
			this->transferPnl->Controls->Add(this->fromAccNum);
			this->transferPnl->Controls->Add(this->transferButton);
			this->transferPnl->Controls->Add(this->panel12);
			this->transferPnl->Controls->Add(this->transferAmount);
			this->transferPnl->Controls->Add(this->label10);
			this->transferPnl->Controls->Add(this->panel13);
			this->transferPnl->Controls->Add(this->label11);
			this->transferPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->transferPnl->Location = System::Drawing::Point(12, 69);
			this->transferPnl->Name = L"transferPnl";
			this->transferPnl->Size = System::Drawing::Size(697, 379);
			this->transferPnl->TabIndex = 47;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button16->Location = System::Drawing::Point(616, 326);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(56, 34);
			this->button16->TabIndex = 31;
			this->button16->Text = L"BACK";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &CustomerHome::button16_Click_1);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(152, 184);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 21);
			this->label19->TabIndex = 29;
			this->label19->Text = L"(To)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(131, 88);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 21);
			this->label18->TabIndex = 28;
			this->label18->Text = L"(From)";
			// 
			// toAccNum
			// 
			this->toAccNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->toAccNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->toAccNum->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toAccNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->toAccNum->Location = System::Drawing::Point(213, 151);
			this->toAccNum->Name = L"toAccNum";
			this->toAccNum->Size = System::Drawing::Size(448, 28);
			this->toAccNum->TabIndex = 27;
			this->toAccNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toAccNum->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::toAccNum_KeyDown);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel17->Location = System::Drawing::Point(203, 184);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(469, 2);
			this->panel17->TabIndex = 26;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(26, 147);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(181, 37);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Account No: ";
			// 
			// fromAccNum
			// 
			this->fromAccNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->fromAccNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fromAccNum->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fromAccNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fromAccNum->Location = System::Drawing::Point(213, 55);
			this->fromAccNum->Name = L"fromAccNum";
			this->fromAccNum->Size = System::Drawing::Size(448, 28);
			this->fromAccNum->TabIndex = 24;
			this->fromAccNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->fromAccNum->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::fromAccNum_KeyDown);
			// 
			// transferButton
			// 
			this->transferButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->transferButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->transferButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->transferButton->Location = System::Drawing::Point(256, 323);
			this->transferButton->Name = L"transferButton";
			this->transferButton->Size = System::Drawing::Size(187, 34);
			this->transferButton->TabIndex = 6;
			this->transferButton->Text = L"TRANSFER";
			this->transferButton->UseVisualStyleBackColor = false;
			this->transferButton->Click += gcnew System::EventHandler(this, &CustomerHome::button16_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel12->Location = System::Drawing::Point(203, 275);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(469, 2);
			this->panel12->TabIndex = 5;
			// 
			// transferAmount
			// 
			this->transferAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->transferAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->transferAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->transferAmount->Location = System::Drawing::Point(213, 242);
			this->transferAmount->Name = L"transferAmount";
			this->transferAmount->Size = System::Drawing::Size(448, 28);
			this->transferAmount->TabIndex = 4;
			this->transferAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->transferAmount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::transferAmount_KeyDown);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(26, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 37);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Amount: ";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel13->Location = System::Drawing::Point(203, 88);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(469, 2);
			this->panel13->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 51);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(181, 37);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Account No: ";
			// 
			// loanPnl
			// 
			this->loanPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->loanPnl->Controls->Add(this->button17);
			this->loanPnl->Controls->Add(this->label20);
			this->loanPnl->Controls->Add(this->loanDuration);
			this->loanPnl->Controls->Add(this->panel16);
			this->loanPnl->Controls->Add(this->label14);
			this->loanPnl->Controls->Add(this->loanAccNumber);
			this->loanPnl->Controls->Add(this->loanButton);
			this->loanPnl->Controls->Add(this->panel14);
			this->loanPnl->Controls->Add(this->loanAmmount);
			this->loanPnl->Controls->Add(this->label12);
			this->loanPnl->Controls->Add(this->panel15);
			this->loanPnl->Controls->Add(this->label13);
			this->loanPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loanPnl->Location = System::Drawing::Point(12, 69);
			this->loanPnl->Name = L"loanPnl";
			this->loanPnl->Size = System::Drawing::Size(697, 379);
			this->loanPnl->TabIndex = 48;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button17->Location = System::Drawing::Point(616, 321);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(56, 34);
			this->button17->TabIndex = 32;
			this->button17->Text = L"BACK";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &CustomerHome::button17_Click_1);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(85, 259);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 21);
			this->label20->TabIndex = 29;
			this->label20->Text = L"(dd/mm/yyyy)";
			// 
			// loanDuration
			// 
			this->loanDuration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->loanDuration->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loanDuration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanDuration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loanDuration->Location = System::Drawing::Point(213, 223);
			this->loanDuration->Name = L"loanDuration";
			this->loanDuration->Size = System::Drawing::Size(448, 28);
			this->loanDuration->TabIndex = 28;
			this->loanDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->loanDuration->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::loanDuration_KeyDown);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel16->Location = System::Drawing::Point(203, 256);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(469, 2);
			this->panel16->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(26, 219);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 37);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Duration: ";
			// 
			// loanAccNumber
			// 
			this->loanAccNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->loanAccNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loanAccNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanAccNumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loanAccNumber->Location = System::Drawing::Point(213, 66);
			this->loanAccNumber->Name = L"loanAccNumber";
			this->loanAccNumber->Size = System::Drawing::Size(448, 28);
			this->loanAccNumber->TabIndex = 24;
			this->loanAccNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->loanAccNumber->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::loanAccNumber_KeyDown);
			// 
			// loanButton
			// 
			this->loanButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loanButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loanButton->Location = System::Drawing::Point(256, 323);
			this->loanButton->Name = L"loanButton";
			this->loanButton->Size = System::Drawing::Size(187, 34);
			this->loanButton->TabIndex = 6;
			this->loanButton->Text = L"LOAN";
			this->loanButton->UseVisualStyleBackColor = false;
			this->loanButton->Click += gcnew System::EventHandler(this, &CustomerHome::button17_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel14->Location = System::Drawing::Point(203, 177);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(469, 2);
			this->panel14->TabIndex = 5;
			// 
			// loanAmmount
			// 
			this->loanAmmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->loanAmmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->loanAmmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanAmmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loanAmmount->Location = System::Drawing::Point(213, 144);
			this->loanAmmount->Name = L"loanAmmount";
			this->loanAmmount->Size = System::Drawing::Size(448, 28);
			this->loanAmmount->TabIndex = 4;
			this->loanAmmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->loanAmmount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::loanAmmount_KeyDown);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 140);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 37);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Amount: ";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel15->Location = System::Drawing::Point(203, 97);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(469, 2);
			this->panel15->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(26, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(181, 37);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Account No: ";
			// 
			// balancePnl
			// 
			this->balancePnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->balancePnl->Controls->Add(this->balanceReport);
			this->balancePnl->Controls->Add(this->label16);
			this->balancePnl->Controls->Add(this->reportShowButton);
			this->balancePnl->Controls->Add(this->balancReportAcc);
			this->balancePnl->Controls->Add(this->balanceReportBack);
			this->balancePnl->Controls->Add(this->panel18);
			this->balancePnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balancePnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->balancePnl->Location = System::Drawing::Point(12, 69);
			this->balancePnl->Name = L"balancePnl";
			this->balancePnl->Size = System::Drawing::Size(697, 396);
			this->balancePnl->TabIndex = 49;
			// 
			// balanceReport
			// 
			this->balanceReport->AutoArrange = false;
			this->balanceReport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->balanceReport->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->EVENT, this->BALANCE,
					this->TIME
			});
			this->balanceReport->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->balanceReport->FullRowSelect = true;
			this->balanceReport->GridLines = true;
			this->balanceReport->HideSelection = false;
			this->balanceReport->Location = System::Drawing::Point(33, 64);
			this->balanceReport->MultiSelect = false;
			this->balanceReport->Name = L"balanceReport";
			this->balanceReport->Size = System::Drawing::Size(639, 285);
			this->balanceReport->TabIndex = 0;
			this->balanceReport->UseCompatibleStateImageBehavior = false;
			this->balanceReport->View = System::Windows::Forms::View::Details;
			// 
			// EVENT
			// 
			this->EVENT->Text = L"EVENT";
			this->EVENT->Width = 179;
			// 
			// BALANCE
			// 
			this->BALANCE->Text = L"BALANCE";
			this->BALANCE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->BALANCE->Width = 230;
			// 
			// TIME
			// 
			this->TIME->Text = L"TIME";
			this->TIME->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TIME->Width = 230;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(26, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(181, 37);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Account No: ";
			// 
			// reportShowButton
			// 
			this->reportShowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->reportShowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reportShowButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reportShowButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->reportShowButton->Location = System::Drawing::Point(616, 11);
			this->reportShowButton->Name = L"reportShowButton";
			this->reportShowButton->Size = System::Drawing::Size(56, 34);
			this->reportShowButton->TabIndex = 26;
			this->reportShowButton->Text = L"SHOW";
			this->reportShowButton->UseVisualStyleBackColor = false;
			this->reportShowButton->Click += gcnew System::EventHandler(this, &CustomerHome::reportShowButton_Click);
			// 
			// balancReportAcc
			// 
			this->balancReportAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->balancReportAcc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->balancReportAcc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balancReportAcc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->balancReportAcc->Location = System::Drawing::Point(213, 15);
			this->balancReportAcc->Name = L"balancReportAcc";
			this->balancReportAcc->Size = System::Drawing::Size(371, 28);
			this->balancReportAcc->TabIndex = 24;
			this->balancReportAcc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->balancReportAcc->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CustomerHome::balancReportAcc_KeyDown);
			// 
			// balanceReportBack
			// 
			this->balanceReportBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->balanceReportBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->balanceReportBack->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balanceReportBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->balanceReportBack->Location = System::Drawing::Point(256, 355);
			this->balanceReportBack->Name = L"balanceReportBack";
			this->balanceReportBack->Size = System::Drawing::Size(187, 34);
			this->balanceReportBack->TabIndex = 6;
			this->balanceReportBack->Text = L"BACK";
			this->balanceReportBack->UseVisualStyleBackColor = false;
			this->balanceReportBack->Click += gcnew System::EventHandler(this, &CustomerHome::button18_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel18->Location = System::Drawing::Point(203, 46);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(392, 2);
			this->panel18->TabIndex = 2;
			// 
			// accountsPnl
			// 
			this->accountsPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->accountsPnl->Controls->Add(this->accountsDetails);
			this->accountsPnl->Controls->Add(this->backAllAcc);
			this->accountsPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountsPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accountsPnl->Location = System::Drawing::Point(12, 69);
			this->accountsPnl->Name = L"accountsPnl";
			this->accountsPnl->Size = System::Drawing::Size(697, 396);
			this->accountsPnl->TabIndex = 50;
			// 
			// accountsDetails
			// 
			this->accountsDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->accountsDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->accountID,
					this->accountType, this->customerID
			});
			this->accountsDetails->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountsDetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accountsDetails->FullRowSelect = true;
			this->accountsDetails->GridLines = true;
			this->accountsDetails->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->accountsDetails->HideSelection = false;
			this->accountsDetails->Location = System::Drawing::Point(29, 19);
			this->accountsDetails->MultiSelect = false;
			this->accountsDetails->Name = L"accountsDetails";
			this->accountsDetails->Size = System::Drawing::Size(640, 330);
			this->accountsDetails->TabIndex = 0;
			this->accountsDetails->UseCompatibleStateImageBehavior = false;
			this->accountsDetails->View = System::Windows::Forms::View::Details;
			// 
			// accountID
			// 
			this->accountID->Text = L"ACCOUNT ID";
			this->accountID->Width = 230;
			// 
			// accountType
			// 
			this->accountType->Text = L"ACCOUNT TYPE";
			this->accountType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->accountType->Width = 180;
			// 
			// customerID
			// 
			this->customerID->Text = L"CUSTOMER";
			this->customerID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerID->Width = 230;
			// 
			// backAllAcc
			// 
			this->backAllAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->backAllAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backAllAcc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backAllAcc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->backAllAcc->Location = System::Drawing::Point(256, 355);
			this->backAllAcc->Name = L"backAllAcc";
			this->backAllAcc->Size = System::Drawing::Size(187, 34);
			this->backAllAcc->TabIndex = 6;
			this->backAllAcc->Text = L"BACK";
			this->backAllAcc->UseVisualStyleBackColor = false;
			this->backAllAcc->Click += gcnew System::EventHandler(this, &CustomerHome::button19_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// CustomerHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 477);
			this->Controls->Add(this->accountsPnl);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->balancePnl);
			this->Controls->Add(this->depositPnl);
			this->Controls->Add(this->openPnl);
			this->Controls->Add(this->withdrawPnl);
			this->Controls->Add(this->closePnl);
			this->Controls->Add(this->editPnl);
			this->Controls->Add(this->transferPnl);
			this->Controls->Add(this->loanPnl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CustomerHome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CustomerHome";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &CustomerHome::CustomerHome_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CustomerHome::CustomerHome_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CustomerHome::CustomerHome_MouseUp);
			this->editPnl->ResumeLayout(false);
			this->editPnl->PerformLayout();
			this->withdrawPnl->ResumeLayout(false);
			this->withdrawPnl->PerformLayout();
			this->openPnl->ResumeLayout(false);
			this->openPnl->PerformLayout();
			this->depositPnl->ResumeLayout(false);
			this->depositPnl->PerformLayout();
			this->closePnl->ResumeLayout(false);
			this->closePnl->PerformLayout();
			this->transferPnl->ResumeLayout(false);
			this->transferPnl->PerformLayout();
			this->loanPnl->ResumeLayout(false);
			this->loanPnl->PerformLayout();
			this->balancePnl->ResumeLayout(false);
			this->balancePnl->PerformLayout();
			this->accountsPnl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		bool dragging;
		Point offset;

	private: System::Void CustomerHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void CustomerHome_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void CustomerHome_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	private:
		bool isValidAccNum(String^ accNum);
		bool isValidAccType(String^ accType);
		bool isValidAmmount(String^ ammount);
		bool isValidDate(int day, int month, int year);

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		accountsPnl->Show();
		accountsDetails->Items->Clear();

		ifstream allAccounts;

		allAccounts.open("Customers/AC" + customer.getCustomerID() + ".txt");

		string column[3];

		while (!allAccounts.eof()) {
			getline(allAccounts, column[0], ',');
			getline(allAccounts, column[1], ',');
			getline(allAccounts, column[2], '\n');

			ListViewItem^ accountDetails = gcnew ListViewItem();

			accountDetails->Text = gcnew String(column[0].c_str());
			accountDetails->SubItems->Add(gcnew String(column[1].c_str()));
			accountDetails->SubItems->Add(gcnew String(column[2].c_str()));

			accountsDetails->Items->Add(accountDetails);

			char ch;
			allAccounts >> ch;

			if (ch < 0 || ch > 127) {
				break;
			}
		}

		allAccounts.close();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		depositPnl->Show();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		withdrawPnl->Show();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		openPnl->Show();
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		editPnl->Show();
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		transferPnl->Show();
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		closePnl->Show();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		loanPnl->Show();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		balancePnl->Show();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccNum(editAccNum->Text)) {
			if (isValidAccType(editAccountType->Text)) {
				for (int account = 0; account < customer.getNoOfAccounts(); account++) {
					if (customer.accounts[account].getAccountNo() == marshal_as<string>(editAccNum->Text)) {
						customer.accounts[account].setAccountType(marshal_as<string>(editAccountType->Text));
						customer.saveCustomerInfo(customer.getCustomerID());
						MessageBox::Show("Account Edited!", "Edit", MessageBoxButtons::OK, MessageBoxIcon::Information);

						editPnl->Hide();

						editAccNum->ResetText();
						editAccountType->ResetText();
					}
				}
			}
			else {
				MessageBox::Show("Account Type can only be \"Loan\" or \"Saving\"!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				editAccountType->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			editAccNum->ResetText();
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccNum(withdrawAccNo->Text)) {
			if (isValidAmmount(withdrawAmount->Text)) {
				for (int account = 0; account < customer.getNoOfAccounts(); account++) {
					if (customer.accounts[account].getAccountNo() == marshal_as<string>(withdrawAccNo->Text)) {
						if (stod(marshal_as<string>(withdrawAmount->Text)) <= customer.accounts[account].getBalance()) {
							customer.accounts[account].withdraw(stod(marshal_as<string>(withdrawAmount->Text)));
							MessageBox::Show("Ammount Withdrawed!", "Withdraw", MessageBoxButtons::OK, MessageBoxIcon::Information);

							withdrawPnl->Hide();

							withdrawAccNo->ResetText();
							withdrawAmount->ResetText();
					
						}
						else {
							if (MessageBox::Show("You don't have enough Balance! Do you want to take a Loan?", "Balance", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
								withdrawPnl->Hide();
								
								withdrawAccNo->ResetText();
								withdrawAmount->ResetText();

								button5->PerformClick();
							}
						}
					}
				}
			}
			else {
				MessageBox::Show("One time ammount cannot be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				withdrawAmount->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			withdrawAccNo->ResetText();
		}
	}

	private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccType(accType->Text)) {
			if (isValidAmmount(initAmmount->Text)) {
				Account newAccount(marshal_as<string>(accType->Text));

				customer.setCustomerAccount(newAccount);

				customer.accounts[customer.getNoOfAccounts() - 1].setAccountType(marshal_as<string>(accType->Text));
				customer.accounts[customer.getNoOfAccounts() - 1].deposit(stod(marshal_as<string>(initAmmount->Text)));

				//MessageBox::Show(gcnew String(customer.accounts[customer.getNoOfAccounts() - 1].getBalance().ToString()), "Balance", MessageBoxButtons::OK, MessageBoxIcon::Information);

				customer.saveCustomerInfo(customer.getCustomerID());

				//MessageBox::Show(gcnew String(customer.accounts[customer.getNoOfAccounts() - 1].getAccountNo().c_str()));
				MessageBox::Show(gcnew String(("Please Note Your Account No: " + customer.accounts[customer.getNoOfAccounts() - 1].getAccountNo()).c_str()), "Account Number", MessageBoxButtons::OK, MessageBoxIcon::Information);

				openPnl->Hide();

				accType->ResetText();
				initAmmount->ResetText();
			}
			else {
				MessageBox::Show("One time ammount cannot be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				initAmmount->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Type can only be \"Loan\" or \"Saving\"!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			accType->ResetText();
		}
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccNum(depositAccNo->Text)) {
			if (isValidAmmount(depositAmmount->Text)) {
				for (int account = 0; account < customer.getNoOfAccounts(); account++) {
					if (customer.accounts[account].getAccountNo() == marshal_as<string>(depositAccNo->Text)) {
						customer.accounts[account].deposit(stod(marshal_as<string>(depositAmmount->Text)));
						MessageBox::Show("Ammount Deposited!", "Deposit", MessageBoxButtons::OK, MessageBoxIcon::Information);

						depositPnl->Hide();

						depositAccNo->ResetText();
						depositAmmount->ResetText();
					}
				}
			}
			else {
				MessageBox::Show("One time ammount cannot be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				depositAmmount->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			depositAccNo->ResetText();
		}
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccNum(closeAccNo->Text)) {
			for (int account = 0; account < customer.getNoOfAccounts(); account++) {
				if (customer.accounts[account].getAccountNo() == marshal_as<string>(closeAccNo->Text)) {
					if (customer.accounts[account].getBalance() == 0) {
						customer.accounts.erase(customer.accounts.begin() + account);
						MessageBox::Show("Account Closed!", "Closed", MessageBoxButtons::OK, MessageBoxIcon::Information);

						closePnl->Hide();
						closeAccNo->ResetText();
					}
					else if (customer.accounts[account].getBalance() > 0) {
						MessageBox::Show("Account Conatains Ammount, Transfer or Withdraw your Money to Close Account", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						
						closePnl->Hide();
						closeAccNo->ResetText();
					}
					else if (customer.accounts[account].getBalance() < 0) {
						MessageBox::Show("Account has Loan, Transfer or Deposit Money to Clear and Close Account", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

						closePnl->Hide();
						closeAccNo->ResetText();
					}
				}
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			closeAccNo->ResetText();
		}
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isValidAccNum(fromAccNum->Text) && isValidAccNum(toAccNum->Text)) {
			if (isValidAmmount(transferAmount->Text)) {
				for (int fromAccount = 0; fromAccount < customer.getNoOfAccounts(); fromAccount++) {
					if (customer.accounts[fromAccount].getAccountNo() == marshal_as<string>(fromAccNum->Text)) {
						customer.accounts[fromAccount].withdraw(stod(marshal_as<string>(transferAmount->Text)));

						for (int toAccount = 0; toAccount < customer.getNoOfAccounts(); toAccount++) {
							if (customer.accounts[toAccount].getAccountNo() == marshal_as<string>(toAccNum->Text)) {
								if (stod(marshal_as<string>(transferAmount->Text)) <= customer.accounts[fromAccount].getBalance()) {
									customer.accounts[toAccount].deposit(stod(marshal_as<string>(transferAmount->Text)));
									MessageBox::Show("Ammount Transfered!", "Transfer", MessageBoxButtons::OK, MessageBoxIcon::Information);

									transferPnl->Hide();

									transferAmount->ResetText();
									fromAccNum->ResetText();
									toAccNum->ResetText();

									break;
								}
								else {
									MessageBox::Show("You Don't Have Enough Money to Transfer!");
								}
							}
						}
					}
				}
			}
			else {
				MessageBox::Show("One time ammount cannot be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				transferAmount->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			fromAccNum->ResetText();
			toAccNum->ResetText();
		}
	}

	private: System::Void reportShowButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < customer.getNoOfAccounts(); i++) {
			if (marshal_as<string>(balancReportAcc->Text) == customer.accounts[i].getAccountNo()) {
				balanceReport->Items->Clear();
				
				vector<string> report[3];

				tie(report[0], report[1], report[2]) = customer.accounts[i].balanceEquiry();

				for (int row = 0; row < report[0].size(); row++) {
					ListViewItem^ accEvent = gcnew ListViewItem();

					accEvent->Text = gcnew String(report[0][row].c_str());
					accEvent->SubItems->Add(gcnew String(report[1][row].c_str()));
					accEvent->SubItems->Add(gcnew String(report[2][row].c_str()));

					balanceReport->Items->Add(accEvent);
				}
			}
		}
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<string> date;
		string dateSegment;
		stringstream sduration;
		sduration << marshal_as<string>(loanDuration->Text);

		while (getline(sduration, dateSegment, '/')) {
			date.push_back(dateSegment);
		}

		int day = stoi(date[0]);
		int month = stoi(date[1]);
		int year = stoi(date[2]);
		
		if (isValidAccNum(loanAccNumber->Text)) {
			if (isValidAmmount(loanAmmount->Text)) {
				if (isValidDate(day, month, year)) {
					for (int account = 0; account < customer.getNoOfAccounts(); account++) {
						if (customer.accounts[account].getAccountNo() == marshal_as<string>(loanAccNumber->Text)) {
							if (customer.accounts[account].getBalance() < stod(marshal_as<string>(loanAmmount->Text))) {
								customer.accounts[account].setLoan(stod(marshal_as<string>(loanAmmount->Text)), day, month, year);
								MessageBox::Show("Loan Granted", "Loan", MessageBoxButtons::OK, MessageBoxIcon::Information);

								loanPnl->Hide();

								loanAccNumber->ResetText();
								loanAmmount->ResetText();
								loanDuration->ResetText();
							}
							else {
								if (MessageBox::Show("You have more Balance in Account than the ammount of Loan you Demanded. Loan Not Granted! Do you want to withdraw ammount?", "Loan", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
									customer.accounts[account].withdraw(stod(marshal_as<string>(loanAmmount->Text)));
									MessageBox::Show("Ammount Withdrawed!", "Withdraw", MessageBoxButtons::OK, MessageBoxIcon::Information);

									loanPnl->Hide();

									loanAccNumber->ResetText();
									loanAmmount->ResetText();
									loanDuration->ResetText();
								}
								else {
									loanPnl->Hide();

									loanAccNumber->ResetText();
									loanAmmount->ResetText();
									loanDuration->ResetText();
								}
							}
						}
					}
				}
				else {
					MessageBox::Show("Please Enter a Valid Date for Duration", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					loanDuration->ResetText();
				}
			}
			else {
				MessageBox::Show("One time ammount cannot be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				loanAmmount->ResetText();
			}
		}
		else {
			MessageBox::Show("Account Number must contain only 13 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			loanAccNumber->ResetText();
		}
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		balancePnl->Hide();

		balancReportAcc->ResetText();
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		accountsPnl->Hide();

		accountsDetails->Items->Clear();
	}

	private: System::Void balancReportAcc_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			reportShowButton->PerformClick();
		}
	}

	private: System::Void depositAccNo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			depositAmmount->Focus();
		}
	}

	private: System::Void depositAmmount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			depositButton->Focus();
		}
	}

	private: System::Void accType_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			initAmmount->Focus();
		}
	}

	private: System::Void initAmmount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			openAccButton->PerformClick();
		}
	}

	private: System::Void withdrawAccNo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			withdrawAmount->Focus();
		}
	}

	private: System::Void withdrawAmount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			withdrawButton->PerformClick();
		}
	}

	private: System::Void closeAccNo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			closeAccButton->PerformClick();
		}
	}

	private: System::Void editAccNum_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			editAccountType->Focus();
		}
	}

	private: System::Void editAccountType_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			editAccButton->PerformClick();
		}
	}

	private: System::Void fromAccNum_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			toAccNum->Focus();
		}
	}

	private: System::Void toAccNum_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			transferAmount->Focus();
		}
	}

	private: System::Void transferAmount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			transferButton->PerformClick();
		}
	}

	private: System::Void loanAccNumber_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			loanAmmount->Focus();
		}
	}

	private: System::Void loanAmmount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			loanDuration->Focus();
		}
	}

	private: System::Void loanDuration_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			loanButton->PerformClick();
		}
	}

	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		depositPnl->Hide();

		depositAccNo->ResetText();
		depositAmmount->ResetText();
	}

	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
		openPnl->Hide();

		accType->ResetText();
		initAmmount->ResetText();
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		withdrawPnl->Hide();

		withdrawAccNo->ResetText();
		withdrawAmount->ResetText();
	}

	private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
		closePnl->Hide();

		closeAccNo->ResetText();
	}

	private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
		editPnl->Hide();

		editAccNum->ResetText();
		editAccountType->ResetText();
	}

	private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e) {
		transferPnl->Hide();

		transferAmount->ResetText();
		fromAccNum->ResetText();
		toAccNum->ResetText();
	}

	private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
		loanPnl->Hide();

		loanAccNumber->ResetText();
		loanDuration->ResetText();
		loanAmmount->ResetText();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do You want to Logout?", "LOG OUT", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
			customer.saveCustomerInfo(customer.getCustomerID());
			this->Hide();
		}
	}
};
}