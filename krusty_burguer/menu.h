#pragma once

#include <iostream>
#include <string>

#include "combo1.h"
#include "combo2.h"
#include "combo3.h"
#include "combo4.h"
#include "combo5.h"
#include "Conexion.h"
#include "listadoOrden.h"
#include "metodoEfectivo.h"

namespace krustyburguer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Panel^ panel_contenedor;
	private:


	private:

	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ lblCliente;
	private:


	private:


	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ lblNoOrden;
	private: System::Windows::Forms::Button^ button4;
	public:
	private: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Label^ lblFecha;


	private: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Label^ lblNorden;

	public:



	private: System::Windows::Forms::Label^ label5;


	private:

	public:
	private:

	private:








	protected:










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->lblNoOrden = (gcnew System::Windows::Forms::Label());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblNorden = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel_contenedor->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoScrollMargin = System::Drawing::Size(20, 20);
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->lblFecha);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->lblNoOrden);
			this->panel1->Controls->Add(this->lblCliente);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(325, 475);
			this->panel1->TabIndex = 0;
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(101, 85);
			this->lblFecha->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(0, 16);
			this->lblFecha->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(59, 1058);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 185);
			this->button4->TabIndex = 13;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &menu::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(59, 841);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 185);
			this->button5->TabIndex = 12;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &menu::button5_Click);
			// 
			// lblNoOrden
			// 
			this->lblNoOrden->AutoSize = true;
			this->lblNoOrden->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoOrden->Location = System::Drawing::Point(101, 25);
			this->lblNoOrden->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNoOrden->Name = L"lblNoOrden";
			this->lblNoOrden->Size = System::Drawing::Size(173, 19);
			this->lblNoOrden->TabIndex = 11;
			this->lblNoOrden->Text = L"                                         ";
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCliente->Location = System::Drawing::Point(100, 54);
			this->lblCliente->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Size = System::Drawing::Size(173, 19);
			this->lblCliente->TabIndex = 10;
			this->lblCliente->Text = L"                                         ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 85);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 85);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"FECHA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"CLIENTE";
			this->label2->Click += gcnew System::EventHandler(this, &menu::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"#ORDEN";
			this->label1->Click += gcnew System::EventHandler(this, &menu::label1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(59, 612);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 185);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &menu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(59, 394);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 185);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(59, 177);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 185);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menu::button1_Click);
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_contenedor.BackgroundImage")));
			this->panel_contenedor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_contenedor->Controls->Add(this->label5);
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(325, 0);
			this->panel_contenedor->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(859, 475);
			this->panel_contenedor->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel2->Controls->Add(this->lblNorden);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 475);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1184, 73);
			this->panel2->TabIndex = 2;
			// 
			// lblNorden
			// 
			this->lblNorden->AutoSize = true;
			this->lblNorden->Location = System::Drawing::Point(972, 30);
			this->lblNorden->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNorden->Name = L"lblNorden";
			this->lblNorden->Size = System::Drawing::Size(0, 16);
			this->lblNorden->TabIndex = 13;
			this->lblNorden->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkOrange;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(480, 17);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(207, 39);
			this->button6->TabIndex = 11;
			this->button6->Text = L"PAGAR ORDEN";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menu::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrange;
			this->label5->Location = System::Drawing::Point(85, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(677, 370);
			this->label5->TabIndex = 3;
			this->label5->Text = L"SELECCIONE EL COMBO\r\n   DE SU PREFERENCIA\r\n\r\n\r\n                 <<<<<<<<";
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1184, 548);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"menu";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel_contenedor->ResumeLayout(false);
			this->panel_contenedor->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		/*template <class T>
		void abrirPanel(T formHijo) {
			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);

			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formHijo);
			this->panel_contenedor->Tag = formHijo;
			formHijo->Show();

		}*/

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codCombo;
		String^ descrip;
		String^ precio;
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "krustyBurgerDB";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		//ListView^ Bio = gcnew ListView();
		String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = 1";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		krustyburguer::combo1^ formCombo1 = gcnew krustyburguer::combo1();
		formCombo1->txtOrden->Text = lblNoOrden->Text;

		while (reader->Read())
		{
			codCombo = (reader["codCombo"]->ToString());
			formCombo1->txtCodCombo->Text = codCombo;
			descrip = (reader["descripcion"]->ToString());
			formCombo1->lblDescripcion->Text = descrip;
			precio = (reader["precio"]->ToString());
			formCombo1->txtPrecio->Text = precio;
			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);

			formCombo1->TopLevel = false;
			formCombo1->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formCombo1);
			this->panel_contenedor->Tag = formCombo1;
			formCombo1->Show();
		}

		cn->Close();		
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codCombo;
	String^ descrip;
	String^ precio;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "krustyBurgerDB";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = 2";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	krustyburguer::combo2^ formCombo2 = gcnew krustyburguer::combo2();
	formCombo2->txtOrden->Text = lblNoOrden->Text;

	while (reader->Read())
	{
		codCombo = (reader["codCombo"]->ToString());
		formCombo2->txtCodCombo->Text = codCombo;
		descrip = (reader["descripcion"]->ToString());
		formCombo2->lblDescripcion->Text = descrip;
		precio = (reader["precio"]->ToString());
		formCombo2->txtPrecio->Text = precio;
		if (this->panel_contenedor->Controls->Count > 0)
			this->panel_contenedor->Controls->RemoveAt(0);

		formCombo2->TopLevel = false;
		formCombo2->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(formCombo2);
		this->panel_contenedor->Tag = formCombo2;
		formCombo2->Show();
	}

	cn->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codCombo;
	String^ descrip;
	String^ precio;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "krustyBurgerDB";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = 3";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	krustyburguer::combo3^ formCombo3 = gcnew krustyburguer::combo3();
	formCombo3->txtOrden->Text = lblNoOrden->Text;

	while (reader->Read())
	{
		codCombo = (reader["codCombo"]->ToString());
		formCombo3->txtCodCombo->Text = codCombo;
		descrip = (reader["descripcion"]->ToString());
		formCombo3->lblDescripcion->Text = descrip;
		precio = (reader["precio"]->ToString());
		formCombo3->txtPrecio->Text = precio;
		if (this->panel_contenedor->Controls->Count > 0)
			this->panel_contenedor->Controls->RemoveAt(0);

		formCombo3->TopLevel = false;
		formCombo3->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(formCombo3);
		this->panel_contenedor->Tag = formCombo3;
		formCombo3->Show();
	}

	cn->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ codCombo;
	String^ descrip;
	String^ precio;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "krustyBurgerDB";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = 4";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	
	krustyburguer::combo4^ formCombo4 = gcnew krustyburguer::combo4();
	formCombo4->txtOrden->Text = lblNoOrden->Text;

	while (reader->Read())
	{
		codCombo = (reader["codCombo"]->ToString());
		formCombo4->txtCodCombo->Text = codCombo;
		descrip = (reader["descripcion"]->ToString());
		formCombo4->lblDescripcion->Text = descrip;
		precio = (reader["precio"]->ToString());
		formCombo4->txtPrecio->Text = precio;
		if (this->panel_contenedor->Controls->Count > 0)
			this->panel_contenedor->Controls->RemoveAt(0);

		formCombo4->TopLevel = false;
		formCombo4->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(formCombo4);
		this->panel_contenedor->Tag = formCombo4;
		formCombo4->Show();
	}

	cn->Close();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codCombo;
	String^ descrip;
	String^ precio;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "krustyBurgerDB";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = 5";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();

	krustyburguer::combo5^ formCombo5 = gcnew krustyburguer::combo5();
	formCombo5->txtOrden->Text = lblNoOrden->Text;

	while (reader->Read())
	{
		codCombo = (reader["codCombo"]->ToString());
		formCombo5->txtCodCombo->Text = codCombo;
		descrip = (reader["descripcion"]->ToString());
		formCombo5->lblDescripcion->Text = descrip;
		precio = (reader["precio"]->ToString());
		formCombo5->txtPrecio->Text = precio;
		if (this->panel_contenedor->Controls->Count > 0)
			this->panel_contenedor->Controls->RemoveAt(0);

		formCombo5->TopLevel = false;
		formCombo5->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(formCombo5);
		this->panel_contenedor->Tag = formCombo5;
		formCombo5->Show();
	}

	cn->Close();
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

}

	   float totalFactura(int numCombo) {
		   float precioCombo = 0;
		   SqlConnection^ cn;
		   SqlConnectionStringBuilder^ st;
		   st = gcnew SqlConnectionStringBuilder();
		   st->DataSource = "localhost\\SQLEXPRESS";
		   st->InitialCatalog = "krustyBurgerDB";//su base de datos se llama Biosisemas
		   st->IntegratedSecurity = true;
		   cn = gcnew SqlConnection(Convert::ToString(st));
		   ListView^ Bio = gcnew ListView();
		   String^ sentencia = "SELECT precio FROM COMBO WHERE codCombo = " + numCombo;
		   SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		   cn->Open();
		   SqlDataReader^ reader = ejecutar->ExecuteReader();
		   while (reader->Read())
		   {
			   precioCombo = (Convert::ToDouble(reader["precio"]));
		   }

		   cn->Close();
		   return precioCombo;
	   }

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codComboVerif;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "krustyBurgerDB";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT codCombo FROM DETALLE_ORDEN WHERE codOrden = " + lblNoOrden->Text;
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();

	while (reader->Read())
	{
		codComboVerif = (reader["codCombo"]->ToString());
	}

	cn->Close();
	if (Convert::ToInt32(codComboVerif) == NULL) {
	MessageBox::Show("Aun no ha seleccionado ningún combo.Por favor, seleccionelo.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		krustyburguer::metodoEfectivo^ formMetEfect = gcnew krustyburguer::metodoEfectivo();
		formMetEfect->lblNordenEfectivo->Text = this->lblNoOrden->Text;
		formMetEfect->lblNomCliente->Text = this->lblCliente->Text;
		formMetEfect->lblFechaFactura->Text = this->lblFecha->Text;

		String^ idFactura;
		int noFactura = 0;

		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "krustyBurgerDB";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Bio = gcnew ListView();
		String^ sentencia = "SELECT * FROM FACTURA";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();

		while (reader->Read())
		{
			idFactura = (reader["idFactura"]->ToString());
		}
		noFactura = Convert::ToInt32(idFactura) + 1;
		cn->Close();


		float sumaTotalFactura = 0;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "krustyBurgerDB";//su base de datos se llama Biosisemas
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		//ListView^ Bio = gcnew ListView();
		sentencia = "SELECT codCombo FROM DETALLE_ORDEN WHERE codOrden = " + this->lblNoOrden->Text;
		ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			//MessageBox::Show("Codigo Combo = " + reader["codCombo"]);
			//codCombo = (reader["codCombo"]->ToString());
			sumaTotalFactura = totalFactura(Convert::ToInt32(reader["codCombo"])) + sumaTotalFactura;
			//MessageBox::Show("Precio Combo: " + sumaTotalFactura);

		}

		formMetEfect->lblTotalFactura->Text = Convert::ToString(sumaTotalFactura);
		cn->Close();

		formMetEfect->lblNoFactura->Text = Convert::ToString(noFactura);
		formMetEfect->Show();
		this -> Close();
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
