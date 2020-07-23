#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Blackjack {

	/// <summary>
	/// Summary for WinForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class WinForm : public System::Windows::Forms::Form
	{
	public:
		WinForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		WinForm(String ^text, bool CzyWygrano, unsigned int token, unsigned int liczhit, unsigned int liczstand, unsigned int liczdouble, unsigned int IleWygranych, unsigned int IlePrzegranych)
		{
			InitializeComponent();
			if(CzyWygrano == true)
			{
				
				this->label1->Text = "WYGRANA!";
				this->label2->Text = String::Format("Gratulacje, {0}, wygrales!", text);
			}
			else 
			{
				this->label1->Text = "PRZEGRANA...";
				this->label2->Text = String::Format("Niestety, {0}, przegrales...", text);

			}
			this->label3->Text = String::Format("Ilosc zetonów: {0}\r\nIlosc wygranych rund: {1}\r\nIlosc przegranych rund: {2}\r\nIle razy uzyto: \nHit: {3} \nStand: {4} \nDouble: {5}\n\n", token.ToString(), IleWygranych.ToString(), IlePrzegranych.ToString(), liczhit.ToString(), liczstand.ToString(), liczdouble.ToString());
			
	
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WinForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WinForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(14, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(14, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(14, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"*Nacisnij spacje aby wyjsc*";
			// 
			// WinForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(176, 206);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"WinForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wyniki";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &WinForm::WinForm_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WinForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
			 {
				 if(e->KeyChar == ' ')
				 {delete this;}

			 }
};
}
