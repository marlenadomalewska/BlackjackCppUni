#pragma once
#include "stdafx.h"


#include "Gra.h"


namespace Blackjack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->validated_PlayerName = false;

			this->sp = gcnew System::Media::SoundPlayer("0/yakuzatheme.wav");
			this->sp->PlayLooping();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_StartGame;
	protected: 


	
	private: Gra ^gra;
	private: System::Media::SoundPlayer ^sp;

	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::Label^  label1;
	protected: 

	private: System::Boolean validated_PlayerName;




	
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button_StartGame = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_StartGame
			// 
			this->button_StartGame->BackColor = System::Drawing::Color::Transparent;
			this->button_StartGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_StartGame.BackgroundImage")));
			this->button_StartGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_StartGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_StartGame->FlatAppearance->BorderSize = 0;
			this->button_StartGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_StartGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_StartGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_StartGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_StartGame->Location = System::Drawing::Point(217, 305);
			this->button_StartGame->Name = L"button_StartGame";
			this->button_StartGame->Size = System::Drawing::Size(140, 54);
			this->button_StartGame->TabIndex = 0;
			this->button_StartGame->Text = L"ZACZNIJ GRE";
			this->button_StartGame->UseVisualStyleBackColor = false;
			this->button_StartGame->Click += gcnew System::EventHandler(this, &Form1::button_StartGame_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::Color::Gainsboro;
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(197, 245);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(186, 23);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxName->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::textBoxName_Validating);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(194, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wprowadz nazwe gracza:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(579, 378);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->button_StartGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Blackjack";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			
	
	private: System::Void textBoxName_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
			 {
				 if(this->textBoxName->Text->Length <=1 && this->textBoxName->Text->Length >9)
				 {
					 this->validated_PlayerName = false;
				 }
				 else if(this->textBoxName->Text->Length >1 && this->textBoxName->Text->Length <=9)
				 {
					 this->validated_PlayerName = true;
				 }
			 }
	private: System::Void button_StartGame_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(this->validated_PlayerName == false)
				 {
					 MessageBox::Show(String::Format("Wprowadz nazwe gracza od 2 do 9 znakow!"), L"Blad");
				 }
				 else
				 {									 
					 this->gra = gcnew Gra(this, this->textBoxName->Text, this->sp );
					 this->gra->Show();
					 this->Hide();
					 this->textBoxName->Text = "";
					 this->validated_PlayerName = false;
				 }

			 }




};
}

