#pragma once

namespace AESproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCreatKeyEcc
	/// </summary>
	public ref class FormCreatKeyEcc : public System::Windows::Forms::Form
	{
	public:
		FormCreatKeyEcc(void)
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
		~FormCreatKeyEcc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
	private: System::Windows::Forms::Button^ btnClearAll;
	private: System::Windows::Forms::Label^ label1;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 126);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1065, 580);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel11->ColumnCount = 3;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel11->Controls->Add(this->btnClearAll, 2, 0);
			this->tableLayoutPanel11->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel11->Location = System::Drawing::Point(12, 81);
			this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(1065, 42);
			this->tableLayoutPanel11->TabIndex = 4;
			// 
			// btnClearAll
			// 
			this->btnClearAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.8F));
			this->btnClearAll->Location = System::Drawing::Point(829, 3);
			this->btnClearAll->Margin = System::Windows::Forms::Padding(80, 3, 80, 3);
			this->btnClearAll->MaximumSize = System::Drawing::Size(156, 64);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(156, 36);
			this->btnClearAll->TabIndex = 2;
			this->btnClearAll->Text = L"Clear All";
			this->btnClearAll->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(323, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tạo Khóa Ecc";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FormCreatKeyEcc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 718);
			this->Controls->Add(this->tableLayoutPanel11);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"FormCreatKeyEcc";
			this->Text = L"FormCreatKeyEcc";
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->ResumeLayout(false);

		}
	#pragma endregion
	};
}
