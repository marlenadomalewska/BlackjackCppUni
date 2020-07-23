#pragma once
#include "stdafx.h"
#include "Pula.h"
#include "FormAbout.h"
#include "WinForm.h"



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace msclr::interop;


namespace Blackjack {

	/// <summary>
	/// Summary for Form2
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
		{
			InitializeComponent();

		}

		Gra(Form ^mother, String ^text, System::Media::SoundPlayer ^sp)
		{
			this->mother = mother;
			this->sp = sp;
			

				
			
			InitializeComponent();
			this->g= new Pula();

			this->g->SetLHit(0);
			this->g->SetLDouble(0);
			this->g->SetLStand(0);
			
			this->ClearValidations();


			
			this->g->SetImie(marshal_as<std::string>(text));

			this->g->SetTokenUz(10, 0);
			this->g->SetHoldT(0);
			this->ViewCards();
			this->button_Double->Enabled=false;
			this->button_Hit->Enabled=false;
			this->button_Stand->Enabled=false;
			this->button_Start->Enabled=false;
			this->button_Decrease->Enabled = true;
			this->button_Increase->Enabled = true;
			
			this->ViewSum();
			this->ViewToken();
			
			this->g->setIloscWin(0);
			this->g->setIloscLose(0);
			this->g->setMaxWin(15);
			this->UpdateProgressBar();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
			if(this->g)
			{
				delete this->g;
			}
		}
	private: System::Windows::Forms::Button^  button_Hit;
	private: System::Windows::Forms::Button^  button_Double;
	protected: 

	private: System::Windows::Forms::Button^  button_Stand;
	private: System::Windows::Forms::Button^  button_Decrease;
	private: System::Windows::Forms::Button^  button_Increase;

	private: System::Windows::Forms::PictureBox^  PulaKr4;
	private: System::Windows::Forms::PictureBox^  PulaKr0;
	private: System::Windows::Forms::PictureBox^  PulaKr1;
	private: System::Windows::Forms::PictureBox^  PulaKr2;
	private: System::Windows::Forms::PictureBox^  PulaKr3;
	private: System::Windows::Forms::PictureBox^  PulaUz0;
	private: System::Windows::Forms::PictureBox^  PulaUz1;
	private: System::Windows::Forms::PictureBox^  PulaUz2;
	private: System::Windows::Forms::PictureBox^  PulaUz3;
	private: System::Windows::Forms::PictureBox^  PulaUz4;
	private: System::Windows::Forms::PictureBox^  PulaUz5;
	private: System::Windows::Forms::PictureBox^  PulaUz6;
	private: System::Windows::Forms::PictureBox^  Deck;


	protected:


	private: Pula *g;
	private: System::Media::SoundPlayer ^sp;

	private: FormAbout ^oProjekcie;
	private: WinForm ^wynik;
	private: Form ^mother;

