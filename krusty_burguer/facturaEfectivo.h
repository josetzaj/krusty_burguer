#pragma once

namespace krustyburguer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de facturaEfectivo
	/// </summary>
	public ref class facturaEfectivo : public System::Windows::Forms::Form
	{
	public:
		facturaEfectivo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~facturaEfectivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	public: System::Windows::Forms::ListView^ listView1;
	private:

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::Panel^ panel7;
	public: System::Windows::Forms::Label^ lblNoFactura;
	private:
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ lblDireFactura;
	public: System::Windows::Forms::Label^ lblFechaFactura;
	public: System::Windows::Forms::Label^ lblNomFactura;
	public: System::Windows::Forms::Label^ lblnitFactura;
	public: System::Windows::Forms::Label^ lblTotalFactura;
	public: System::Windows::Forms::Label^ lblCambio;
	public: System::Windows::Forms::Label^ lblEfectivoCliente;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;











	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(facturaEfectivo::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblNoFactura = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblDireFactura = (gcnew System::Windows::Forms::Label());
			this->lblFechaFactura = (gcnew System::Windows::Forms::Label());
			this->lblNomFactura = (gcnew System::Windows::Forms::Label());
			this->lblnitFactura = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lblCambio = (gcnew System::Windows::Forms::Label());
			this->lblEfectivoCliente = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblTotalFactura = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(152, 445);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"FINALIZAR COMPRA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &facturaEfectivo::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(860, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(28, 445);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Tomato;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(152, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(708, 23);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Tomato;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(152, 422);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(708, 23);
			this->panel4->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Controls->Add(this->lblNoFactura);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->lblDireFactura);
			this->panel5->Controls->Add(this->lblFechaFactura);
			this->panel5->Controls->Add(this->lblNomFactura);
			this->panel5->Controls->Add(this->lblnitFactura);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(152, 23);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(708, 111);
			this->panel5->TabIndex = 4;
			// 
			// lblNoFactura
			// 
			this->lblNoFactura->AutoSize = true;
			this->lblNoFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblNoFactura->Location = System::Drawing::Point(616, 19);
			this->lblNoFactura->Name = L"lblNoFactura";
			this->lblNoFactura->Size = System::Drawing::Size(0, 13);
			this->lblNoFactura->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(453, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"EFECTIVO";
			this->label1->Click += gcnew System::EventHandler(this, &facturaEfectivo::label1_Click);
			// 
			// lblDireFactura
			// 
			this->lblDireFactura->AutoSize = true;
			this->lblDireFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblDireFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDireFactura->Location = System::Drawing::Point(388, 42);
			this->lblDireFactura->Name = L"lblDireFactura";
			this->lblDireFactura->Size = System::Drawing::Size(0, 16);
			this->lblDireFactura->TabIndex = 3;
			// 
			// lblFechaFactura
			// 
			this->lblFechaFactura->AutoSize = true;
			this->lblFechaFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaFactura->Location = System::Drawing::Point(121, 80);
			this->lblFechaFactura->Name = L"lblFechaFactura";
			this->lblFechaFactura->Size = System::Drawing::Size(0, 16);
			this->lblFechaFactura->TabIndex = 2;
			// 
			// lblNomFactura
			// 
			this->lblNomFactura->AutoSize = true;
			this->lblNomFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblNomFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomFactura->Location = System::Drawing::Point(136, 62);
			this->lblNomFactura->Name = L"lblNomFactura";
			this->lblNomFactura->Size = System::Drawing::Size(0, 16);
			this->lblNomFactura->TabIndex = 1;
			// 
			// lblnitFactura
			// 
			this->lblnitFactura->AutoSize = true;
			this->lblnitFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblnitFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnitFactura->Location = System::Drawing::Point(103, 44);
			this->lblnitFactura->Name = L"lblnitFactura";
			this->lblnitFactura->Size = System::Drawing::Size(0, 16);
			this->lblnitFactura->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Tomato;
			this->panel6->Controls->Add(this->listView1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(152, 134);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(708, 211);
			this->panel6->TabIndex = 5;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(18, 16);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(672, 178);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No. Orden";
			this->columnHeader1->Width = 80;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Código Combo";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 103;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Descripción";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 400;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Precio";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 80;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Controls->Add(this->lblCambio);
			this->panel7->Controls->Add(this->lblEfectivoCliente);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->lblTotalFactura);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(152, 345);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(708, 77);
			this->panel7->TabIndex = 6;
			// 
			// lblCambio
			// 
			this->lblCambio->AutoSize = true;
			this->lblCambio->BackColor = System::Drawing::Color::Transparent;
			this->lblCambio->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCambio->Location = System::Drawing::Point(113, 37);
			this->lblCambio->Name = L"lblCambio";
			this->lblCambio->Size = System::Drawing::Size(0, 16);
			this->lblCambio->TabIndex = 4;
			// 
			// lblEfectivoCliente
			// 
			this->lblEfectivoCliente->AutoSize = true;
			this->lblEfectivoCliente->BackColor = System::Drawing::Color::Transparent;
			this->lblEfectivoCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEfectivoCliente->Location = System::Drawing::Point(148, 13);
			this->lblEfectivoCliente->Name = L"lblEfectivoCliente";
			this->lblEfectivoCliente->Size = System::Drawing::Size(0, 16);
			this->lblEfectivoCliente->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cambio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Efectivo Cliente";
			// 
			// lblTotalFactura
			// 
			this->lblTotalFactura->AutoSize = true;
			this->lblTotalFactura->BackColor = System::Drawing::Color::Transparent;
			this->lblTotalFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalFactura->Location = System::Drawing::Point(511, 23);
			this->lblTotalFactura->Name = L"lblTotalFactura";
			this->lblTotalFactura->Size = System::Drawing::Size(0, 20);
			this->lblTotalFactura->TabIndex = 0;
			// 
			// facturaEfectivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 445);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"facturaEfectivo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"facturaEfectivo";
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
