#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <comdef.h>
#include "aes.h"
#include "sha_256.h"
#include "ecc.h"

namespace AESproject
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
public
	ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
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

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel4;

	protected:
	private:
		System::Windows::Forms::TextBox ^ textBanMa1;

	private:
		System::Windows::Forms::TextBox ^ textKhoaMa1;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel6;

	private:
		System::Windows::Forms::Button ^ btnFileGiaiMa;

	private:
		System::Windows::Forms::Button ^ btnGiaiMa;

	private:
		System::Windows::Forms::Button ^ btnFileKey;

	private:
		System::Windows::Forms::Label ^ label7;

	private:
		System::Windows::Forms::Label ^ label6;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel3;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel2;

	private:
		System::Windows::Forms::Button ^ btnFileBanRo;

	private:
		System::Windows::Forms::Button ^ btnMaHoa;

	private:
		System::Windows::Forms::ComboBox ^ comboBox1;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel5;

	private:
		System::Windows::Forms::Label ^ label8;

	private:
		System::Windows::Forms::TextBox ^ textKhoaRo1;

	private:
		System::Windows::Forms::Button ^ btnRandKey;

	private:
		System::Windows::Forms::TextBox ^ textBanRo1;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel7;

	private:
		System::Windows::Forms::TextBox ^ showGiaiMa;

	private:
		System::Windows::Forms::TextBox ^ showGiaMaKhoa;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel8;

	private:
		System::Windows::Forms::Button ^ btnSaveGiaiMa;

	private:
		System::Windows::Forms::Label ^ label5;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel9;

	private:
		System::Windows::Forms::TextBox ^ showBanMa;

	private:
		System::Windows::Forms::TextBox ^ showKhoaMa;

	private:
		System::Windows::Forms::Label ^ label10;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel10;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Button ^ btnSaveBanMa;

	private:
		System::Windows::Forms::Label ^ label11;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel1;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::Button ^ btnClearAll;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel11;

	private:
		System::Windows::Forms::TabControl ^ tabControl1;

	private:
		System::Windows::Forms::TabPage ^ tabPage1;

	private:
		System::Windows::Forms::TabPage ^ tabPage2;

	private:
		System::Windows::Forms::TableLayoutPanel ^ tableLayoutPanel12;

	private:
		System::Windows::Forms::Button ^ button2;

	private:
		System::Windows::Forms::Label ^ label9;

	private:
		System::Windows::Forms::RichTextBox ^ richTextBox1;

	private:
		System::Windows::Forms::RichTextBox ^ richTextBox2;

	private:
		System::Windows::Forms::Label ^ label14;

	private:
		System::Windows::Forms::Label ^ label13;

	private:
		System::Windows::Forms::TextBox ^ text_b;

	private:
		System::Windows::Forms::TextBox ^ text_a;

	private:
		System::Windows::Forms::Label ^ label12;

	private:
		System::Windows::Forms::Button ^ btn_randElliptic;

	private:
		System::Windows::Forms::Button ^ btn_LayKhoa1;

	private:
		System::Windows::Forms::Label ^ label17;

	private:
		System::Windows::Forms::Label ^ label16;

	private:
		System::Windows::Forms::TextBox ^ text_qb1;

	private:
		System::Windows::Forms::Button ^ btn_randM;

	private:
		System::Windows::Forms::Label ^ label15;

	private:
		System::Windows::Forms::TextBox ^ text_m;

	private:
		System::Windows::Forms::TextBox ^ text_qa1;

	private:
		System::Windows::Forms::Label ^ label19;

	private:
		System::Windows::Forms::TextBox ^ text_khoaA;

	private:
		System::Windows::Forms::Label ^ label18;

	private:
		System::Windows::Forms::TextBox ^ text_qb2;

	private:
		System::Windows::Forms::Label ^ label20;

	private:
		System::Windows::Forms::TextBox ^ text_khoaB;

	private:
		System::Windows::Forms::Label ^ label21;

	private:
		System::Windows::Forms::Button ^ btn_LayKhoa2;

	private:
		System::Windows::Forms::Label ^ label22;

	private:
		System::Windows::Forms::Label ^ label23;

	private:
		System::Windows::Forms::TextBox ^ text_qa2;

	private:
		System::Windows::Forms::Button ^ btn_randN;

	private:
		System::Windows::Forms::Label ^ label24;

	private:
		System::Windows::Forms::TextBox ^ text_n;

	private:
		System::Windows::Forms::Label ^ label25;

	private:
		System::Windows::Forms::TextBox ^ text_p;

	protected:
	protected:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBanMa1 = (gcnew System::Windows::Forms::TextBox());
			this->textKhoaMa1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnFileGiaiMa = (gcnew System::Windows::Forms::Button());
			this->btnGiaiMa = (gcnew System::Windows::Forms::Button());
			this->btnFileKey = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnFileBanRo = (gcnew System::Windows::Forms::Button());
			this->btnMaHoa = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textKhoaRo1 = (gcnew System::Windows::Forms::TextBox());
			this->btnRandKey = (gcnew System::Windows::Forms::Button());
			this->textBanRo1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->showGiaMaKhoa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnSaveGiaiMa = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->showGiaiMa = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->showBanMa = (gcnew System::Windows::Forms::TextBox());
			this->showKhoaMa = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSaveBanMa = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->text_p = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->text_qb2 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->text_khoaB = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_LayKhoa2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->text_qa2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_randN = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->text_n = (gcnew System::Windows::Forms::TextBox());
			this->text_qa1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->text_khoaA = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_LayKhoa1 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->text_qb1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_randM = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->text_m = (gcnew System::Windows::Forms::TextBox());
			this->btn_randElliptic = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->text_b = (gcnew System::Windows::Forms::TextBox());
			this->text_a = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->SuspendLayout();
			//
			// tableLayoutPanel4
			//
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  70)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  30)));
			this->tableLayoutPanel4->Controls->Add(this->textBanMa1, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->textKhoaMa1, 0, 3);
			this->tableLayoutPanel4->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->btnFileKey, 1, 3);
			this->tableLayoutPanel4->Location = System::Drawing::Point(561, 55);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(16);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 4;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(513, 278);
			this->tableLayoutPanel4->TabIndex = 11;
			this->tableLayoutPanel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel4_Paint);
			//
			// textBanMa1
			//
			this->textBanMa1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->textBanMa1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->textBanMa1->Location = System::Drawing::Point(0, 27);
			this->textBanMa1->Margin = System::Windows::Forms::Padding(0);
			this->textBanMa1->Multiline = true;
			this->textBanMa1->Name = L"textBanMa1";
			this->textBanMa1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBanMa1->Size = System::Drawing::Size(359, 166);
			this->textBanMa1->TabIndex = 0;
			this->textBanMa1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBanMa1_TextChanged_1);
			//
			// textKhoaMa1
			//
			this->textKhoaMa1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->textKhoaMa1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->textKhoaMa1->Location = System::Drawing::Point(3, 236);
			this->textKhoaMa1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textKhoaMa1->Multiline = true;
			this->textKhoaMa1->Name = L"textKhoaMa1";
			this->textKhoaMa1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textKhoaMa1->Size = System::Drawing::Size(353, 40);
			this->textKhoaMa1->TabIndex = 1;
			//
			// label3
			//
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label3->Location = System::Drawing::Point(3, 195);
			this->label3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(353, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Khóa";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// tableLayoutPanel6
			//
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel6->Controls->Add(this->btnFileGiaiMa, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->btnGiaiMa, 0, 1);
			this->tableLayoutPanel6->Location = System::Drawing::Point(362, 68);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 25);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(148, 100);
			this->tableLayoutPanel6->TabIndex = 3;
			//
			// btnFileGiaiMa
			//
			this->btnFileGiaiMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnFileGiaiMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnFileGiaiMa->Location = System::Drawing::Point(5, 6);
			this->btnFileGiaiMa->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnFileGiaiMa->Name = L"btnFileGiaiMa";
			this->btnFileGiaiMa->Size = System::Drawing::Size(138, 38);
			this->btnFileGiaiMa->TabIndex = 0;
			this->btnFileGiaiMa->Text = L"File";
			this->btnFileGiaiMa->UseVisualStyleBackColor = true;
			this->btnFileGiaiMa->Click += gcnew System::EventHandler(this, &MyForm::btnFileGiaiMa_Click);
			//
			// btnGiaiMa
			//
			this->btnGiaiMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnGiaiMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnGiaiMa->Location = System::Drawing::Point(5, 56);
			this->btnGiaiMa->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnGiaiMa->Name = L"btnGiaiMa";
			this->btnGiaiMa->Size = System::Drawing::Size(138, 38);
			this->btnGiaiMa->TabIndex = 1;
			this->btnGiaiMa->Text = L"Giải Mã";
			this->btnGiaiMa->UseVisualStyleBackColor = true;
			this->btnGiaiMa->Click += gcnew System::EventHandler(this, &MyForm::btnGiaiMa_Click_1);
			//
			// btnFileKey
			//
			this->btnFileKey->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnFileKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnFileKey->Location = System::Drawing::Point(364, 240);
			this->btnFileKey->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnFileKey->Name = L"btnFileKey";
			this->btnFileKey->Size = System::Drawing::Size(144, 32);
			this->btnFileKey->TabIndex = 4;
			this->btnFileKey->Text = L"File";
			this->btnFileKey->UseVisualStyleBackColor = true;
			this->btnFileKey->Click += gcnew System::EventHandler(this, &MyForm::btnFileKey_Click);
			//
			// label7
			//
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label7->Location = System::Drawing::Point(548, 2);
			this->label7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(539, 35);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Giải Mã";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// label6
			//
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.8F));
			this->label6->Location = System::Drawing::Point(3, 2);
			this->label6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(539, 35);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Mã Hóa";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// tableLayoutPanel3
			//
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  70)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  30)));
			this->tableLayoutPanel3->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->comboBox1, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->textKhoaRo1, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->btnRandKey, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBanRo1, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->richTextBox1, 0, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(16, 55);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 4;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(513, 278);
			this->tableLayoutPanel3->TabIndex = 1;
			//
			// label2
			//
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label2->Location = System::Drawing::Point(3, 2);
			this->label2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(353, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Bản Rõ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			//
			// tableLayoutPanel2
			//
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel2->Controls->Add(this->btnFileBanRo, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnMaHoa, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(362, 68);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 25);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(148, 100);
			this->tableLayoutPanel2->TabIndex = 2;
			//
			// btnFileBanRo
			//
			this->btnFileBanRo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnFileBanRo->Location = System::Drawing::Point(5, 6);
			this->btnFileBanRo->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnFileBanRo->Name = L"btnFileBanRo";
			this->btnFileBanRo->Size = System::Drawing::Size(138, 38);
			this->btnFileBanRo->TabIndex = 1;
			this->btnFileBanRo->Text = L"File";
			this->btnFileBanRo->UseVisualStyleBackColor = true;
			this->btnFileBanRo->Click += gcnew System::EventHandler(this, &MyForm::btnFileBanRo_Click);
			//
			// btnMaHoa
			//
			this->btnMaHoa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaHoa->Location = System::Drawing::Point(5, 56);
			this->btnMaHoa->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnMaHoa->Name = L"btnMaHoa";
			this->btnMaHoa->Size = System::Drawing::Size(138, 38);
			this->btnMaHoa->TabIndex = 0;
			this->btnMaHoa->Text = L"Mã Hóa";
			this->btnMaHoa->UseVisualStyleBackColor = true;
			this->btnMaHoa->Click += gcnew System::EventHandler(this, &MyForm::btnMaHoa_Click_1);
			//
			// comboBox1
			//
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array<System::Object ^>(3){L"128 bit", L"192 bit", L"256 bit"});
			this->comboBox1->Location = System::Drawing::Point(362, 196);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(148, 29);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			//
			// tableLayoutPanel5
			//
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  30)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  70)));
			this->tableLayoutPanel5->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 193);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(359, 41);
			this->tableLayoutPanel5->TabIndex = 5;
			//
			// label8
			//
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label8->Location = System::Drawing::Point(3, 2);
			this->label8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 37);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Khóa";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// textKhoaRo1
			//
			this->textKhoaRo1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->textKhoaRo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->textKhoaRo1->Location = System::Drawing::Point(3, 236);
			this->textKhoaRo1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textKhoaRo1->Multiline = true;
			this->textKhoaRo1->Name = L"textKhoaRo1";
			this->textKhoaRo1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textKhoaRo1->Size = System::Drawing::Size(353, 40);
			this->textKhoaRo1->TabIndex = 6;
			this->textKhoaRo1->TextChanged += gcnew System::EventHandler(this, &MyForm::textKhoaRo1_TextChanged);
			//
			// btnRandKey
			//
			this->btnRandKey->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnRandKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnRandKey->Location = System::Drawing::Point(364, 240);
			this->btnRandKey->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnRandKey->Name = L"btnRandKey";
			this->btnRandKey->Size = System::Drawing::Size(144, 32);
			this->btnRandKey->TabIndex = 7;
			this->btnRandKey->Text = L"Create Key";
			this->btnRandKey->UseVisualStyleBackColor = true;
			this->btnRandKey->Click += gcnew System::EventHandler(this, &MyForm::btnRandKey_Click);
			//
			// textBanRo1
			//
			this->textBanRo1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Right));
			this->textBanRo1->BackColor = System::Drawing::SystemColors::Control;
			this->textBanRo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->textBanRo1->Location = System::Drawing::Point(453, 2);
			this->textBanRo1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBanRo1->Multiline = true;
			this->textBanRo1->Name = L"textBanRo1";
			this->textBanRo1->Size = System::Drawing::Size(57, 23);
			this->textBanRo1->TabIndex = 0;
			this->textBanRo1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBanRo1_TextChanged);
			//
			// richTextBox1
			//
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(359, 166);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			//
			// tableLayoutPanel7
			//
			this->tableLayoutPanel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  70)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  30)));
			this->tableLayoutPanel7->Controls->Add(this->showGiaMaKhoa, 0, 3);
			this->tableLayoutPanel7->Controls->Add(this->label4, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->showGiaiMa, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->richTextBox2, 0, 1);
			this->tableLayoutPanel7->Location = System::Drawing::Point(561, 365);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(16);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 4;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(513, 279);
			this->tableLayoutPanel7->TabIndex = 12;
			//
			// showGiaMaKhoa
			//
			this->showGiaMaKhoa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->showGiaMaKhoa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->showGiaMaKhoa->Location = System::Drawing::Point(3, 237);
			this->showGiaMaKhoa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->showGiaMaKhoa->Multiline = true;
			this->showGiaMaKhoa->Name = L"showGiaMaKhoa";
			this->showGiaMaKhoa->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->showGiaMaKhoa->Size = System::Drawing::Size(353, 40);
			this->showGiaMaKhoa->TabIndex = 1;
			this->showGiaMaKhoa->TextChanged += gcnew System::EventHandler(this, &MyForm::showGiaMaKhoa_TextChanged);
			//
			// label4
			//
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label4->Location = System::Drawing::Point(3, 196);
			this->label4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(353, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Khóa";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// tableLayoutPanel8
			//
			this->tableLayoutPanel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel8->Controls->Add(this->btnSaveGiaiMa, 0, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(362, 69);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 25);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(148, 100);
			this->tableLayoutPanel8->TabIndex = 3;
			//
			// btnSaveGiaiMa
			//
			this->btnSaveGiaiMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnSaveGiaiMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnSaveGiaiMa->Location = System::Drawing::Point(5, 6);
			this->btnSaveGiaiMa->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnSaveGiaiMa->Name = L"btnSaveGiaiMa";
			this->btnSaveGiaiMa->Size = System::Drawing::Size(138, 38);
			this->btnSaveGiaiMa->TabIndex = 2;
			this->btnSaveGiaiMa->Text = L"Save";
			this->btnSaveGiaiMa->UseVisualStyleBackColor = true;
			this->btnSaveGiaiMa->Click += gcnew System::EventHandler(this, &MyForm::btnSaveGiaiMa_Click);
			//
			// label5
			//
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label5->Location = System::Drawing::Point(3, 2);
			this->label5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(353, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Bản Giải Mã";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// showGiaiMa
			//
			this->showGiaiMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Right));
			this->showGiaiMa->BackColor = System::Drawing::SystemColors::Control;
			this->showGiaiMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->showGiaiMa->Location = System::Drawing::Point(434, 3);
			this->showGiaiMa->Multiline = true;
			this->showGiaiMa->Name = L"showGiaiMa";
			this->showGiaiMa->Size = System::Drawing::Size(76, 21);
			this->showGiaiMa->TabIndex = 0;
			this->showGiaiMa->TextChanged += gcnew System::EventHandler(this, &MyForm::showBanMa_TextChanged);
			//
			// richTextBox2
			//
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->Location = System::Drawing::Point(0, 27);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(359, 167);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"";
			//
			// tableLayoutPanel9
			//
			this->tableLayoutPanel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  70)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  30)));
			this->tableLayoutPanel9->Controls->Add(this->showBanMa, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->showKhoaMa, 0, 3);
			this->tableLayoutPanel9->Controls->Add(this->label10, 0, 2);
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel10, 1, 1);
			this->tableLayoutPanel9->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(16, 365);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(16);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 4;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 60)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(513, 279);
			this->tableLayoutPanel9->TabIndex = 13;
			//
			// showBanMa
			//
			this->showBanMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->showBanMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->showBanMa->Location = System::Drawing::Point(0, 27);
			this->showBanMa->Margin = System::Windows::Forms::Padding(0);
			this->showBanMa->Multiline = true;
			this->showBanMa->Name = L"showBanMa";
			this->showBanMa->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->showBanMa->Size = System::Drawing::Size(359, 167);
			this->showBanMa->TabIndex = 0;
			this->showBanMa->TextChanged += gcnew System::EventHandler(this, &MyForm::showBanMa_TextChanged_1);
			//
			// showKhoaMa
			//
			this->showKhoaMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->showKhoaMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->showKhoaMa->Location = System::Drawing::Point(3, 237);
			this->showKhoaMa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->showKhoaMa->Multiline = true;
			this->showKhoaMa->Name = L"showKhoaMa";
			this->showKhoaMa->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->showKhoaMa->Size = System::Drawing::Size(353, 40);
			this->showKhoaMa->TabIndex = 1;
			//
			// label10
			//
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label10->Location = System::Drawing::Point(3, 196);
			this->label10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(353, 37);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Khóa";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//
			// tableLayoutPanel10
			//
			this->tableLayoutPanel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel10->ColumnCount = 1;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   50)));
			this->tableLayoutPanel10->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel10->Controls->Add(this->btnSaveBanMa, 0, 0);
			this->tableLayoutPanel10->Location = System::Drawing::Point(362, 69);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 25);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 2;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(148, 100);
			this->tableLayoutPanel10->TabIndex = 3;
			//
			// button1
			//
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->button1->Location = System::Drawing::Point(5, 56);
			this->button1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Chuyển";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			//
			// btnSaveBanMa
			//
			this->btnSaveBanMa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->btnSaveBanMa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->btnSaveBanMa->Location = System::Drawing::Point(5, 6);
			this->btnSaveBanMa->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->btnSaveBanMa->Name = L"btnSaveBanMa";
			this->btnSaveBanMa->Size = System::Drawing::Size(138, 38);
			this->btnSaveBanMa->TabIndex = 2;
			this->btnSaveBanMa->Text = L"Save";
			this->btnSaveBanMa->UseVisualStyleBackColor = true;
			this->btnSaveBanMa->Click += gcnew System::EventHandler(this, &MyForm::btnSaveBanMa_Click);
			//
			// label11
			//
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label11->Location = System::Drawing::Point(3, 2);
			this->label11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(353, 23);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Bản Mã";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// tableLayoutPanel1
			//
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 40);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1090, 660);
			this->tableLayoutPanel1->TabIndex = 1;
			//
			// label1
			//
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(331, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mã Hóa Aes";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			//
			// btnClearAll
			//
			this->btnClearAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.8F));
			this->btnClearAll->Location = System::Drawing::Point(854, 3);
			this->btnClearAll->Margin = System::Windows::Forms::Padding(80, 3, 80, 3);
			this->btnClearAll->MaximumSize = System::Drawing::Size(156, 64);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(156, 34);
			this->btnClearAll->TabIndex = 2;
			this->btnClearAll->Text = L"Clear All";
			this->btnClearAll->UseVisualStyleBackColor = true;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &MyForm::btnClearAll_Click);
			//
			// tableLayoutPanel11
			//
			this->tableLayoutPanel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel11->ColumnCount = 3;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   30)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   40)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   30)));
			this->tableLayoutPanel11->Controls->Add(this->btnClearAll, 2, 0);
			this->tableLayoutPanel11->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel11->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(1090, 40);
			this->tableLayoutPanel11->TabIndex = 3;
			//
			// tabControl1
			//
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.8F));
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1095, 734);
			this->tabControl1->TabIndex = 4;
			//
			// tabPage1
			//
			this->tabPage1->Controls->Add(this->tableLayoutPanel11);
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1087, 700);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Aes Crypto";
			this->tabPage1->UseVisualStyleBackColor = true;
			//
			// tabPage2
			//
			this->tabPage2->Controls->Add(this->text_p);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->text_qb2);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->text_khoaB);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->btn_LayKhoa2);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->text_qa2);
			this->tabPage2->Controls->Add(this->btn_randN);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->text_n);
			this->tabPage2->Controls->Add(this->text_qa1);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->text_khoaA);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->btn_LayKhoa1);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->text_qb1);
			this->tabPage2->Controls->Add(this->btn_randM);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->text_m);
			this->tabPage2->Controls->Add(this->btn_randElliptic);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->text_b);
			this->tabPage2->Controls->Add(this->text_a);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->tableLayoutPanel12);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1087, 700);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Create Key Ecc";
			this->tabPage2->UseVisualStyleBackColor = true;
			//
			// text_p
			//
			this->text_p->BackColor = System::Drawing::SystemColors::Control;
			this->text_p->Location = System::Drawing::Point(460, 136);
			this->text_p->Multiline = true;
			this->text_p->Name = L"text_p";
			this->text_p->Size = System::Drawing::Size(184, 49);
			this->text_p->TabIndex = 34;
			//
			// label25
			//
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(353, 139);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(100, 22);
			this->label25->TabIndex = 33;
			this->label25->Text = L"P(x,y) : ";
			//
			// text_qb2
			//
			this->text_qb2->Location = System::Drawing::Point(671, 299);
			this->text_qb2->Multiline = true;
			this->text_qb2->Name = L"text_qb2";
			this->text_qb2->Size = System::Drawing::Size(221, 48);
			this->text_qb2->TabIndex = 32;
			//
			// label20
			//
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(615, 302);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(50, 22);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Q(B)";
			//
			// text_khoaB
			//
			this->text_khoaB->Location = System::Drawing::Point(619, 517);
			this->text_khoaB->Multiline = true;
			this->text_khoaB->Name = L"text_khoaB";
			this->text_khoaB->Size = System::Drawing::Size(273, 57);
			this->text_khoaB->TabIndex = 30;
			//
			// label21
			//
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(618, 484);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(110, 22);
			this->label21->TabIndex = 29;
			this->label21->Text = L"Khóa Chung";
			//
			// btn_LayKhoa2
			//
			this->btn_LayKhoa2->Location = System::Drawing::Point(704, 428);
			this->btn_LayKhoa2->Name = L"btn_LayKhoa2";
			this->btn_LayKhoa2->Size = System::Drawing::Size(107, 39);
			this->btn_LayKhoa2->TabIndex = 28;
			this->btn_LayKhoa2->Text = L"Lấy Khóa ";
			this->btn_LayKhoa2->UseVisualStyleBackColor = true;
			this->btn_LayKhoa2->Click += gcnew System::EventHandler(this, &MyForm::btn_LayKhoa2_Click);
			//
			// label22
			//
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14));
			this->label22->Location = System::Drawing::Point(756, 207);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 31);
			this->label22->TabIndex = 27;
			this->label22->Text = L"B";
			//
			// label23
			//
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(615, 377);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(50, 22);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Q(A)";
			//
			// text_qa2
			//
			this->text_qa2->Location = System::Drawing::Point(671, 364);
			this->text_qa2->Multiline = true;
			this->text_qa2->Name = L"text_qa2";
			this->text_qa2->Size = System::Drawing::Size(221, 48);
			this->text_qa2->TabIndex = 25;
			//
			// btn_randN
			//
			this->btn_randN->Location = System::Drawing::Point(795, 253);
			this->btn_randN->Name = L"btn_randN";
			this->btn_randN->Size = System::Drawing::Size(97, 29);
			this->btn_randN->TabIndex = 24;
			this->btn_randN->Text = L"Random";
			this->btn_randN->UseVisualStyleBackColor = true;
			this->btn_randN->Click += gcnew System::EventHandler(this, &MyForm::btn_randN_Click);
			//
			// label24
			//
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(618, 257);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(40, 22);
			this->label24->TabIndex = 23;
			this->label24->Text = L"n :";
			//
			// text_n
			//
			this->text_n->Location = System::Drawing::Point(671, 254);
			this->text_n->Name = L"text_n";
			this->text_n->Size = System::Drawing::Size(100, 29);
			this->text_n->TabIndex = 22;
			//
			// text_qa1
			//
			this->text_qa1->Location = System::Drawing::Point(207, 299);
			this->text_qa1->Multiline = true;
			this->text_qa1->Name = L"text_qa1";
			this->text_qa1->Size = System::Drawing::Size(221, 48);
			this->text_qa1->TabIndex = 21;
			//
			// label19
			//
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(151, 302);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 22);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Q(A)";
			//
			// text_khoaA
			//
			this->text_khoaA->Location = System::Drawing::Point(155, 517);
			this->text_khoaA->Multiline = true;
			this->text_khoaA->Name = L"text_khoaA";
			this->text_khoaA->Size = System::Drawing::Size(273, 57);
			this->text_khoaA->TabIndex = 19;
			//
			// label18
			//
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(154, 484);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 22);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Khóa Chung";
			//
			// btn_LayKhoa1
			//
			this->btn_LayKhoa1->Location = System::Drawing::Point(240, 428);
			this->btn_LayKhoa1->Name = L"btn_LayKhoa1";
			this->btn_LayKhoa1->Size = System::Drawing::Size(107, 39);
			this->btn_LayKhoa1->TabIndex = 17;
			this->btn_LayKhoa1->Text = L"Lấy Khóa ";
			this->btn_LayKhoa1->UseVisualStyleBackColor = true;
			this->btn_LayKhoa1->Click += gcnew System::EventHandler(this, &MyForm::btn_LayKhoa1_Click);
			//
			// label17
			//
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14));
			this->label17->Location = System::Drawing::Point(292, 207);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 31);
			this->label17->TabIndex = 16;
			this->label17->Text = L"A";
			//
			// label16
			//
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(151, 377);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 22);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Q(B)";
			//
			// text_qb1
			//
			this->text_qb1->Location = System::Drawing::Point(207, 364);
			this->text_qb1->Multiline = true;
			this->text_qb1->Name = L"text_qb1";
			this->text_qb1->Size = System::Drawing::Size(221, 48);
			this->text_qb1->TabIndex = 14;
			//
			// btn_randM
			//
			this->btn_randM->Location = System::Drawing::Point(331, 253);
			this->btn_randM->Name = L"btn_randM";
			this->btn_randM->Size = System::Drawing::Size(97, 29);
			this->btn_randM->TabIndex = 13;
			this->btn_randM->Text = L"Random";
			this->btn_randM->UseVisualStyleBackColor = true;
			this->btn_randM->Click += gcnew System::EventHandler(this, &MyForm::btn_randM_Click);
			//
			// label15
			//
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(154, 257);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 22);
			this->label15->TabIndex = 12;
			this->label15->Text = L"m :";
			//
			// text_m
			//
			this->text_m->Location = System::Drawing::Point(207, 254);
			this->text_m->Name = L"text_m";
			this->text_m->Size = System::Drawing::Size(100, 29);
			this->text_m->TabIndex = 11;
			//
			// btn_randElliptic
			//
			this->btn_randElliptic->Location = System::Drawing::Point(663, 120);
			this->btn_randElliptic->Name = L"btn_randElliptic";
			this->btn_randElliptic->Size = System::Drawing::Size(103, 29);
			this->btn_randElliptic->TabIndex = 10;
			this->btn_randElliptic->Text = L"Random E";
			this->btn_randElliptic->UseVisualStyleBackColor = true;
			this->btn_randElliptic->Click += gcnew System::EventHandler(this, &MyForm::btn_randElliptic_Click);
			//
			// label14
			//
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(498, 104);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 22);
			this->label14->TabIndex = 9;
			this->label14->Text = L"b :";
			//
			// label13
			//
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(311, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 22);
			this->label13->TabIndex = 8;
			this->label13->Text = L"a :";
			//
			// text_b
			//
			this->text_b->Location = System::Drawing::Point(544, 101);
			this->text_b->Name = L"text_b";
			this->text_b->Size = System::Drawing::Size(100, 29);
			this->text_b->TabIndex = 7;
			//
			// text_a
			//
			this->text_a->Location = System::Drawing::Point(357, 101);
			this->text_a->Name = L"text_a";
			this->text_a->Size = System::Drawing::Size(100, 29);
			this->text_a->TabIndex = 6;
			//
			// label12
			//
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(353, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(290, 22);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Elliptic : y^2 = x^3 + ax +b";
			//
			// tableLayoutPanel12
			//
			this->tableLayoutPanel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel12->ColumnCount = 3;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   30)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   40)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								   30)));
			this->tableLayoutPanel12->Controls->Add(this->button2, 2, 0);
			this->tableLayoutPanel12->Controls->Add(this->label9, 1, 0);
			this->tableLayoutPanel12->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel12->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(1100, 40);
			this->tableLayoutPanel12->TabIndex = 4;
			//
			// button2
			//
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.8F));
			this->button2->Location = System::Drawing::Point(864, 3);
			this->button2->Margin = System::Windows::Forms::Padding(80, 3, 80, 3);
			this->button2->MaximumSize = System::Drawing::Size(156, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Clear All";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			//
			// label9
			//
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) | System::Windows::Forms::AnchorStyles::Left) | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label9->Location = System::Drawing::Point(334, 4);
			this->label9->Margin = System::Windows::Forms::Padding(4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(432, 32);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Mã Hóa Ecc";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 734);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	private:
		System::Void btnFile1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void btnMaHoa_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void btnFile2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void btnGiaiMa_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void btnChuyenFile_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBanRo1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBanMa2_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBanMa1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBanRo2_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void toolStripMenuItem1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void showBanMa_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textKhoaRo1_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void showGiaMaKhoa_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void tableLayoutPanel4_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e)
		{
		}

	private:
		System::Void comboBox1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void showBanMa_TextChanged_1(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void textBanMa1_TextChanged_1(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

		int toNumber(string str_in)
		{
			if (str_in == "128")
				return 128;
			if (str_in == "192")
				return 192;
			if (str_in == "256")
				return 256;
			return 0;
		}

	private:
		System::Void btnRandKey_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			int n_key;
			string str_nkey = msclr::interop::marshal_as<std::string>(this->comboBox1->Text);
			str_nkey = str_nkey.substr(0, 3);
			n_key = toNumber(str_nkey);
			if (n_key == 0)
				return;

			String ^ str = msclr::interop::marshal_as<System::String ^>(randKey(n_key));
			this->textKhoaRo1->Text = str;
		}

		// Kiểm tra định dạng file
		bool CheckFileExtension(String ^ filePath, String ^ extension)
		{
			int pos = filePath->LastIndexOf('.');
			if (pos != -1)
			{
				String ^ fileExtension = filePath->Substring(pos + 1);
				return fileExtension->Equals(extension, StringComparison::InvariantCultureIgnoreCase);
			}
			return false;
		}

		String ^ wordin = L"";
		String ^ newXml = L"";

	private:
		System::Void btnFileBanRo_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->InitialDirectory = "d:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 2;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String ^ content;
				if (CheckFileExtension(openFileDialog1->FileName, "txt"))
				{
					// Đọc nội dung của file được chọn
					System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
					content = sr->ReadToEnd();
					sr->Close();
					// Hiện nội dung từ file ra màn hình textbox
					this->textBanRo1->Text = content;
					this->richTextBox1->Text = content;
				}
				else if (CheckFileExtension(openFileDialog1->FileName, "docx"))
				{
					// Tạo một đối tượng Application của Microsoft Word
					Microsoft::Office::Interop::Word::ApplicationClass ^ wordApp = gcnew Microsoft::Office::Interop::Word::ApplicationClass();

					wordApp->Visible = false;
					System::Object ^ filename = openFileDialog1->FileName;

					Object ^ missing = System::Reflection::Missing::Value;

					// Microsoft::Office::Interop::Word::Document^ doc = wordApp->Documents->OpenNoRepairDialog(filename);
					Microsoft::Office::Interop::Word::Document ^ doc = gcnew Microsoft::Office::Interop::Word::DocumentClass();
					doc = wordApp->Documents->Open(
						filename, missing, missing, missing, missing, missing, missing, missing,
						missing, missing, missing, missing, missing, missing, missing, missing);

					String ^ xml = doc->WordOpenXML;
					XmlDocument ^ xmlDoc = gcnew XmlDocument();
					xmlDoc->LoadXml(xml);
					XmlNodeList ^ nodes = xmlDoc->SelectNodes("//*[not(*)]");

					for each (XmlNode ^ val in nodes)
					{
						if (String::IsNullOrWhiteSpace(val->InnerText))
						{
							// Nút có giá trị rỗng
						}
						else
						{
							// Nút có giá trị			//Luu y
							wordin += val->InnerText + L"~";
							val->InnerText = L"0";
						}
					}
					newXml = xmlDoc->OuterXml;

					// Lấy nội dung của file docx
					content = doc->Content->Text;
					doc->Content->Copy();
					this->richTextBox1->Paste();

					Object ^ Router = false;
					Microsoft::Office::Interop::Word::_Document ^ docObj = doc;
					docObj->Close(missing, missing, missing);
					// Đóng ứng dụng Microsoft Word
					wordApp->Quit(missing, missing, missing);
				}
				else
				{
					MessageBox::Show("Log error");
				}
			}
		}

	private:
		System::Void btnFileGiaiMa_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->InitialDirectory = "d:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 2;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				int idex = openFileDialog1->FileName->LastIndexOf('.');
				String ^ fileXml = openFileDialog1->FileName->Substring(0, idex);
				fileXml = fileXml + "Xml.txt";
				if (File::Exists(fileXml))
				{
					System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(fileXml);
					newXml = sr->ReadToEnd();
					sr->Close();
				}

				String ^ content;
				if (CheckFileExtension(openFileDialog1->FileName, "txt"))
				{
					// Đọc nội dung của file được chọn
					System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
					content = sr->ReadToEnd();
					sr->Close();
					// Hiện nội dung từ file ra màn hình textbox
					content = content->Remove(content->Length - 2, 2);
					this->textBanMa1->Text = content;
				}
				else if (CheckFileExtension(openFileDialog1->FileName, "docx"))
				{
				}
				else
				{
					MessageBox::Show("Log error");
				}
			}
		}

	private:
		System::Void btnMaHoa_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (this->richTextBox1->Text == "")
			{
				MessageBox::Show("Vui Long nhap noi dung can ma hoa!");
			}
			else if (this->textKhoaRo1->Text == "")
			{
				MessageBox::Show("Vui long Nhap khoa!");
			}
			else if (this->textKhoaRo1->Text->Length != 32 && this->textKhoaRo1->Text->Length != 48 && this->textKhoaRo1->Text->Length != 64)
			{
				MessageBox::Show("Do dai khoa khong du!");
			}
			else
			{
				int n_key = this->textKhoaRo1->Text->Length * 4;
				wstring br;
				if (wordin != "")
				{
					String ^ temp = wordin;
					br = msclr::interop::marshal_as<std::wstring>(temp);
				}
				else
					br = msclr::interop::marshal_as<std::wstring>(this->richTextBox1->Text);
				string str = UnicodetoHex(br);
				string key = msclr::interop::marshal_as<std::string>(this->textKhoaRo1->Text);
				string banma = AES_Unicode(str, key, n_key, aes::maHoa);
				String ^ ma = msclr::interop::marshal_as<System::String ^>(banma);
				this->showBanMa->Text = ma;
				this->showKhoaMa->Text = this->textKhoaRo1->Text;
			}
		}

	private:
		System::Void button1_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->textBanMa1->Text = this->showBanMa->Text;
			this->textKhoaMa1->Text = this->showKhoaMa->Text;
		}

	private:
		System::Void btnGiaiMa_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (this->textBanMa1->Text == "")
			{
				MessageBox::Show("Chua co noi dung can giai ma !");
			}
			else if (this->textKhoaMa1->Text == "")
			{
				MessageBox::Show("Dang thieu khoa!");
			}
			else if (this->textKhoaMa1->Text->Length != 32 && this->textKhoaMa1->Text->Length != 48 && this->textKhoaMa1->Text->Length != 64)
			{
				MessageBox::Show("Do dai khoa khong du!");
			}
			else
			{
				int n_key = this->textKhoaMa1->Text->Length * 4;
				string br = msclr::interop::marshal_as<std::string>(this->textBanMa1->Text);
				string key = msclr::interop::marshal_as<std::string>(this->textKhoaMa1->Text);
				string banma = AES_Unicode(br, key, n_key, aes::giaiMa);
				String ^ ma = msclr::interop::marshal_as<System::String ^>(HextoUnicode(banma));
				// Luu y
				this->showGiaMaKhoa->Text = this->textKhoaMa1->Text;
				cli::array<String ^> ^ result = ma->Split('~');
				this->showGiaiMa->Text = ma;

				if (newXml != L"")
				{
					Microsoft::Office::Interop::Word::ApplicationClass ^ wordApp =
						gcnew Microsoft::Office::Interop::Word::ApplicationClass();
					String ^ fileTemp = "D:\\temp\\temp.docx";
					wordApp->Visible = false;
					System::Object ^ filename = fileTemp;

					Object ^ missing = System::Reflection::Missing::Value;

					Microsoft::Office::Interop::Word::Document ^ doc;
					doc = wordApp->Documents->Add(missing, missing, missing, missing);

					XmlDocument ^ xmlDoc = gcnew XmlDocument();
					xmlDoc->LoadXml(newXml);
					// Luu y
					cli::array<String ^> ^ result = ma->Split('~');
					int i = 0;

					XmlNode ^ root = xmlDoc->DocumentElement;

					XmlNodeList ^ nodes = xmlDoc->SelectNodes("//*[not(*)]");

					for each (XmlNode ^ val in nodes)
					{
						if (String::IsNullOrWhiteSpace(val->InnerText))
						{
							// Nút có giá trị rỗng
						}
						else if (val->InnerText == L"0")
						{
							// Nút có giá trị
							val->InnerText = result[i];
							if (i < result->Length - 1)
								i++;
						}
					}

					XmlDocument ^ ownerDoc = xmlDoc->OwnerDocument;
					String ^ xmlString = xmlDoc->InnerXml;
					doc->Content->InsertXML(xmlString, missing);
					doc->Content->Copy();
					this->richTextBox2->Text = L"";
					this->richTextBox2->Paste();

					Object ^ False = false;
					Microsoft::Office::Interop::Word::_Document ^ docObj = doc;
					docObj->Close(False, missing, False);
					// Đóng ứng dụng Microsoft Word
					wordApp->Quit(missing, missing, missing);
				}
				else
				{
					this->richTextBox2->Text = ma;
				}
			}
		}

		// Lưu văn bản sau khi được giải mã
	private:
		System::Void btnSaveGiaiMa_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			SaveFileDialog ^ saveFileDialog = gcnew SaveFileDialog;
			saveFileDialog->ShowDialog();
			String ^ filename = saveFileDialog->FileName;
			if (saveFileDialog->FileName != "")
			{
				if (CheckFileExtension(saveFileDialog->FileName, "txt"))
				{
					System::IO::StreamWriter ^ file = gcnew System::IO::StreamWriter(filename);
					file->WriteLine(this->showGiaiMa->Text);
					file->Close();
					return;
				}
				if (CheckFileExtension(saveFileDialog->FileName, "docx"))
				{
					Microsoft::Office::Interop::Word::ApplicationClass ^ wordApp = gcnew Microsoft::Office::Interop::Word::ApplicationClass();

					wordApp->Visible = false;
					System::Object ^ filename = saveFileDialog->FileName;

					Object ^ missing = System::Reflection::Missing::Value;

					Microsoft::Office::Interop::Word::Document ^ doc;
					doc = wordApp->Documents->Add(missing, missing, missing, missing);

					if (newXml != L"")
					{
						XmlDocument ^ xmlDoc = gcnew XmlDocument();
						xmlDoc->LoadXml(newXml);

						cli::array<String ^> ^ result = this->showGiaiMa->Text->Split('\n');
						int i = 0;

						XmlNode ^ root = xmlDoc->DocumentElement;
						XmlNodeList ^ nodes = xmlDoc->SelectNodes("//*[not(*)]");

						for each (XmlNode ^ val in nodes)
						{
							if (String::IsNullOrWhiteSpace(val->InnerText))
							{
								// Nút có giá trị rỗng
							}
							else if (val->InnerText == L"0")
							{
								// Nút có giá trị
								val->InnerText = result[i];
								i++;
							}
						}
						XmlDocument ^ ownerDoc = xmlDoc->OwnerDocument;
						String ^ xmlString = xmlDoc->InnerXml;
						doc->Content->InsertXML(xmlString, missing);
					}
					else
					{
						// Ghi nội dung của file docx
						doc->Content->Text = this->showGiaiMa->Text;
					}
					Object ^ fileFormat = Microsoft::Office::Interop::Word::WdSaveFormat::wdFormatXMLDocument;
					doc->SaveAs(filename, fileFormat, missing, missing, missing, missing, missing, missing,
								missing, missing, missing, missing, missing, missing, missing, missing);

					Object ^ Router = false;
					Microsoft::Office::Interop::Word::_Document ^ docObj = doc;
					docObj->Close(missing, missing, Router);

					// Đóng ứng dụng Microsoft Word
					wordApp->Quit(missing, missing, missing);
					return;
				}
			}
		}

	private:
		System::Void btnSaveBanMa_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			SaveFileDialog ^ saveFileDialog = gcnew SaveFileDialog;
			saveFileDialog->ShowDialog();
			String ^ filename = saveFileDialog->FileName;
			saveFileDialog->Filter = "Word Document|*.docx|Text File|*.txt";
			saveFileDialog->FilterIndex = 2;
			if (saveFileDialog->FileName != "")
			{
				int idex = saveFileDialog->FileName->LastIndexOf('.');
				String ^ sKey = saveFileDialog->FileName->Substring(0, idex);
				sKey += L"keyAes.txt";
				if (wordin != "")
				{
					int id2 = saveFileDialog->FileName->LastIndexOf('.');
					String ^ mota = saveFileDialog->FileName->Substring(0, id2) + L"Xml.txt";
					System::IO::StreamWriter ^ fileMota = gcnew System::IO::StreamWriter(mota);
					fileMota->WriteLine(newXml);
					fileMota->Close();
				}
				System::IO::StreamWriter ^ file = gcnew System::IO::StreamWriter(filename);
				System::IO::StreamWriter ^ fileKey = gcnew System::IO::StreamWriter(sKey);
				file->WriteLine(this->showBanMa->Text);
				file->Close();
				fileKey->WriteLine(this->showKhoaMa->Text);
				fileKey->Close();
			}
		}