	private: System::Boolean validated_stand;
    private: System::Boolean validated_double;
	private: System::Boolean KoniecRundy;
	private: System::Boolean KoniecRundyKr;
	private: System::Windows::Forms::Button^  button_Start;
	private: System::Windows::Forms::TextBox^  textBox_Status;
	private: System::Windows::Forms::TextBox^  textBox_Krupier;
	private: System::Windows::Forms::TextBox^  textBox_Gracz;
	private: System::Windows::Forms::TextBox^  textBox_Stawka;
	private: System::Windows::Forms::TextBox^  textBox_Hold;
	private: System::Windows::Forms::ProgressBar^  progressBar;

private: System::Windows::Forms::MenuStrip^  menuStrip;

private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::ToolStripMenuItem^  musicToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  playToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  stopToolStripMenuItem;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->button_Hit = (gcnew System::Windows::Forms::Button());
			this->button_Double = (gcnew System::Windows::Forms::Button());
			this->button_Stand = (gcnew System::Windows::Forms::Button());
			this->button_Decrease = (gcnew System::Windows::Forms::Button());
			this->button_Increase = (gcnew System::Windows::Forms::Button());
			this->PulaKr4 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaKr0 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaKr1 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaKr2 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaKr3 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz0 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz1 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz2 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz3 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz4 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz5 = (gcnew System::Windows::Forms::PictureBox());
			this->PulaUz6 = (gcnew System::Windows::Forms::PictureBox());
			this->Deck = (gcnew System::Windows::Forms::PictureBox());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->textBox_Status = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Krupier = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Gracz = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Stawka = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Hold = (gcnew System::Windows::Forms::TextBox());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->musicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Deck))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_Hit
			// 
			this->button_Hit->BackColor = System::Drawing::Color::Transparent;
			this->button_Hit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Hit.BackgroundImage")));
			this->button_Hit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Hit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Hit->FlatAppearance->BorderSize = 0;
			this->button_Hit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Hit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Hit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Hit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Hit->Location = System::Drawing::Point(587, 569);
			this->button_Hit->Name = L"button_Hit";
			this->button_Hit->Size = System::Drawing::Size(140, 54);
			this->button_Hit->TabIndex = 1;
			this->button_Hit->Text = L"Hit";
			this->button_Hit->UseVisualStyleBackColor = false;
			this->button_Hit->Click += gcnew System::EventHandler(this, &Gra::button_Hit_Click);
			// 
			// button_Double
			// 
			this->button_Double->BackColor = System::Drawing::Color::Transparent;
			this->button_Double->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Double.BackgroundImage")));
			this->button_Double->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Double->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Double->FlatAppearance->BorderSize = 0;
			this->button_Double->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Double->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Double->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Double->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Double->Location = System::Drawing::Point(386, 569);
			this->button_Double->Name = L"button_Double";
			this->button_Double->Size = System::Drawing::Size(140, 54);
			this->button_Double->TabIndex = 2;
			this->button_Double->Text = L"Double";
			this->button_Double->UseVisualStyleBackColor = false;
			this->button_Double->Click += gcnew System::EventHandler(this, &Gra::button_Double_Click);
			// 
			// button_Stand
			// 
			this->button_Stand->BackColor = System::Drawing::Color::Transparent;
			this->button_Stand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Stand.BackgroundImage")));
			this->button_Stand->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Stand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Stand->FlatAppearance->BorderSize = 0;
			this->button_Stand->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Stand->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Stand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Stand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Stand->Location = System::Drawing::Point(793, 569);
			this->button_Stand->Name = L"button_Stand";
			this->button_Stand->Size = System::Drawing::Size(140, 54);
			this->button_Stand->TabIndex = 3;
			this->button_Stand->Text = L"Stand";
			this->button_Stand->UseVisualStyleBackColor = false;
			this->button_Stand->Click += gcnew System::EventHandler(this, &Gra::button_Stand_Click);
			// 
			// button_Decrease
			// 
			this->button_Decrease->BackColor = System::Drawing::Color::Transparent;
			this->button_Decrease->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Decrease.BackgroundImage")));
			this->button_Decrease->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Decrease->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Decrease->FlatAppearance->BorderSize = 0;
			this->button_Decrease->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Decrease->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Decrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Decrease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Decrease->Location = System::Drawing::Point(7, 352);
			this->button_Decrease->Name = L"button_Decrease";
			this->button_Decrease->Size = System::Drawing::Size(86, 33);
			this->button_Decrease->TabIndex = 4;
			this->button_Decrease->Text = L"-";
			this->button_Decrease->UseVisualStyleBackColor = false;
			this->button_Decrease->Click += gcnew System::EventHandler(this, &Gra::button_Decrease_Click);
			// 
			// button_Increase
			// 
			this->button_Increase->BackColor = System::Drawing::Color::Transparent;
			this->button_Increase->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Increase.BackgroundImage")));
			this->button_Increase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Increase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Increase->FlatAppearance->BorderSize = 0;
			this->button_Increase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Increase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Increase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Increase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Increase->Location = System::Drawing::Point(99, 352);
			this->button_Increase->Name = L"button_Increase";
			this->button_Increase->Size = System::Drawing::Size(86, 33);
			this->button_Increase->TabIndex = 5;
			this->button_Increase->Text = L"+";
			this->button_Increase->UseVisualStyleBackColor = false;
			this->button_Increase->Click += gcnew System::EventHandler(this, &Gra::button_Increase_Click);
			// 
			// PulaKr4
			// 
			this->PulaKr4->BackColor = System::Drawing::Color::Transparent;
			this->PulaKr4->Location = System::Drawing::Point(844, 38);
			this->PulaKr4->Name = L"PulaKr4";
			this->PulaKr4->Size = System::Drawing::Size(138, 210);
			this->PulaKr4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaKr4->TabIndex = 7;
			this->PulaKr4->TabStop = false;
			// 
			// PulaKr0
			// 
			this->PulaKr0->BackColor = System::Drawing::Color::Transparent;
			this->PulaKr0->Location = System::Drawing::Point(212, 38);
			this->PulaKr0->Name = L"PulaKr0";
			this->PulaKr0->Size = System::Drawing::Size(138, 210);
			this->PulaKr0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaKr0->TabIndex = 8;
			this->PulaKr0->TabStop = false;
			// 
			// PulaKr1
			// 
			this->PulaKr1->BackColor = System::Drawing::Color::Transparent;
			this->PulaKr1->Location = System::Drawing::Point(370, 38);
			this->PulaKr1->Name = L"PulaKr1";
			this->PulaKr1->Size = System::Drawing::Size(138, 210);
			this->PulaKr1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaKr1->TabIndex = 9;
			this->PulaKr1->TabStop = false;
			// 
			// PulaKr2
			// 
			this->PulaKr2->BackColor = System::Drawing::Color::Transparent;
			this->PulaKr2->Location = System::Drawing::Point(528, 38);
			this->PulaKr2->Name = L"PulaKr2";
			this->PulaKr2->Size = System::Drawing::Size(138, 210);
			this->PulaKr2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaKr2->TabIndex = 10;
			this->PulaKr2->TabStop = false;
			// 
			// PulaKr3
			// 
			this->PulaKr3->BackColor = System::Drawing::Color::Transparent;
			this->PulaKr3->Location = System::Drawing::Point(686, 38);
			this->PulaKr3->Name = L"PulaKr3";
			this->PulaKr3->Size = System::Drawing::Size(138, 210);
			this->PulaKr3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaKr3->TabIndex = 11;
			this->PulaKr3->TabStop = false;
			// 
			// PulaUz0
			// 
			this->PulaUz0->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz0->Location = System::Drawing::Point(212, 322);
			this->PulaUz0->Name = L"PulaUz0";
			this->PulaUz0->Size = System::Drawing::Size(138, 210);
			this->PulaUz0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz0->TabIndex = 12;
			this->PulaUz0->TabStop = false;
			// 
			// PulaUz1
			// 
			this->PulaUz1->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz1->Location = System::Drawing::Point(370, 322);
			this->PulaUz1->Name = L"PulaUz1";
			this->PulaUz1->Size = System::Drawing::Size(138, 210);
			this->PulaUz1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz1->TabIndex = 13;
			this->PulaUz1->TabStop = false;
			// 
			// PulaUz2
			// 
			this->PulaUz2->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz2->Location = System::Drawing::Point(528, 322);
			this->PulaUz2->Name = L"PulaUz2";
			this->PulaUz2->Size = System::Drawing::Size(138, 210);
			this->PulaUz2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz2->TabIndex = 14;
			this->PulaUz2->TabStop = false;
			// 
			// PulaUz3
			// 
			this->PulaUz3->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz3->Location = System::Drawing::Point(686, 322);
			this->PulaUz3->Name = L"PulaUz3";
			this->PulaUz3->Size = System::Drawing::Size(138, 210);
			this->PulaUz3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz3->TabIndex = 15;
			this->PulaUz3->TabStop = false;
			// 
			// PulaUz4
			// 
			this->PulaUz4->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz4->Location = System::Drawing::Point(844, 322);
			this->PulaUz4->Name = L"PulaUz4";
			this->PulaUz4->Size = System::Drawing::Size(138, 210);
			this->PulaUz4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz4->TabIndex = 16;
			this->PulaUz4->TabStop = false;
			// 
			// PulaUz5
			// 
			this->PulaUz5->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz5->Location = System::Drawing::Point(1002, 322);
			this->PulaUz5->Name = L"PulaUz5";
			this->PulaUz5->Size = System::Drawing::Size(138, 210);
			this->PulaUz5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz5->TabIndex = 17;
			this->PulaUz5->TabStop = false;
			// 
			// PulaUz6
			// 
			this->PulaUz6->BackColor = System::Drawing::Color::Transparent;
			this->PulaUz6->Location = System::Drawing::Point(1160, 322);
			this->PulaUz6->Name = L"PulaUz6";
			this->PulaUz6->Size = System::Drawing::Size(138, 210);
			this->PulaUz6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PulaUz6->TabIndex = 18;
			this->PulaUz6->TabStop = false;
			// 
			// Deck
			// 
			this->Deck->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Deck.Image")));
			this->Deck->Location = System::Drawing::Point(1140, 38);
			this->Deck->Name = L"Deck";
			this->Deck->Size = System::Drawing::Size(158, 210);
			this->Deck->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Deck->TabIndex = 19;
			this->Deck->TabStop = false;
			// 
			// button_Start
			// 
			this->button_Start->BackColor = System::Drawing::Color::Transparent;
			this->button_Start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_Start.BackgroundImage")));
			this->button_Start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Start->FlatAppearance->BorderSize = 0;
			this->button_Start->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Start->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Start->Location = System::Drawing::Point(31, 478);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(140, 54);
			this->button_Start->TabIndex = 20;
			this->button_Start->Text = L"START";
			this->button_Start->UseVisualStyleBackColor = false;
			this->button_Start->Click += gcnew System::EventHandler(this, &Gra::button_Start_Click);
			// 
			// textBox_Status
			// 
			this->textBox_Status->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox_Status->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Status->Location = System::Drawing::Point(12, 569);
			this->textBox_Status->Multiline = true;
			this->textBox_Status->Name = L"textBox_Status";
			this->textBox_Status->ReadOnly = true;
			this->textBox_Status->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_Status->Size = System::Drawing::Size(302, 73);
			this->textBox_Status->TabIndex = 21;
			// 
			// textBox_Krupier
			// 
			this->textBox_Krupier->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox_Krupier->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Krupier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Krupier->Location = System::Drawing::Point(988, 228);
			this->textBox_Krupier->Name = L"textBox_Krupier";
			this->textBox_Krupier->ReadOnly = true;
			this->textBox_Krupier->Size = System::Drawing::Size(146, 23);
			this->textBox_Krupier->TabIndex = 22;
			this->textBox_Krupier->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_Gracz
			// 
			this->textBox_Gracz->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox_Gracz->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Gracz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Gracz->Location = System::Drawing::Point(988, 269);
			this->textBox_Gracz->Name = L"textBox_Gracz";
			this->textBox_Gracz->ReadOnly = true;
			this->textBox_Gracz->Size = System::Drawing::Size(146, 23);
			this->textBox_Gracz->TabIndex = 23;
			this->textBox_Gracz->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_Stawka
			// 
			this->textBox_Stawka->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox_Stawka->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Stawka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Stawka->Location = System::Drawing::Point(46, 295);
			this->textBox_Stawka->Multiline = true;
			this->textBox_Stawka->Name = L"textBox_Stawka";
			this->textBox_Stawka->ReadOnly = true;
			this->textBox_Stawka->Size = System::Drawing::Size(100, 46);
			this->textBox_Stawka->TabIndex = 24;
			this->textBox_Stawka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox_Hold
			// 
			this->textBox_Hold->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox_Hold->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Hold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_Hold->Location = System::Drawing::Point(46, 169);
			this->textBox_Hold->Name = L"textBox_Hold";
			this->textBox_Hold->ReadOnly = true;
			this->textBox_Hold->Size = System::Drawing::Size(100, 23);
			this->textBox_Hold->TabIndex = 25;
			this->textBox_Hold->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// progressBar
			// 
			this->progressBar->BackColor = System::Drawing::Color::Gainsboro;
			this->progressBar->ForeColor = System::Drawing::Color::Goldenrod;
			this->progressBar->Location = System::Drawing::Point(29, 70);
			this->progressBar->Maximum = 15;
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(142, 23);
			this->progressBar->Step = 1;
			this->progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar->TabIndex = 26;
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->musicToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(1363, 24);
			this->menuStrip->TabIndex = 28;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newToolStripMenuItem, 
				this->toolStripSeparator1, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::newToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(95, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::exitToolStripMenuItem_Click);
			// 
			// musicToolStripMenuItem
			// 
			this->musicToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->playToolStripMenuItem, 
				this->stopToolStripMenuItem});
			this->musicToolStripMenuItem->Name = L"musicToolStripMenuItem";
			this->musicToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->musicToolStripMenuItem->Text = L"Music";
			// 
			// playToolStripMenuItem
			// 
			this->playToolStripMenuItem->Name = L"playToolStripMenuItem";
			this->playToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->playToolStripMenuItem->Text = L"Play";
			this->playToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::playToolStripMenuItem_Click);
			// 
			// stopToolStripMenuItem
			// 
			this->stopToolStripMenuItem->Name = L"stopToolStripMenuItem";
			this->stopToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->stopToolStripMenuItem->Text = L"Stop";
			this->stopToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::stopToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Gra::aboutToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(9, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 34);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Ustaw stawke \nzanim rozpoczniesz gre!";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 27;
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1363, 653);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->textBox_Hold);
			this->Controls->Add(this->textBox_Stawka);
			this->Controls->Add(this->textBox_Gracz);
			this->Controls->Add(this->textBox_Krupier);
			this->Controls->Add(this->textBox_Status);
			this->Controls->Add(this->button_Start);
			this->Controls->Add(this->Deck);
			this->Controls->Add(this->PulaUz6);
			this->Controls->Add(this->PulaUz5);
			this->Controls->Add(this->PulaUz4);
			this->Controls->Add(this->PulaUz3);
			this->Controls->Add(this->PulaUz2);
			this->Controls->Add(this->PulaUz1);
			this->Controls->Add(this->PulaUz0);
			this->Controls->Add(this->PulaKr3);
			this->Controls->Add(this->PulaKr2);
			this->Controls->Add(this->PulaKr1);
			this->Controls->Add(this->PulaKr0);
			this->Controls->Add(this->PulaKr4);
			this->Controls->Add(this->button_Increase);
			this->Controls->Add(this->button_Decrease);
			this->Controls->Add(this->button_Stand);
			this->Controls->Add(this->button_Double);
			this->Controls->Add(this->button_Hit);
			this->Controls->Add(this->menuStrip);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"Gra";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Blackjack";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Gra::Gra_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaKr3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PulaUz6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Deck))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void EndGame()
		 {
			 if(this->g->getIloscWin() == this->g->getMaxWin())
			 {
				 this->textBox_Status->AppendText(String::Format("GRACZ {0} WYGRYWA!\r\n", (marshal_as<String ^>(this->g->GetImie()))->ToUpper()));

				 this->button_Decrease->Enabled = false;
				 this->button_Double->Enabled = false;
				 this->button_Hit->Enabled = false;
				 this->button_Increase->Enabled = false;
				 this->button_Stand->Enabled = false;
				 this->button_Start->Enabled = false;

				 this->label2->Hide();

				 this->wynik = gcnew WinForm(marshal_as<String ^>(this->g->GetImie()), true, this->g->ZwrocPule(), this->g->GetLHit(), this->g->GetLStand(), this->g->GetLDouble(), this->g->getIloscWin(), this->g->getIloscLose());
				 this->wynik->Show();

				 


			 }
			 else if(this->g->ZwrocStawke() ==0 && this->g->ZwrocPule() == 0)
			 {
				 this->textBox_Status->AppendText(String::Format("GRACZ {0} PRZEGRYWA!\r\n", (marshal_as<String ^>(this->g->GetImie()))->ToUpper())); 	
				 this->button_Decrease->Enabled = false;
				 this->button_Double->Enabled = false;
				 this->button_Hit->Enabled = false;
				 this->button_Increase->Enabled = false;
				 this->button_Stand->Enabled = false;
				 this->button_Start->Enabled = false;

				 this->label2->Hide();

				 this->wynik = gcnew WinForm(marshal_as<String ^>(this->g->GetImie()), false, this->g->ZwrocPule(), this->g->GetLHit(), this->g->GetLStand(), this->g->GetLDouble(), this->g->getIloscWin(), this->g->getIloscLose());
				 this->wynik->Show();

			 
			 }

		 }
