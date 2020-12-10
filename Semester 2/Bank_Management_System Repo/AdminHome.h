#pragma once
#include "externObjects.h"
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
	/// Summary for AdminHome
	/// </summary>
public ref class AdminHome : public System::Windows::Forms::Form
{
	public:
		AdminHome(void)
		{
			InitializeComponent();

			this->SetStyle(static_cast<ControlStyles>(ControlStyles::AllPaintingInWmPaint | ControlStyles::DoubleBuffer | ControlStyles::UserPaint), true);
			this->UpdateStyles();

			createCustomerPnl->Hide();
			allCustomersPnl->Hide();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminHome()
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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ createCustomerPnl;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ customerAddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ customerPhone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ customerName;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ customerEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ initDeposit;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ accountType;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ allCustomersPnl;
	private: System::Windows::Forms::ListView^ allCustomers;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ColumnHeader^ customerUserName;
	private: System::Windows::Forms::ColumnHeader^ customerID;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Panel^ accountsPnl;
private: System::Windows::Forms::ListView^ accountsDetails;
private: System::Windows::Forms::ColumnHeader^ accountID;
private: System::Windows::Forms::ColumnHeader^ columnHeader1;
private: System::Windows::Forms::ColumnHeader^ columnHeader2;
private: System::Windows::Forms::Button^ backAllAcc;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminHome::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->createCustomerPnl = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->initDeposit = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->accountType = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->customerAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->customerPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->customerName = (gcnew System::Windows::Forms::TextBox());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->customerEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->allCustomersPnl = (gcnew System::Windows::Forms::Panel());
			this->allCustomers = (gcnew System::Windows::Forms::ListView());
			this->customerUserName = (gcnew System::Windows::Forms::ColumnHeader());
			this->customerID = (gcnew System::Windows::Forms::ColumnHeader());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->accountsPnl = (gcnew System::Windows::Forms::Panel());
			this->accountsDetails = (gcnew System::Windows::Forms::ListView());
			this->accountID = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->backAllAcc = (gcnew System::Windows::Forms::Button());
			this->createCustomerPnl->SuspendLayout();
			this->allCustomersPnl->SuspendLayout();
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
			this->button1->Click += gcnew System::EventHandler(this, &AdminHome::button1_Click);
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
			this->label1->Location = System::Drawing::Point(244, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"  ADMIN HOME  ";
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
			this->textBox1->Location = System::Drawing::Point(305, 90);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(191, 68);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"View All Customers: ";
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
			this->button2->Location = System::Drawing::Point(502, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CUSTOMERS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminHome::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(502, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ACCOUNTS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminHome::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(305, 164);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(191, 68);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"View All Accounts: ";
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
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(502, 235);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 35);
			this->button4->TabIndex = 9;
			this->button4->Text = L"CUSTOMER";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminHome::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(305, 238);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(191, 68);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Create Customer: ";
			// 
			// createCustomerPnl
			// 
			this->createCustomerPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->createCustomerPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->createCustomerPnl->Controls->Add(this->button17);
			this->createCustomerPnl->Controls->Add(this->initDeposit);
			this->createCustomerPnl->Controls->Add(this->panel8);
			this->createCustomerPnl->Controls->Add(this->label7);
			this->createCustomerPnl->Controls->Add(this->accountType);
			this->createCustomerPnl->Controls->Add(this->panel7);
			this->createCustomerPnl->Controls->Add(this->label6);
			this->createCustomerPnl->Controls->Add(this->panel6);
			this->createCustomerPnl->Controls->Add(this->customerAddress);
			this->createCustomerPnl->Controls->Add(this->label5);
			this->createCustomerPnl->Controls->Add(this->panel3);
			this->createCustomerPnl->Controls->Add(this->customerPhone);
			this->createCustomerPnl->Controls->Add(this->label4);
			this->createCustomerPnl->Controls->Add(this->customerName);
			this->createCustomerPnl->Controls->Add(this->createButton);
			this->createCustomerPnl->Controls->Add(this->panel5);
			this->createCustomerPnl->Controls->Add(this->customerEmail);
			this->createCustomerPnl->Controls->Add(this->label3);
			this->createCustomerPnl->Controls->Add(this->panel4);
			this->createCustomerPnl->Controls->Add(this->label2);
			this->createCustomerPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createCustomerPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->createCustomerPnl->Location = System::Drawing::Point(12, 69);
			this->createCustomerPnl->Name = L"createCustomerPnl";
			this->createCustomerPnl->Size = System::Drawing::Size(697, 379);
			this->createCustomerPnl->TabIndex = 46;
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
			this->button17->Location = System::Drawing::Point(616, 323);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(56, 34);
			this->button17->TabIndex = 37;
			this->button17->Text = L"BACK";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &AdminHome::button17_Click);
			// 
			// initDeposit
			// 
			this->initDeposit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->initDeposit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->initDeposit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->initDeposit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->initDeposit->Location = System::Drawing::Point(213, 245);
			this->initDeposit->Name = L"initDeposit";
			this->initDeposit->Size = System::Drawing::Size(448, 28);
			this->initDeposit->TabIndex = 36;
			this->initDeposit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->initDeposit->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::initDeposit_KeyDown);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(203, 278);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(469, 2);
			this->panel8->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 241);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 37);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Deposit: ";
			// 
			// accountType
			// 
			this->accountType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->accountType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->accountType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accountType->Location = System::Drawing::Point(213, 199);
			this->accountType->Name = L"accountType";
			this->accountType->Size = System::Drawing::Size(448, 28);
			this->accountType->TabIndex = 33;
			this->accountType->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->accountType->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::accountType_KeyDown);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(203, 232);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(469, 2);
			this->panel7->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 37);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Acc. Type: ";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(203, 186);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(469, 2);
			this->panel6->TabIndex = 30;
			// 
			// customerAddress
			// 
			this->customerAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->customerAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerAddress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->customerAddress->Location = System::Drawing::Point(213, 153);
			this->customerAddress->Name = L"customerAddress";
			this->customerAddress->Size = System::Drawing::Size(448, 28);
			this->customerAddress->TabIndex = 29;
			this->customerAddress->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerAddress->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::customerAddress_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 37);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Address: ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(203, 140);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(469, 2);
			this->panel3->TabIndex = 27;
			// 
			// customerPhone
			// 
			this->customerPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->customerPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerPhone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->customerPhone->Location = System::Drawing::Point(213, 107);
			this->customerPhone->Name = L"customerPhone";
			this->customerPhone->Size = System::Drawing::Size(448, 28);
			this->customerPhone->TabIndex = 26;
			this->customerPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerPhone->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::customerPhone_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 37);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Phone: ";
			// 
			// customerName
			// 
			this->customerName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->customerName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->customerName->Location = System::Drawing::Point(213, 23);
			this->customerName->Name = L"customerName";
			this->customerName->Size = System::Drawing::Size(448, 28);
			this->customerName->TabIndex = 24;
			this->customerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::customerName_KeyDown);
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->createButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->createButton->Location = System::Drawing::Point(256, 323);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(187, 34);
			this->createButton->TabIndex = 6;
			this->createButton->Text = L"CREATE";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &AdminHome::createButton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(203, 97);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(469, 2);
			this->panel5->TabIndex = 5;
			// 
			// customerEmail
			// 
			this->customerEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->customerEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->customerEmail->Location = System::Drawing::Point(213, 64);
			this->customerEmail->Name = L"customerEmail";
			this->customerEmail->Size = System::Drawing::Size(448, 28);
			this->customerEmail->TabIndex = 4;
			this->customerEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerEmail->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminHome::customerEmail_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email: ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(203, 56);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(469, 2);
			this->panel4->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name: ";
			// 
			// allCustomersPnl
			// 
			this->allCustomersPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->allCustomersPnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->allCustomersPnl->Controls->Add(this->allCustomers);
			this->allCustomersPnl->Controls->Add(this->button5);
			this->allCustomersPnl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allCustomersPnl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->allCustomersPnl->Location = System::Drawing::Point(12, 69);
			this->allCustomersPnl->Name = L"allCustomersPnl";
			this->allCustomersPnl->Size = System::Drawing::Size(697, 379);
			this->allCustomersPnl->TabIndex = 47;
			// 
			// allCustomers
			// 
			this->allCustomers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->allCustomers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->customerUserName,
					this->customerID
			});
			this->allCustomers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allCustomers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->allCustomers->FullRowSelect = true;
			this->allCustomers->GridLines = true;
			this->allCustomers->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->allCustomers->HideSelection = false;
			this->allCustomers->Location = System::Drawing::Point(29, 23);
			this->allCustomers->MultiSelect = false;
			this->allCustomers->Name = L"allCustomers";
			this->allCustomers->Size = System::Drawing::Size(640, 303);
			this->allCustomers->TabIndex = 0;
			this->allCustomers->UseCompatibleStateImageBehavior = false;
			this->allCustomers->View = System::Windows::Forms::View::Details;
			// 
			// customerUserName
			// 
			this->customerUserName->Text = L"USERNAME";
			this->customerUserName->Width = 320;
			// 
			// customerID
			// 
			this->customerID->Text = L"CUSTOMER ID";
			this->customerID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->customerID->Width = 320;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(256, 332);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 34);
			this->button5->TabIndex = 0;
			this->button5->Text = L"BACK";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminHome::button5_Click);
			// 
			// accountsPnl
			// 
			this->accountsPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
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
			this->accountsPnl->TabIndex = 51;
			// 
			// accountsDetails
			// 
			this->accountsDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->accountsDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->accountID,
					this->columnHeader1, this->columnHeader2
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
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ACCOUNT TYPE";
			this->columnHeader1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader1->Width = 180;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"CUSTOMER";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 230;
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
			// 
			// AdminHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 477);
			this->Controls->Add(this->allCustomersPnl);
			this->Controls->Add(this->createCustomerPnl);
			this->Controls->Add(this->accountsPnl);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminHome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminHome";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminHome::AdminHome_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminHome::AdminHome_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminHome::AdminHome_MouseUp);
			this->createCustomerPnl->ResumeLayout(false);
			this->createCustomerPnl->PerformLayout();
			this->allCustomersPnl->ResumeLayout(false);
			this->accountsPnl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		bool isValidName(String^ name);
		bool isValidEmail(String^ email);
		bool isValidPhone(String^ phone);
		bool isValidAccType(String^ accType);
		bool isValidAmmount(String^ ammount);

		bool dragging;
		Point offset;

	private: System::Void AdminHome_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void AdminHome_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void AdminHome_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		accountsPnl->Show();
		accountsDetails->Items->Clear();

		ifstream allAccounts;

		allAccounts.open("Accounts/allAccounts.txt");

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

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		createCustomerPnl->Show();
	}
	
	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream check;

		check.open("customerSignIn.txt");
		string username;

		getline(check, username, ',');

		while (!check.eof() || !check.is_open()) {
			if (username != marshal_as<string>(customerEmail->Text) || !check.is_open()) {
				if (isValidName(customerName->Text)) {
					if (isValidAccType(accountType->Text)) {
						if (isValidEmail(customerEmail->Text)) {
							if (isValidPhone(customerPhone->Text)) {
								if (isValidAmmount(initDeposit->Text)) {
									Customer newCustomer(marshal_as<string>(customerEmail->Text));

									newCustomer.setCustomerName(marshal_as<string>(customerName->Text));
									newCustomer.setCustomerEmail(marshal_as<string>(customerEmail->Text));
									newCustomer.setCustomerPhone(marshal_as<string>(customerPhone->Text));
									newCustomer.setCustomerAddress(marshal_as<string>(customerAddress->Text));

									Account newAccount(marshal_as<string>(accountType->Text));

									newCustomer.setCustomerAccount(newAccount);

									newCustomer.accounts[newCustomer.getNoOfAccounts() - 1].setAccountType(marshal_as<string>(accountType->Text));
									newCustomer.accounts[newCustomer.getNoOfAccounts() - 1].deposit(stod(marshal_as<string>(initDeposit->Text)));

									MessageBox::Show(gcnew String(("Please Not Your ID: " + newCustomer.getCustomerID()).c_str()), "Customer ID", MessageBoxButtons::OK, MessageBoxIcon::Information);
									MessageBox::Show(gcnew String(("Please Note Your Account Number: " + newAccount.getAccountNo()).c_str()), "Account Number", MessageBoxButtons::OK, MessageBoxIcon::Information);

									newCustomer.saveCustomerInfo(newCustomer.getCustomerID());

									ofstream accountWrite;

									accountWrite.open("Accounts/allAccounts.txt");

									accountWrite << newCustomer.accounts[newCustomer.getNoOfAccounts() - 1].getAccountNo() << ",";
									accountWrite << newCustomer.accounts[newCustomer.getNoOfAccounts() - 1].getAccountType() << ",";
									accountWrite << newCustomer.getCustomerID() << "\n";

									accountWrite.close();

									createCustomerPnl->Hide();

									customerName->ResetText();
									customerEmail->ResetText();
									customerPhone->ResetText();
									customerAddress->ResetText();
									accountType->ResetText();
									initDeposit->ResetText();

									break;
								}
								else {
									MessageBox::Show("One Time Ammount can not be more than 1 Billion", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
									initDeposit->ResetText();
								}
							}
							else {
								MessageBox::Show("Make Sure you use Pakistan's Code \"+92\"!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
								customerPhone->ResetText();
							}
						}
						else {
							MessageBox::Show("Email Domain Not Found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							customerEmail->ResetText();
						}
					}
					else {
						MessageBox::Show("Account Type can only be \"Loan\" or \"Saving\"!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						accountType->ResetText();
					}
				}
				else {
					MessageBox::Show("Name can only consists of Alphabets!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					customerName->ResetText();
				}
			}
			else {
				MessageBox::Show("User already Exists!", "Collision", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				break;
			}
		}

		check.close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		allCustomers->Items->Clear();
		allCustomersPnl->Show();

		ifstream customersFile;

		customersFile.open("customerSignIn.txt");

		while (!customersFile.eof()) {
			ListViewItem^ customerDetails = gcnew ListViewItem();
			string column[2];

			getline(customersFile, column[0], ',');
			getline(customersFile, column[1], '\n');

			customerDetails->Text = gcnew String(column[0].c_str());
			customerDetails->SubItems->Add(gcnew String(column[1].c_str()));

			allCustomers->Items->Add(customerDetails);
		}

		customersFile.close();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		allCustomersPnl->Hide();
	}

	private: System::Void customerName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			customerEmail->Focus();
		}
	}

	private: System::Void customerEmail_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			customerPhone->Focus();
		}
	}

	private: System::Void customerPhone_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			customerAddress->Focus();
		}
	}

	private: System::Void customerAddress_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			accountType->Focus();
		}
	}

	private: System::Void accountType_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			initDeposit->Focus();
		}
	}

	private: System::Void initDeposit_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			createButton->PerformClick();
		}
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		createCustomerPnl->Hide();

		customerName->ResetText();
		customerAddress->ResetText();
		customerEmail->ResetText();
		customerPhone->ResetText();
		initDeposit->ResetText();
		accountType->ResetText();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do You want to Logout?", "LOG OUT", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
			this->Hide();
		}
	}
};
}