#pragma endregion
	private:
		System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void btnFileKey_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
			openFileDialog1->InitialDirectory = "d:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 2;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String ^ content;
				if (CheckFileExtension(openFileDialog1->FileName, "txt"))
				{
					// Đọc nội dung của file được chọn
					System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
					content = sr->ReadLine();
					sr->Close();
					// Hiện nội dung từ file ra màn hình textbox
					this->textKhoaMa1->Text = content;
				}
				else if (CheckFileExtension(openFileDialog1->FileName, "docx"))
				{
				}
				else
				{
					MessageBox::Show("Log error");
				}
			}
		}

	private:
		System::Void btn_randElliptic_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			int a, b;
			Rand_pab(a, b);
			this->text_a->Text = a.ToString();
			this->text_b->Text = b.ToString();
			double x, y;
			x = rand_x(26, 32, a, b);
			y = e_y(26, 32, x);
			this->text_p->Text = x.ToString();
			this->text_p->Text += L";" + y.ToString();
		}

	private:
		System::Void btn_randM_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			srand(time(NULL));
			String ^ str_p = this->text_p->Text;
			if (str_p == L"")
				return;
			int m = rand() % 24 + 2;
			this->text_m->Text = m.ToString();
			double x = Double::Parse(str_p->Split(';')[0]);
			double y = Double::Parse(str_p->Split(';')[1]);
			point d;
			d.x = x;
			d.y = y;
			int a = INT::Parse(this->text_a->Text);
			point pd = mul(d, m);
			this->text_qa1->Text = pd.x.ToString() + L";" + pd.y.ToString();
		}

	private:
		System::Void btn_randN_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			srand(time(NULL));
			String ^ str_p = this->text_p->Text;
			if (str_p == L"")
				return;
			int n = rand() % 24 + 2;
			this->text_n->Text = n.ToString();
			double x = Double::Parse(str_p->Split(';')[0]);
			double y = Double::Parse(str_p->Split(';')[1]);
			point d;
			d.x = x;
			d.y = y;
			point pd = mul(d, n);
			this->text_qb2->Text = pd.x.ToString() + L";" + pd.y.ToString();
		}

	private:
		System::Void btn_LayKhoa1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			point p;
			String ^ str_p = this->text_qb1->Text;
			if (str_p == L"")
				return;
			p.x = Double::Parse(str_p->Split(';')[0]);
			p.y = Double::Parse(str_p->Split(';')[1]);
			point pd = mul(p, INT::Parse(this->text_m->Text));
			this->text_khoaA->Text = pd.x.ToString() + L";" + pd.y.ToString();
			unsigned char temp[256];
			to_char(pd.x, pd.y, temp);
			this->text_khoaA->Text = sha_256(temp);
		}

	private:
		System::Void btn_LayKhoa2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			point p;
			String ^ str_p = this->text_qa2->Text;
			if (str_p == L"")
				return;
			p.x = Double::Parse(str_p->Split(';')[0]);
			p.y = Double::Parse(str_p->Split(';')[1]);
			point pd = mul(p, INT::Parse(this->text_n->Text));
			this->text_khoaB->Text = pd.x.ToString() + L";" + pd.y.ToString();
			unsigned char temp[256];
			to_char(pd.x, pd.y, temp);
			this->text_khoaB->Text = sha_256(temp);
		}

		// xóa nội dung trên màn hình
	private:
		System::Void btnClearAll_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->textBanRo1->Text = L"";
			this->textBanMa1->Text = L"";
			this->showBanMa->Text = L"";
			this->showGiaiMa->Text = L"";
			this->textKhoaRo1->Text = L"";
			this->textKhoaMa1->Text = L"";
			this->showKhoaMa->Text = L"";
			this->showGiaMaKhoa->Text = L"";
			this->richTextBox1->Text = L"";
			this->richTextBox2->Text = L"";
			newXml = L"";
			wordin = L"";
		}

	private:
		System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->text_a->Text = L"";
			this->text_b->Text = L"";
			this->text_p->Text = L"";
			this->text_m->Text = L"";
			this->text_n->Text = L"";
			this->text_qa1->Text = L"";
			this->text_qa2->Text = L"";
			this->text_qb1->Text = L"";
			this->text_qb2->Text = L"";
			this->text_khoaA->Text = L"";
			this->text_khoaB->Text = L"";
		}
	};
}