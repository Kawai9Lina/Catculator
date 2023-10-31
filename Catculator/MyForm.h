#pragma once

namespace Catculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonexit;
	private: System::Windows::Forms::Label^ labelAnswer;

	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonPlusMinus;
	private: System::Windows::Forms::Button^ buttonPerñent;
	private: System::Windows::Forms::Button^ buttonDivide;

	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;








	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;




	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ buttonSubtract;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonPoint;






	private: System::Windows::Forms::Button^ button0;
	private: double First_Number;
	private: char User_Operation = ' ';
	private: bool Is_Equal = false;

	protected:

	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonexit = (gcnew System::Windows::Forms::Button());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonPlusMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPerñent = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonSubtract = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonPoint = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonexit
			// 
			this->buttonexit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->buttonexit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonexit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonexit->Location = System::Drawing::Point(360, 12);
			this->buttonexit->Name = L"buttonexit";
			this->buttonexit->Size = System::Drawing::Size(28, 28);
			this->buttonexit->TabIndex = 0;
			this->buttonexit->Text = L"X";
			this->buttonexit->UseVisualStyleBackColor = false;
			this->buttonexit->Click += gcnew System::EventHandler(this, &MyForm::buttonexit_Click);
			// 
			// labelAnswer
			// 
			this->labelAnswer->BackColor = System::Drawing::Color::Black;
			this->labelAnswer->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAnswer->ForeColor = System::Drawing::Color::Violet;
			this->labelAnswer->Location = System::Drawing::Point(57, 174);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(282, 80);
			this->labelAnswer->TabIndex = 1;
			this->labelAnswer->Text = L"0";
			this->labelAnswer->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::DeepPink;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(56, 293);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(63, 53);
			this->buttonC->TabIndex = 2;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonPlusMinus
			// 
			this->buttonPlusMinus->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonPlusMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->buttonPlusMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlusMinus->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonPlusMinus->Location = System::Drawing::Point(125, 293);
			this->buttonPlusMinus->Name = L"buttonPlusMinus";
			this->buttonPlusMinus->Size = System::Drawing::Size(63, 53);
			this->buttonPlusMinus->TabIndex = 3;
			this->buttonPlusMinus->Text = L"+/-";
			this->buttonPlusMinus->UseVisualStyleBackColor = false;
			this->buttonPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusMinus_Click);
			// 
			// buttonPerñent
			// 
			this->buttonPerñent->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonPerñent->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->buttonPerñent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPerñent->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPerñent->Location = System::Drawing::Point(194, 293);
			this->buttonPerñent->Name = L"buttonPerñent";
			this->buttonPerñent->Size = System::Drawing::Size(63, 53);
			this->buttonPerñent->TabIndex = 4;
			this->buttonPerñent->Text = L"%";
			this->buttonPerñent->UseVisualStyleBackColor = false;
			this->buttonPerñent->Click += gcnew System::EventHandler(this, &MyForm::buttonPerñent_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonDivide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->buttonDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->Location = System::Drawing::Point(263, 293);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(63, 53);
			this->buttonDivide->TabIndex = 5;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Violet;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(56, 362);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 53);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Violet;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(125, 362);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 53);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Violet;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(194, 362);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 53);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonMultiply->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiply->Location = System::Drawing::Point(263, 362);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(63, 53);
			this->buttonMultiply->TabIndex = 9;
			this->buttonMultiply->Text = L"x";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Violet;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(56, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 53);
			this->button4->TabIndex = 10;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Violet;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(125, 430);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 53);
			this->button5->TabIndex = 11;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Violet;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(194, 430);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 53);
			this->button6->TabIndex = 12;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// buttonSubtract
			// 
			this->buttonSubtract->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonSubtract->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->buttonSubtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSubtract->Location = System::Drawing::Point(263, 430);
			this->buttonSubtract->Name = L"buttonSubtract";
			this->buttonSubtract->Size = System::Drawing::Size(63, 53);
			this->buttonSubtract->TabIndex = 13;
			this->buttonSubtract->Text = L"-";
			this->buttonSubtract->UseVisualStyleBackColor = false;
			this->buttonSubtract->Click += gcnew System::EventHandler(this, &MyForm::buttonSubtract_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Violet;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(56, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 53);
			this->button1->TabIndex = 14;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Violet;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(125, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 53);
			this->button2->TabIndex = 15;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Violet;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(194, 498);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 53);
			this->button3->TabIndex = 16;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::MediumOrchid;
			this->buttonAdd->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(263, 498);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(63, 53);
			this->buttonAdd->TabIndex = 17;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->BackColor = System::Drawing::Color::DeepPink;
			this->buttonEqual->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->buttonEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->Location = System::Drawing::Point(263, 566);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(63, 53);
			this->buttonEqual->TabIndex = 18;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// buttonPoint
			// 
			this->buttonPoint->BackColor = System::Drawing::Color::Violet;
			this->buttonPoint->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->buttonPoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPoint->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPoint->Location = System::Drawing::Point(194, 566);
			this->buttonPoint->Name = L"buttonPoint";
			this->buttonPoint->Size = System::Drawing::Size(63, 53);
			this->buttonPoint->TabIndex = 19;
			this->buttonPoint->Text = L",";
			this->buttonPoint->UseVisualStyleBackColor = false;
			this->buttonPoint->Click += gcnew System::EventHandler(this, &MyForm::buttonPoint_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Violet;
			this->button0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(148)));
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(56, 566);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(132, 53);
			this->button0->TabIndex = 20;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(400, 650);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonPoint);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonSubtract);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonPerñent);
			this->Controls->Add(this->buttonPlusMinus);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->labelAnswer);
			this->Controls->Add(this->buttonexit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Êîòêóëÿòîð";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonexit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Btn_Number_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->labelAnswer->Text == "0" || Is_Equal) {
			this->labelAnswer->Text = button->Text;
			Is_Equal = false;
		}
		else
			this->labelAnswer->Text = this->labelAnswer->Text + button->Text;
	}
	
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Operation('+');
	}
	private: System::Void buttonSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Operation('-');
	}
	private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Operation('*');
	}
	private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Operation('/');
	}

	private: System::Void Math_Operation(char operation) {
		this->First_Number = System::Convert::ToDouble(this->labelAnswer->Text);
		this->User_Operation = operation;
		this->labelAnswer->Text = "0";
	}

	private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		if (User_Operation == ' ')
			return;
		
		double Second_Number = System::Convert::ToDouble(this->labelAnswer->Text);
		double Result;
		switch (this->User_Operation) {
		case '+': Result = this->First_Number + Second_Number; break;
		case '-': Result = this->First_Number - Second_Number; break;
		case '*': Result = this->First_Number * Second_Number; break;
		case '%': Result = this->First_Number * Second_Number / 100; break;
		case '/': 
			if (Second_Number == 0) {
				Result = 0;
				MessageBox::Show(this, "Äåéñòâèå çàïðåùåíî", "Ìÿóøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			Result = this->First_Number / Second_Number; 
			break;
		}
		this->Is_Equal = true;
		this->labelAnswer->Text = System::Convert::ToString(Result);
	}
	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelAnswer->Text = "0";
		this->First_Number = 0;
		this->Is_Equal = false;
	}
	private: System::Void buttonPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		double Number = System::Convert::ToDouble(this->labelAnswer->Text);
		Number *= -1;
		this->labelAnswer->Text = System::Convert::ToString(Number);
	}
	private: System::Void buttonPerñent_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Operation('%');
	}
	private: System::Void buttonPoint_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->labelAnswer->Text;
		if(!text->Contains(","))
		this->labelAnswer->Text = this->labelAnswer->Text + ",";
	}
};
}