private: System::Void ViewToken()
		 {

			 this->textBox_Stawka->Text = String::Format("Zetony: {0} \r\nStawka: {1}", this->g->ZwrocPule().ToString(), this->g->ZwrocStawke().ToString());

			 this->textBox_Hold->Text = String::Format("Hold: {0}", this->g->GetHoldT().ToString());
			 if(this->g->GetHoldT() !=0)
			 {
				 this->textBox_Hold->BackColor = System::Drawing::Color::DarkOrange;
			 }
			 else
			 {
				 this->textBox_Hold->BackColor = System::Drawing::Color::Gainsboro;
			 }
		 }

private: System::Void ViewSum()
		 {
			 this->textBox_Gracz->Text = String::Format("{1}: {0}", this->g->SumUz().ToString(), marshal_as<String ^>(this->g->GetImie()) );
			 if(this->validated_double == true || this->validated_stand == true)
			 {
				 this->textBox_Krupier->Text = String::Format("Krupier: {0}", this->g->SumKr().ToString());
			 }
			 else
			 {
				 this->textBox_Krupier->Text = String::Format("Krupier: {0}", this->g->GetPulaKr(1).checkStrength().ToString());
			 }

		 }
private: System::Void ClearValidations()
		 {
			  this->validated_double=false;
			  this->KoniecRundy=false;
			  this->KoniecRundyKr=false;
			  this->validated_stand=false;
	
		 }

