#pragma once
//#include "Conexion.h"
#include "facturaEfectivo.h"

namespace krustyburguer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace Data::SqlClient;


	/// <summary>
	/// Resumen de metodoEfectivo
	/// </summary>
	public ref class metodoEfectivo : public System::Windows::Forms::Form
	{
	public:
		metodoEfectivo(void)
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
		~metodoEfectivo()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtDireccion;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numEfectivo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ lblNordenEfectivo;
	public: System::Windows::Forms::Label^ lblTotalFactura;

	public:
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ lblNoFactura;
	private:

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNitFactura;

	public: System::Windows::Forms::Label^ lblFechaFactura;
	private:
	public: System::Windows::Forms::Label^ lblFe;
	public: System::Windows::Forms::Label^ lblNomCliente;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(metodoEfectivo::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblFechaFactura = (gcnew System::Windows::Forms::Label());
			this->lblFe = (gcnew System::Windows::Forms::Label());
			this->lblNomCliente = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNitFactura = (gcnew System::Windows::Forms::TextBox());
			this->lblTotalFactura = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblNoFactura = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblNordenEfectivo = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numEfectivo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEfectivo))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(883, 60);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->ForeColor = System::Drawing::Color::Transparent;
			this->panel2->Location = System::Drawing::Point(0, 491);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(883, 57);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 60);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(88, 431);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(795, 60);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(88, 431);
			this->panel4->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->lblFechaFactura);
			this->panel5->Controls->Add(this->lblFe);
			this->panel5->Controls->Add(this->lblNomCliente);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->txtNitFactura);
			this->panel5->Controls->Add(this->lblTotalFactura);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->lblNoFactura);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->lblNordenEfectivo);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->txtDireccion);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->numEfectivo);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(88, 60);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(707, 431);
			this->panel5->TabIndex = 4;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &metodoEfectivo::panel5_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(111, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(493, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// lblFechaFactura
			// 
			this->lblFechaFactura->AutoSize = true;
			this->lblFechaFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaFactura->ForeColor = System::Drawing::Color::Black;
			this->lblFechaFactura->Location = System::Drawing::Point(562, 342);
			this->lblFechaFactura->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFechaFactura->Name = L"lblFechaFactura";
			this->lblFechaFactura->Size = System::Drawing::Size(0, 19);
			this->lblFechaFactura->TabIndex = 18;
			// 
			// lblFe
			// 
			this->lblFe->AutoSize = true;
			this->lblFe->BackColor = System::Drawing::Color::Transparent;
			this->lblFe->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFe->ForeColor = System::Drawing::Color::White;
			this->lblFe->Location = System::Drawing::Point(414, 338);
			this->lblFe->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFe->Name = L"lblFe";
			this->lblFe->Size = System::Drawing::Size(136, 25);
			this->lblFe->TabIndex = 17;
			this->lblFe->Text = L"Fecha Factura:";
			// 
			// lblNomCliente
			// 
			this->lblNomCliente->AutoSize = true;
			this->lblNomCliente->ForeColor = System::Drawing::Color::Black;
			this->lblNomCliente->Location = System::Drawing::Point(218, 338);
			this->lblNomCliente->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomCliente->Name = L"lblNomCliente";
			this->lblNomCliente->Size = System::Drawing::Size(0, 25);
			this->lblNomCliente->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(61, 338);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Nombre Cliente:";
			// 
			// txtNitFactura
			// 
			this->txtNitFactura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNitFactura->ForeColor = System::Drawing::Color::Black;
			this->txtNitFactura->Location = System::Drawing::Point(172, 247);
			this->txtNitFactura->Margin = System::Windows::Forms::Padding(4);
			this->txtNitFactura->Name = L"txtNitFactura";
			this->txtNitFactura->Size = System::Drawing::Size(132, 27);
			this->txtNitFactura->TabIndex = 14;
			// 
			// lblTotalFactura
			// 
			this->lblTotalFactura->AutoSize = true;
			this->lblTotalFactura->ForeColor = System::Drawing::Color::Black;
			this->lblTotalFactura->Location = System::Drawing::Point(552, 215);
			this->lblTotalFactura->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotalFactura->Name = L"lblTotalFactura";
			this->lblTotalFactura->Size = System::Drawing::Size(0, 25);
			this->lblTotalFactura->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(414, 214);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Total Factura:";
			// 
			// lblNoFactura
			// 
			this->lblNoFactura->AutoSize = true;
			this->lblNoFactura->ForeColor = System::Drawing::Color::Black;
			this->lblNoFactura->Location = System::Drawing::Point(182, 213);
			this->lblNoFactura->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNoFactura->Name = L"lblNoFactura";
			this->lblNoFactura->Size = System::Drawing::Size(0, 25);
			this->lblNoFactura->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(61, 214);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"No. Factura";
			// 
			// lblNordenEfectivo
			// 
			this->lblNordenEfectivo->AutoSize = true;
			this->lblNordenEfectivo->Location = System::Drawing::Point(493, 32);
			this->lblNordenEfectivo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNordenEfectivo->Name = L"lblNordenEfectivo";
			this->lblNordenEfectivo->Size = System::Drawing::Size(0, 25);
			this->lblNordenEfectivo->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(232, 387);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"GENERAR FACTURA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &metodoEfectivo::button1_Click);
			// 
			// txtDireccion
			// 
			this->txtDireccion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDireccion->ForeColor = System::Drawing::Color::Black;
			this->txtDireccion->Location = System::Drawing::Point(172, 295);
			this->txtDireccion->Margin = System::Windows::Forms::Padding(4);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(401, 27);
			this->txtDireccion->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(61, 295);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(61, 251);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Nit";
			// 
			// numEfectivo
			// 
			this->numEfectivo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numEfectivo->Location = System::Drawing::Point(160, 116);
			this->numEfectivo->Margin = System::Windows::Forms::Padding(4);
			this->numEfectivo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numEfectivo->Name = L"numEfectivo";
			this->numEfectivo->Size = System::Drawing::Size(160, 27);
			this->numEfectivo->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(60, 119);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Efectivo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(60, 187);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DATOS FACTURA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(61, 77);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DATOS PAGO EN EFECTIVO";
			// 
			// metodoEfectivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 548);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"metodoEfectivo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"metodoEfectivo";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEfectivo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numEfectivo->Text == "" || Convert::ToDouble(numEfectivo->Text) < Convert::ToDouble(lblTotalFactura->Text)) {
			MessageBox::Show("Debes de llenar el campo EFECTIVO y el número debe ser mayor o igual al total de la factura","ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//Conexion insertFactura;
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost\\SQLEXPRESS"; //"Servidor al que nos conectaremos"
			st->InitialCatalog = "krustyBurgerDB"; //
			st->IntegratedSecurity = true;

			cn = gcnew SqlConnection(Convert::ToString(st));

			if (txtNitFactura->Text == "" || txtDireccion->Text == "") {
				MessageBox::Show("Debes llenar el NIT y DIRECCION","ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				String^ sentencia = "INSERT INTO FACTURA VALUES (@idFactura, @codOrden, @direccion, @nit, @total)"; //@ se utiliza para uso de parametros
				SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

				ejecutar->Parameters->AddWithValue("@idFactura", Convert::ToInt32(this->lblNoFactura->Text));
				ejecutar->Parameters->AddWithValue("@codOrden", Convert::ToInt32(this->lblNordenEfectivo->Text));//recibo el valor de los parametros
				ejecutar->Parameters->AddWithValue("@direccion", this->txtDireccion->Text);//recibo el valor de los parametros
				ejecutar->Parameters->AddWithValue("@nit", this->txtNitFactura->Text);//recibo el valor de los parametros
				ejecutar->Parameters->AddWithValue("@total", Convert::ToDouble(this->lblTotalFactura->Text));

				cn->Open();
				ejecutar->ExecuteNonQuery();
				MessageBox::Show("FACTURA GENERADA CON ÉXITO", "INFORMACION", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//cerrar conexion
				cn->Close();

				krustyburguer::facturaEfectivo^ formFactEfectivo = gcnew krustyburguer::facturaEfectivo();
				formFactEfectivo->lblNoFactura->Text = this->lblNoFactura->Text;
				formFactEfectivo->lblNomFactura->Text = this->lblNomCliente->Text;
				formFactEfectivo->lblnitFactura->Text = this->txtNitFactura->Text;
				formFactEfectivo->lblDireFactura->Text = this->txtDireccion->Text;
				formFactEfectivo->lblFechaFactura->Text = this->lblFechaFactura->Text;
				formFactEfectivo->lblTotalFactura->Text = this->lblTotalFactura->Text;

				//CON EL SELECT UNIMOS INFORMACION DE 2 DIFERENTES TABLAS CON INNER JOIN
				sentencia = "SELECT DETALLE_ORDEN.codOrden, DETALLE_ORDEN.codCombo, COMBO.descripcion, COMBO.precio FROM DETALLE_ORDEN INNER JOIN COMBO ON DETALLE_ORDEN.codCombo = COMBO.codCombo WHERE DETALLE_ORDEN.codOrden = " + this->lblNordenEfectivo->Text;
				ejecutar = gcnew SqlCommand(sentencia, cn);
				cn->Open();
				SqlDataReader^ reader = ejecutar->ExecuteReader();
				while (reader->Read())
				{
					String^ srtNew1 = gcnew String(reader["codOrden"]->ToString());
					String^ srtNew2 = gcnew String(reader["codCombo"]->ToString());
					String^ srtNew3 = gcnew String(reader["descripcion"]->ToString());
					String^ srtNew4 = gcnew String(reader["precio"]->ToString());
					ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
					listView1->SubItems->Add(srtNew2);
					listView1->SubItems->Add(srtNew3);
					listView1->SubItems->Add(srtNew4);
					formFactEfectivo->listView1->Items->Add(listView1);
				}


				String^ efectivo = this->numEfectivo->Text;
				float cambio = Convert::ToDouble(efectivo) - Convert::ToDouble(this->lblTotalFactura->Text);
				formFactEfectivo->lblCambio->Text = Convert::ToString(cambio);
				formFactEfectivo->lblEfectivoCliente->Text = this->numEfectivo->Text;

				cn->Close();
				formFactEfectivo->Show();
				this->Close();
			}
		}
	}

private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
