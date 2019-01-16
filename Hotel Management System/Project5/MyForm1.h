#pragma once
#include "MyForm2.h"
#include <string>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		Form ^ privous;

	public:
		MyForm1(Form^ f)
		{
			InitializeComponent();
			privous = f;
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::TextBox^  tel;

	private: System::Windows::Forms::TextBox^  first;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  age;
	private: System::Windows::Forms::TextBox^  mail;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  lastname;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  id;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;





	private: System::Windows::Forms::TextBox^  search;



	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->mail = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tel = (gcnew System::Windows::Forms::TextBox());
			this->first = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(17, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(61, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tel";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label4->Location = System::Drawing::Point(17, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nationality";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->id);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->age);
			this->panel1->Controls->Add(this->mail);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->lastname);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->tel);
			this->panel1->Controls->Add(this->first);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(777, 733);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button6->Location = System::Drawing::Point(474, 623);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 47);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(203) {
				L"Afghanistan", L"Albania", L"Algeria", L"Andorra",
					L"Angola", L"Antigua and Barbuda", L"Argentina", L"Armenia", L"Aruba", L"Australia", L"Austria", L"Azerbaijan", L"Bahamas, The",
					L"Bahrain", L"Bangladesh", L"Barbados", L"Belarus", L"Belgium", L"Belize", L"Benin", L"Bhutan", L"Bolivia", L"Bosnia and Herzegovina",
					L"Botswana", L"Brazil", L"Brunei", L"Bulgaria", L"Burkina Faso", L"Burma", L"Burundi", L"Cambodia", L"Cameroon", L"Canada", L"Cabo Verde",
					L"Central African Republic", L"Chad", L"Chile", L"China", L"Colombia", L"Comoros", L"Congo, Democratic Republic of the", L"Congo, Republic of the",
					L"Costa Rica", L"Cote d\'Ivoire", L"Croatia", L"Cuba", L"Curacao", L"Cyprus", L"Czechia", L"Denmark", L"Djibouti", L"Dominica",
					L"Dominican Republic", L"Ecuador", L"Egypt", L"El Salvador", L"Equatorial Guinea", L"Eritrea", L"Estonia", L"Ethiopia", L"Fiji",
					L"Finland", L"France", L"Gabon", L"Gambia, The", L"Georgia", L"Germany", L"Ghana", L"Greece", L"Grenada", L"Guatemala", L"Guinea",
					L"Guinea-Bissau", L"Guyana", L"Haiti", L"Holy See", L"Honduras", L"Hong Kong", L"Hungary", L"Iceland", L"India", L"Indonesia",
					L"Iran", L"Iraq", L"Ireland", L"Israel", L"Italy", L"Jamaica", L"Japan", L"Jordan", L"Kazakhstan", L"Kenya", L"Kiribati", L"Korea, North",
					L"Korea, South", L"Kosovo", L"Kuwait", L"Kyrgyzstan", L"Laos", L"Latvia", L"Lebanon", L"Lesotho", L"Liberia", L"Libya", L"Liechtenstein",
					L"Lithuania", L"Luxembourg", L"Macau", L"Macedonia", L"Madagascar", L"Malawi", L"Malaysia", L"Maldives", L"Mali", L"Malta", L"Marshall Islands",
					L"Mauritania", L"Mauritius", L"Mexico", L"Micronesia", L"Moldova", L"Monaco", L"Mongolia", L"Montenegro", L"Morocco", L"Mozambique",
					L"Namibia", L"Nauru", L"Nepal", L"Netherlands", L"New Zealand", L"Nicaragua", L"Niger", L"Nigeria", L"North Korea", L"Norway",
					L"Oman", L"Pakistan", L"Palau", L"Palestinian Territories", L"Panama", L"Papua New Guinea", L"Paraguay", L"Peru", L"Philippines",
					L"Poland", L"Portugal", L"Qatar", L"Romania", L"Russia", L"Rwanda", L"Saint Kitts and Nevis", L"Saint Lucia", L"Saint Vincent and the Grenadines",
					L"Samoa", L"San Marino", L"Sao Tome and Principe", L"Saudi Arabia", L"Senegal", L"Serbia", L"Seychelles", L"Sierra Leone", L"Singapore",
					L"Sint Maarten", L"Slovakia", L"Slovenia", L"Solomon Islands", L"Somalia", L"South Africa", L"South Korea", L"South Sudan", L"Spain",
					L"Sri Lanka", L"Sudan", L"Suriname", L"Swaziland", L"Sweden", L"Switzerland", L"Syria", L"Taiwan", L"Tajikistan", L"Tanzania",
					L"Thailand", L"Timor-Leste", L"Togo", L"Tonga", L"Trinidad and Tobago", L"Tunisia", L"Turkey", L"Turkmenistan", L"Tuvalu", L"Uganda",
					L"Ukraine", L"United Arab Emirates", L"United Kingdom", L"Uruguay", L"Uzbekistan", L"Vanuatu", L"Venezuela", L"Vietnam", L"Yemen",
					L"Zambia", L"Zimbabwe"
			});
			this->comboBox1->Location = System::Drawing::Point(136, 172);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 34;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button8->Location = System::Drawing::Point(40, 621);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 47);
			this->button8->TabIndex = 33;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button7->Location = System::Drawing::Point(601, 621);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 47);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Checkout";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(136, 226);
			this->id->Margin = System::Windows::Forms::Padding(2);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(100, 20);
			this->id->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label2->Location = System::Drawing::Point(61, 224);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 22);
			this->label2->TabIndex = 25;
			this->label2->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button3->Location = System::Drawing::Point(164, 621);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 47);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button2->Location = System::Drawing::Point(319, 621);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 50);
			this->button2->TabIndex = 22;
			this->button2->Text = L"save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Location = System::Drawing::Point(337, 348);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(145, 191);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gender";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox2_Enter);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton4->Location = System::Drawing::Point(38, 101);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 26);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Famale";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton3->Location = System::Drawing::Point(38, 37);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(68, 26);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Male";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Location = System::Drawing::Point(90, 339);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(172, 200);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton1->Location = System::Drawing::Point(19, 42);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 26);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Single";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->radioButton2->Location = System::Drawing::Point(26, 106);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(91, 26);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Married";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// age
			// 
			this->age->Location = System::Drawing::Point(382, 111);
			this->age->Margin = System::Windows::Forms::Padding(2);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(38, 20);
			this->age->TabIndex = 15;
			// 
			// mail
			// 
			this->mail->Location = System::Drawing::Point(382, 171);
			this->mail->Margin = System::Windows::Forms::Padding(2);
			this->mail->Name = L"mail";
			this->mail->Size = System::Drawing::Size(127, 20);
			this->mail->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(299, 171);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 22);
			this->label7->TabIndex = 13;
			this->label7->Text = L"E-Mail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(315, 111);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 22);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Age";
			// 
			// lastname
			// 
			this->lastname->Location = System::Drawing::Point(382, 65);
			this->lastname->Margin = System::Windows::Forms::Padding(2);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(100, 20);
			this->lastname->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(284, 65);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Last Name";
			// 
			// tel
			// 
			this->tel->Location = System::Drawing::Point(136, 111);
			this->tel->Name = L"tel";
			this->tel->Size = System::Drawing::Size(100, 20);
			this->tel->TabIndex = 6;
			// 
			// first
			// 
			this->first->Location = System::Drawing::Point(136, 63);
			this->first->Name = L"first";
			this->first->Size = System::Drawing::Size(100, 20);
			this->first->TabIndex = 4;
			this->first->TextChanged += gcnew System::EventHandler(this, &MyForm1::first_TextChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(733, 621);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 47);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(553, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(1012, 414);
			this->search->Multiline = true;
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(136, 26);
			this->search->TabIndex = 28;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(553, 348);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 32);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(839, 194);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(383, 108);
			this->listBox2->TabIndex = 30;
			this->listBox2->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(394, 100);
			this->listBox1->TabIndex = 31;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button9->Location = System::Drawing::Point(878, 409);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(91, 31);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(777, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(394, 100);
			this->panel2->TabIndex = 33;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1171, 733);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->search);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm1";
			this->Text = L"Personal Data";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void  ClearControls() {
			id->Text = "";
			first->Text = "";
			lastname->Text = "";
			age->Text = "";
			
			mail->Text = "";
			tel->Text = "";
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = false;
			radioButton4->Checked = false;
			comboBox1->Text = "";
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm2^ fr = gcnew MyForm2(this);
		fr->Show();
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String ^ name = first->Text;
		String ^ name2 = lastname->Text;
		String ^ id_ = id->Text;
		String ^ ag = age->Text;
		String ^ email = mail->Text;
		String ^ tl = tel->Text;
		String ^ n = comboBox1->Text;
		String^single;
		String^type;
		listBox1->Show();
		if (radioButton1->Checked == true) {
			single = "single";
		}
		else if(radioButton2->Checked == true){
			single = "married";
		}
		if (radioButton3->Checked == true) {
			type = "male";
		}
		else if(radioButton4->Checked == true) {
			type = "famale";
		}
		String ^ data2 = id_ + "\t" + name + "\t" + name2 + "\t" + ag+ "\t" + n +"\t"+email + "\t" + tl + "\t" + single+ "\t" +type ;

		listBox1->Items->Add(data2);
		ClearControls();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamWriter^ OpenFile = gcnew StreamWriter("personal data.txt");
		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			OpenFile->WriteLine(listBox1->Items[i]);
		}
		OpenFile->Close();
		ClearControls();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ data3 = id->Text +"  " + first->Text + "  " + lastname->Text + "  " + age->Text + "  " + mail->Text + "  " + tel->Text + "  " + comboBox1->Text;
		listBox1->Items[listBox1->SelectedIndex] = data3;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamWriter^ OpenFile = gcnew StreamWriter("id.txt");
		for (int i = 0; i < listBox2->Items->Count; i++)
		{
			OpenFile->WriteLine(listBox2->Items[i]);
		}
		OpenFile->Close();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//StreamReader^ sr = gcnew StreamReader("personal data.txt");
		//while (!sr->EndOfStream)
		//{
		//	String ^row = sr->ReadLine();
		//	array<String^>^result;
		//	array<Char>^splitChars = { '\t' };
		//	result = row->Split(splitChars, StringSplitOptions::None);
		//	if (result[0]->ToLower() == search->Text->ToLower())
		//	{	
		//		
		//		id->Text = result[0];
		//		first->Text = result[1];
		//		lastname->Text = result[2];
		//		age->Text = result[3];
		//		comboBox1->Text = result[4];
		//		mail->Text = result[5];
		//		tel->Text = result[6];
		//}
		//sr->Close();
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Remove(listBox1->SelectedItem);
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this -> Hide();
	MyForm2 ^da = gcnew MyForm2(this);
	da->ShowDialog();
}
private: System::Void first_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	privous->Show();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ sr = gcnew StreamReader("personal data.txt");
	while (!sr->EndOfStream)
	{
		String ^row = sr->ReadLine();
		array<String^>^result;
		array<Char>^splitChars = { '\t' };
		result = row->Split(splitChars, StringSplitOptions::None);
		if (result[0]->ToLower() == search->Text->ToLower())
		{

			id->Text = result[0];
			first->Text = result[1];
			lastname->Text = result[2];
			age->Text = result[3];
			comboBox1->Text = result[4];
			mail->Text = result[5];
			tel->Text = result[6];
			if (result[7] == "single") {
				radioButton1->Checked = true;
			}
			else {
				radioButton2->Checked = true;
			}
			if (result[8] == "male") {
				radioButton3->Checked = true;
			}
			else
			{
				radioButton4->Checked = true;
			}
		}
	}
	sr->Close();
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ data3 = id->Text + "  " + first->Text + "  " + lastname->Text + "  " + age->Text + "  " + mail->Text + "  " + tel->Text + "  " + comboBox1->Text;
	listBox1->Items[listBox1->SelectedIndex] = data3;

}
};
}