private: System::String^ ViewCard2(Card karta)
		{
			  array<String^>^ files1 = System::IO::Directory::GetFiles("1kier/");
			  array<String^>^ files2 = System::IO::Directory::GetFiles("2karo/");
			  array<String^>^ files3 = System::IO::Directory::GetFiles("3pik/");
			  array<String^>^ files4 = System::IO::Directory::GetFiles("4trefl/");
			  array<String^>^ files = System::IO::Directory::GetFiles("0/");

			  if(karta.getkolor() == 0)
			  {
				  return files[karta.getnumber()];
			  }
			  else if(karta.getkolor() == 1)
			  {
				  return files1[karta.getnumber()-1];
			  }
			  else if(karta.getkolor() == 2)
			  {
				  return files2[karta.getnumber()-1];
			  }
			  else if(karta.getkolor() == 3)
			  {
				  return files3[karta.getnumber()-1];
			  }
			  else if(karta.getkolor() == 4)
			  {
				  return files4[karta.getnumber()-1];
			  }
		}


private: System::Void ViewCards()
		{
							 
			this->PulaUz0->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(0)));
			this->PulaUz1->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(1)));
			this->PulaUz2->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(2)));
			this->PulaUz3->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(3)));
			this->PulaUz4->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(4)));
			this->PulaUz5->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(5)));
			this->PulaUz6->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaUz(6)));
			 
			if(this->validated_double == false && this->validated_stand == false)
			{
				 if(this->g->GetPulaKr(0).getkolor()==0)
				 {
					 this->PulaKr0->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(0)));
				 }
				 else
				 {
					 this->PulaKr0->Image = gcnew Drawing::Bitmap(this->ViewCard2(Card(1,0))); //wyswietlanie tylu karty
				 }

			}
			else if(this->validated_stand == true || this->validated_double == true)
			{
				 this->PulaKr0->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(0)));
			}

				 
			this->PulaKr1->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(1)));
			this->PulaKr2->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(2)));
			this->PulaKr3->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(3)));
			this->PulaKr4->Image = gcnew Drawing::Bitmap(this->ViewCard2(this->g->GetPulaKr(4)));
		
						
		 }
