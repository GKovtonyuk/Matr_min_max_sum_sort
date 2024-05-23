#pragma once
const int n = 3, m = 3;
int a[n][m], i, j;
int s = 0;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;

	private: System::Windows::Forms::Button^  button2;





	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ çàïîâíèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîğòóâàííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåòîäÁóëüáàøêèToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀâòîğàToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->çàïîâíèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîğòóâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåòîäÁóëüáàøêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀâòîğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(4, 5);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Çàïîâíèòè ìàñèâ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 44);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(541, 231);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(210, 5);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Î÷èñòèòè ìàñèâ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(680, 368);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(680, 426);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(680, 488);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 26);
			this->textBox3->TabIndex = 12;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(0, 31);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(147, 24);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"maxs_åëåìåíò";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(0, 88);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(135, 24);
			this->checkBox2->TabIndex = 14;
			this->checkBox2->Text = L"min_åëåìåíò";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(0, 149);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(77, 24);
			this->checkBox3->TabIndex = 15;
			this->checkBox3->Text = L"Suma";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(349, 348);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(289, 199);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->dataGridView2->Location = System::Drawing::Point(630, 44);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(541, 231);
			this->dataGridView2->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(841, 298);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Ñîğòóâàòè";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(108, 293);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(412, 46);
			this->tableLayoutPanel1->TabIndex = 20;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->çàïîâíèòèToolStripMenuItem,
					this->ñîğòóâàííÿToolStripMenuItem, this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1209, 33);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// çàïîâíèòèToolStripMenuItem
			// 
			this->çàïîâíèòèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem,
					this->î÷èñòèòèToolStripMenuItem
			});
			this->çàïîâíèòèToolStripMenuItem->Name = L"çàïîâíèòèToolStripMenuItem";
			this->çàïîâíèòèToolStripMenuItem->Size = System::Drawing::Size(115, 29);
			this->çàïîâíèòèToolStripMenuItem->Text = L"Çàïîâíèòè";
			// 
			// çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem
			// 
			this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem->Name = L"çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem";
			this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem->Size = System::Drawing::Size(392, 34);
			this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem->Text = L"Çàïîâíèòè âèïàäêîâèìè ÷èñëàìè";
			this->çàïîâíèòèÂèïàäêîâèìè×èñëàìèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(392, 34);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ñîğòóâàííÿToolStripMenuItem
			// 
			this->ñîğòóâàííÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåòîäÁóëüáàøêèToolStripMenuItem });
			this->ñîğòóâàííÿToolStripMenuItem->Name = L"ñîğòóâàííÿToolStripMenuItem";
			this->ñîğòóâàííÿToolStripMenuItem->Size = System::Drawing::Size(125, 29);
			this->ñîğòóâàííÿToolStripMenuItem->Text = L"Ñîğòóâàííÿ";
			// 
			// ìåòîäÁóëüáàøêèToolStripMenuItem
			// 
			this->ìåòîäÁóëüáàøêèToolStripMenuItem->Name = L"ìåòîäÁóëüáàøêèToolStripMenuItem";
			this->ìåòîäÁóëüáàøêèToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ìåòîäÁóëüáàøêèToolStripMenuItem->Text = L"Ìåòîä Áóëüáàøêè";
			this->ìåòîäÁóëüáàøêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïğîÀâòîğàToolStripMenuItem });
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(93, 29);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// ïğîÀâòîğàToolStripMenuItem
			// 
			this->ïğîÀâòîğàToolStripMenuItem->Name = L"ïğîÀâòîğàToolStripMenuItem";
			this->ïğîÀâòîğàToolStripMenuItem->Size = System::Drawing::Size(211, 34);
			this->ïğîÀâòîğàToolStripMenuItem->Text = L"Ïğî àâòîğà";
			this->ïğîÀâòîğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğîÀâòîğàToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñèí³éToolStripMenuItem,
					this->çåëåíèéToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(152, 68);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(151, 32);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(151, 32);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1209, 672);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
     {
					 				
		Random^ rnd = gcnew Random();
		for (int i=0; i<n; i++)//ğÿäîê
		for (int j=0; j<m; j++)//ñòîâïåöü
		{
	dataGridView1[j,i]->Value = Convert::ToString(rnd->Next(50));
	 	}
		
		
     }
 
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			 dataGridView1->Rows->Add(3);
			 dataGridView2->Rows->Add(3);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 const int n=3, m=3; 
 int a[n][m],i,j; 
			 for (int i=0; i<n; i++)
		     for (int j=0; j<m; j++) 
			 dataGridView1[j,i]->Value=" ";
		
			 for (int i = 0; i < n; i++)
				 for (int j = 0; j < m; j++)
					 dataGridView2[j, i]->Value = " ";
		 }
			 
		
 

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
		for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
		{ a[i][j]=Convert::ToInt32(dataGridView1[j,i]->Value);}
		int maxs=a[0][0];
		for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
if (checkBox1->Checked==true)
{
		{
			if (a[i][j]>maxs)
		    {
			
           maxs=a[i][j];
	       
			}
		}
}
		 
textBox1->Text = maxs.ToString();
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 
for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
		{ a[i][j]=Convert::ToInt32(dataGridView1[j,i]->Value);}
		int min=a[0][0];
		for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
if (checkBox2->Checked==true)
{
		{
			if (a[i][j]<min)
		    {
			
           min=a[i][j];
	       	}
		}
}
		 
textBox2->Text =min.ToString();
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			

		for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
		{ a[i][j]=Convert::ToInt32(dataGridView1[j,i]->Value);
			if (i+j<m-1)
		    {
			s=s+a[i][j];
          
			}
		}
			
		textBox3->Text =s.ToString();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	
for (int i=0; i<n; i++)
for (int j=0; j<m; j++)
{ a[i][j]=Convert::ToInt32(dataGridView1[j,i]->Value);
}
for (int j=0; j<n; j++)
 	if (j % 2==0) //íåïàğíèé íîìåğ j%2==1, àëå íîìåğàö³ÿ ïî÷èíàºòüñÿ ç íóëÿ, òîìó ïåğøèé ñòîâïåöü ìàº íîìåğ j=0
	{
        for (int i=m-1; i>=0; i--) // ñîğòóâàííÿ
                    	for ( int k=0;k<i; k++) 
                       		if (a[k][j]>a[k+1][j])      // íåïàğíèõ
                      		{                     // ñòîâïö³â
                       		           int dop=a[k+1][j];
                        		 a[k+1][j]=a[k][j];    // çà çğîñòàííÿì
                        		 a[k][j]=dop;
							}
	                       }
               else
			   {
                    	for (int i=m-1; i>=0; i--) // ñîğòóâàííÿ
                     	for ( int k=0;k<i; k++) 
                       		if (a[k][j]<a[k+1][j] )            // ïàğíèõ
                       {                               // ñòîâïö³â
                         	int dop=a[k][j];
                       		 a[k][j]=a[k+1][j];              // çà ñïàäàííÿì
                        	 a[k+1][j]=dop;
							}
	          }
for (int i=0; i<n; i++)
for (int j=0; j<m; j++)
{
     dataGridView2[j,i]->Value = Convert::ToString(a[i][j]);
	
}
		 }

		 

		 

private: System::Void ïğîÀâòîğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Àâòîğ:\n Åêëåêòğîííà àäğåñà:");
}
private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::GreenYellow;
}

};
}
