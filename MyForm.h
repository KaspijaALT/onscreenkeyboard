#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace F = System::Windows::Forms;

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
	private: System::Windows::Forms::Button^ button12;
	protected:
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;


	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;




	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::CheckBox^ chkCapsLock;
	private: System::Windows::Forms::CheckBox^ chkShiftL;
	private: System::Windows::Forms::CheckBox^ chkShiftR;















































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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->chkCapsLock = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftL = (gcnew System::Windows::Forms::CheckBox());
			this->chkShiftR = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(273, 132);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(72, 53);
			this->button12->TabIndex = 6;
			this->button12->Text = L"W";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(202, 132);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 53);
			this->button11->TabIndex = 7;
			this->button11->Text = L"Q";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(415, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 53);
			this->button1->TabIndex = 8;
			this->button1->Text = L"R";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(344, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 53);
			this->button2->TabIndex = 9;
			this->button2->Text = L"E";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(699, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 53);
			this->button3->TabIndex = 12;
			this->button3->Text = L"I";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(628, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 53);
			this->button4->TabIndex = 13;
			this->button4->Text = L"U";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(557, 132);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 53);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Y";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(486, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 53);
			this->button6->TabIndex = 11;
			this->button6->Text = L"T";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(841, 132);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 53);
			this->button9->TabIndex = 14;
			this->button9->Text = L"P";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(770, 132);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 53);
			this->button10->TabIndex = 15;
			this->button10->Text = L"O";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(717, 185);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 53);
			this->button7->TabIndex = 18;
			this->button7->Text = L"K";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(645, 184);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 53);
			this->button8->TabIndex = 19;
			this->button8->Text = L"J";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(574, 184);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 53);
			this->button13->TabIndex = 16;
			this->button13->Text = L"H";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(503, 184);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 53);
			this->button14->TabIndex = 17;
			this->button14->Text = L"G";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(431, 184);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 53);
			this->button15->TabIndex = 22;
			this->button15->Text = L"F";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(360, 184);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(72, 53);
			this->button16->TabIndex = 23;
			this->button16->Text = L"D";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(289, 184);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(72, 53);
			this->button17->TabIndex = 20;
			this->button17->Text = L"S";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(218, 184);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(72, 53);
			this->button18->TabIndex = 21;
			this->button18->Text = L"A";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(788, 185);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(72, 53);
			this->button22->TabIndex = 25;
			this->button22->Text = L"L";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(485, 237);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(72, 53);
			this->button24->TabIndex = 32;
			this->button24->Text = L"V";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(414, 237);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(72, 53);
			this->button25->TabIndex = 33;
			this->button25->Text = L"C";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(343, 237);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(72, 53);
			this->button26->TabIndex = 30;
			this->button26->Text = L"X";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(272, 237);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(72, 53);
			this->button27->TabIndex = 31;
			this->button27->Text = L"Z";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(699, 238);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(72, 53);
			this->button20->TabIndex = 37;
			this->button20->Text = L"M";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(628, 238);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(72, 53);
			this->button21->TabIndex = 34;
			this->button21->Text = L"N";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(557, 238);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 53);
			this->button23->TabIndex = 35;
			this->button23->Text = L"B";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Alphabet);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(188, 79);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(72, 53);
			this->button19->TabIndex = 7;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(259, 79);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(72, 53);
			this->button28->TabIndex = 6;
			this->button28->Text = L"2";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(330, 79);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(72, 53);
			this->button29->TabIndex = 9;
			this->button29->Text = L"3";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(401, 79);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(72, 53);
			this->button30->TabIndex = 8;
			this->button30->Text = L"4";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(472, 79);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(72, 53);
			this->button31->TabIndex = 11;
			this->button31->Text = L"5";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(543, 79);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(72, 53);
			this->button32->TabIndex = 10;
			this->button32->Text = L"6";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(614, 79);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(72, 53);
			this->button33->TabIndex = 13;
			this->button33->Text = L"7";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(685, 79);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(72, 53);
			this->button34->TabIndex = 12;
			this->button34->Text = L"8";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(756, 79);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(72, 53);
			this->button35->TabIndex = 15;
			this->button35->Text = L"9";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(827, 79);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(72, 53);
			this->button36->TabIndex = 14;
			this->button36->Text = L"0";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(898, 79);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(72, 53);
			this->button37->TabIndex = 15;
			this->button37->Text = L"-";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(970, 79);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(72, 53);
			this->button38->TabIndex = 14;
			this->button38->Text = L"=+";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(1041, 79);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(140, 53);
			this->button39->TabIndex = 14;
			this->button39->Text = L"BackSpace";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(914, 132);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(72, 53);
			this->button40->TabIndex = 15;
			this->button40->Text = L"{";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(985, 132);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(72, 53);
			this->button41->TabIndex = 14;
			this->button41->Text = L"}";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(1057, 132);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(124, 53);
			this->button42->TabIndex = 14;
			this->button42->Text = L"|";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(860, 185);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(72, 53);
			this->button43->TabIndex = 18;
			this->button43->Text = L";:";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(931, 185);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(72, 53);
			this->button44->TabIndex = 25;
			this->button44->Text = L"\'\'\"\"";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(1005, 185);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(176, 53);
			this->button45->TabIndex = 14;
			this->button45->Text = L"Enter";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(772, 238);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(72, 53);
			this->button46->TabIndex = 35;
			this->button46->Text = L"<";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(843, 238);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(72, 53);
			this->button47->TabIndex = 34;
			this->button47->Text = L">";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(914, 238);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(72, 53);
			this->button48->TabIndex = 37;
			this->button48->Text = L"/\?";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(116, 79);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(72, 53);
			this->button50->TabIndex = 7;
			this->button50->Text = L"esc";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(116, 132);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(85, 53);
			this->button51->TabIndex = 7;
			this->button51->Text = L"Tab";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(116, 290);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(72, 53);
			this->button54->TabIndex = 31;
			this->button54->Text = L"ctrl";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(1109, 290);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(72, 53);
			this->button55->TabIndex = 31;
			this->button55->Text = L"ctrl";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(188, 290);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(72, 53);
			this->button56->TabIndex = 31;
			this->button56->Text = L"WIN";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(259, 290);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(72, 53);
			this->button57->TabIndex = 31;
			this->button57->Text = L"alt";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(1041, 290);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(72, 53);
			this->button58->TabIndex = 31;
			this->button58->Text = L"print";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(970, 290);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(72, 53);
			this->button59->TabIndex = 31;
			this->button59->Text = L"fn";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(898, 290);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(72, 53);
			this->button60->TabIndex = 31;
			this->button60->Text = L"alt";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(330, 290);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(569, 53);
			this->button61->TabIndex = 31;
			this->button61->Text = L"space";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// chkCapsLock
			// 
			this->chkCapsLock->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkCapsLock->Location = System::Drawing::Point(115, 185);
			this->chkCapsLock->Name = L"chkCapsLock";
			this->chkCapsLock->Size = System::Drawing::Size(104, 53);
			this->chkCapsLock->TabIndex = 38;
			this->chkCapsLock->Text = L"caps";
			this->chkCapsLock->UseVisualStyleBackColor = true;
			// 
			// chkShiftL
			// 
			this->chkShiftL->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftL->Location = System::Drawing::Point(115, 237);
			this->chkShiftL->Name = L"chkShiftL";
			this->chkShiftL->Size = System::Drawing::Size(158, 53);
			this->chkShiftL->TabIndex = 38;
			this->chkShiftL->Text = L"shift";
			this->chkShiftL->UseVisualStyleBackColor = true;
			// 
			// chkShiftR
			// 
			this->chkShiftR->Appearance = System::Windows::Forms::Appearance::Button;
			this->chkShiftR->Location = System::Drawing::Point(987, 238);
			this->chkShiftR->Name = L"chkShiftR";
			this->chkShiftR->Size = System::Drawing::Size(194, 53);
			this->chkShiftR->TabIndex = 38;
			this->chkShiftR->Text = L"shift";
			this->chkShiftR->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1302, 413);
			this->Controls->Add(this->chkShiftR);
			this->Controls->Add(this->chkShiftL);
			this->Controls->Add(this->chkCapsLock);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button11);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		protected:

			virtual property F::CreateParams^ CreateParams
			{
				F::CreateParams^ get()override
				{
					F::CreateParams^ param = __super::CreateParams;
					param->ExStyle |= 0x08000000;
					return param;
				}
			}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Alphabet(System::Object^ sender, System::EventArgs^ e) {

	Button^ b = safe_cast<Button^>(sender);
	
	if (chkCapsLock->Checked == true || chkShiftL->Checked == true || chkShiftR->Checked == true)
	{
		SendKeys::Send((b->Text)->ToUpper());
		chkShiftL->Checked = false;
		chkShiftR->Checked = false;
	}
	else
	{
		SendKeys::Send((b->Text)->ToLower());
	}
}
};
}