private: System::Void button_Stand_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->g->SetLStand(this->g->GetLStand() +1);
			 this->button_Decrease->Enabled = false;
		     this->button_Increase->Enabled = false;
			 this->validated_stand = true;
			 this->textBox_Status->AppendText("Uzyto: Stand\r\n");
			 this->ViewCards();
			
			 this->ViewSum();

				if (this->g->CheckBlackjackKr()==true)
				{
					this->ViewSum();
					this->textBox_Status->AppendText("Blackjack krupiera! Przegrana!\r\n");
					this->g->ZetonyDlaPrzegranejRundy();
				
					
				}
				else
				{
					this->g->AfterStand();
					
					this->ViewCards();
		
					this->KoniecRundyKr = this->g->EndingRoundKr();
					this->ViewSum();
			
					if(this->KoniecRundyKr == false)
					{
					
						if(this->g->CheckHold() == false)
						{
							if(this->g->checkWin() == true)
							{
								this->textBox_Status->AppendText("Runda wygrana!\r\n");
								this->g->ZetonyDlaWygranejRundy();

								this->UpdateProgressBar();

							}
							else
							{
								this->textBox_Status->AppendText("Runda przegrana!\r\n");
								this->g->ZetonyDlaPrzegranejRundy();

							}
						 }
						else if(this->g->CheckHold() == true)
						{
							this->textBox_Status->AppendText("Taka sama ilosc punktow - hold!\r\n");
							this->g->ZetonyDlaRemisu();
													
						}
					}
					else if(this->KoniecRundyKr == true)
					{
						this->textBox_Status->AppendText("Runda wygrana!\r\n");
						this->g->ZetonyDlaWygranejRundy();

						this->UpdateProgressBar();

					}
				}


				this->ViewToken();
				this->ClearValidations();
				this->button_Double->Enabled=false;

				this->button_Hit->Enabled=false;
				this->button_Stand->Enabled=false;


				this->button_Decrease->Enabled = true;
				this->button_Increase->Enabled = true;
				this->label2->Show();

				this->EndGame();
		
		 }
