#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Blackjack {

	/// <summary>
	/// Summary for FormAbout
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class FormAbout : public System::Windows::Forms::Form
	{
	public:
		FormAbout(void)
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
		~FormAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAbout::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(74, 188);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(293, 247);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(131, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"\"Blackjack\"";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(145, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Marlena Domalewska";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(110, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Elektronika i Telekomunikacja";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(119, 450);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(186, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"*Nacisnij spacje lub Alt + X aby wyjsc*";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(195, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Rok 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(134, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Politechnika Koszalinska";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(178, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"2019/2020";
			// 
			// FormAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(445, 487);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"FormAbout";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"O projekcie";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormAbout::FormAbout_KeyPress);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormAbout::FormAbout_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	



private: System::Void FormAbout_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if(e->KeyChar == ' ')
			{
				delete this; 
			}
		 }
private: System::Void FormAbout_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->Alt && e->KeyCode == Keys::X)
			 {
				 delete this;
			 }
		 }
};
}