private: System::Void button_Hit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		

			 this->button_Double->Enabled=false;
			 this->textBox_Status->AppendText("Uzyto: Hit\r\n");
			 this->g->Hit();
			 this->g->SetLHit(this->g->GetLHit() +1);
			 this->ViewCards();
			 this->ViewSum();
			 this->KoniecRundy = this->g->EndingRoundUz();
			 if(this->KoniecRundy == true)
			 {
				 this->textBox_Status->AppendText("Runda przegrana!\r\n");
				 this->g->ZetonyDlaPrzegranejRundy();

		
				 this->ViewToken();
				 this->button_Hit->Enabled=false;
				 this->button_Stand->Enabled=false;
				 this->button_Decrease->Enabled = true;
				 this->button_Increase->Enabled=true;
				 this->ClearValidations();
				 this->EndGame();
				 this->label2->Show();


			 }
		 }
private: System::Void button_Double_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(this->g->Double() == true)
			 {
			
				 this->textBox_Status->AppendText("Uzyto: Double\r\n");
				
				 this->ViewToken();
				 
				
				this->g->Hit();
				this->ViewCards();
				this->ViewSum();
				this->KoniecRundy = this->g->EndingRoundUz();
				
				if(this->KoniecRundy == true)
				{
					this->textBox_Status->AppendText("Przegrana!\r\n");
					this->g->ZetonyDlaPrzegranejRundy();
										

				}
				else if(this->KoniecRundy == false)
				{
					 this->validated_double = true;
					 this->ViewCards();

					if (this->g->CheckBlackjackKr()==true)
					{						
						this->textBox_Status->AppendText("Blackjack krupiera! Przegrana!\r\n");
						this->g->ZetonyDlaPrzegranejRundy();
			
					}
					else
					{
					    this->g->AfterStand();
					
						this->ViewCards();
						this->KoniecRundyKr = this->g->EndingRoundKr();
						this->ViewSum();
				
						if(this->KoniecRundyKr == false)
						{
							if(this->g->CheckHold() == false)
							{
								if(this->g->checkWin() == true)
								{
									this->textBox_Status->AppendText("Runda wygrana!\r\n");
									this->g->ZetonyDlaWygranejRundy();
									this->UpdateProgressBar();

								}
								else
								{
									this->textBox_Status->AppendText("Runda przegrana!\r\n");
									this->g->ZetonyDlaPrzegranejRundy();

								}
							}
							else if(this->g->CheckHold() == true)
							{
								this->textBox_Status->AppendText("Taka sama ilosc punktow - hold!\r\n");
								this->g->ZetonyDlaRemisu();
						
							}
						}
						else if(this->KoniecRundyKr == true)
						{
							this->textBox_Status->AppendText("Runda wygrana!\r\n");
							this->g->ZetonyDlaWygranejRundy();

							this->UpdateProgressBar();

						}
					}

				}
					this->ViewToken();

					this->button_Double->Enabled=false;
					this->button_Hit->Enabled=false;
					this->button_Stand->Enabled=false;
					this->ClearValidations();

					this->button_Decrease->Enabled = true;
					this->button_Increase->Enabled = true;
					this->EndGame();
					this->label2->Show();
			  }
			  else
			  {
				  MessageBox::Show("Za malo dostepnych zetonow!", L"Double niedostepne");
			  }
				

		 }
private: System::Void button_Increase_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			this->g->IncreaseToken();
			 
			this->ViewToken();
			if(this->g->ZwrocStawke() <= 0)
			 {
				 this->button_Start->Enabled = false;
			 }
			 else
			 {
				 this->button_Start->Enabled = true;

			 }
		 }
private: System::Void button_Decrease_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->g->DecreaseToken();
			 			
			 this->ViewToken();
			 if(this->g->ZwrocStawke() <= 0)
			 {
				 this->button_Start->Enabled = false;
			 }
			 else
			 {
				 this->button_Start->Enabled = true;

			 }
		 }
private: System::Void button_Start_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->label2->Hide();

			 this->g->ResetTable();
			 this->g->StartLosowanie();
			 this->button_Decrease->Enabled = false;
			 this->button_Increase->Enabled = false;
			 this->button_Start->Enabled = false;
			 this->button_Hit->Enabled=true;
			 this->button_Double->Enabled=true;
		     this->button_Stand->Enabled=true;
			 this->ViewCards();
			 this->ViewSum();

			 if(this->g->CheckBlackjackUz() == true)
			 {
				 this->textBox_Status->AppendText("Blackjack! Wygrana!\r\n");
				 this->g->ZetonyDlaWygranejRundy();
				 this->ViewToken();

				 this->UpdateProgressBar();
				 this->label2->Show();

				 this->button_Hit->Enabled=false;
				 this->button_Double->Enabled=false;
				 this->button_Stand->Enabled=false;

				 this->button_Decrease->Enabled = true;
				 this->button_Increase->Enabled= true;
				 this->ClearValidations();
				 this->EndGame();

			 }
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

	 		if(this->mother != nullptr)
			 {
				 this->mother->Show();
				 
				 delete this;

			 }
			else
			 {
				 delete this;
			 }
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			 if(this->oProjekcie == nullptr)
			 {
				 this->oProjekcie = gcnew FormAbout();
				 this->oProjekcie->Show();
			 }
			 else
			 {
				 delete this->oProjekcie;
				 this->oProjekcie = gcnew FormAbout();
				 this->oProjekcie->Show();
			 }

		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ///utworzenie nowej gry
	
			this->g->ResetTable();
			this->label2->Show();
		
			this->ViewCards();
			this->ViewSum();
			

			this->textBox_Status->Text = "";
			 
			this->g->SetLHit(0);
			this->g->SetLDouble(0);
			this->g->SetLStand(0);
			
			this->g->SetTokenUz(10, 0);
			this->g->SetHoldT(0);
			this->ViewToken();

			this->ClearValidations();
		

			this->button_Double->Enabled=false;
			this->button_Hit->Enabled=false;
			this->button_Stand->Enabled=false;
			this->button_Start->Enabled=false;
			this->button_Decrease->Enabled = true;
			this->button_Increase->Enabled = true;
			
	
			this->g->setIloscLose(0);
			this->g->setIloscWin(0);
			this->UpdateProgressBar();

		 }

private: System::Void playToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->sp->PlayLooping();
		 }
private: System::Void stopToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->sp->Stop();
		 }
 private: System::Void UpdateProgressBar()
		  {
			 this->progressBar->Value = this->g->getIloscWin();
			 this->progressBar->Maximum = this->g->getMaxWin();
			 this->label1->Text = String::Format("Postep: {1}/{0}", this->g->getMaxWin(), this->g->getIloscWin());
		  }

private: System::Void Gra_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		 {
			this->mother->Show();
			
		 }
};
}
