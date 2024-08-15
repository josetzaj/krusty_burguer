#pragma once
#include "menu.h"
#include <cstdlib>
#include <chrono>
#include <iomanip>
//#include "login.h"

namespace krustyburguer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de orden
	/// </summary>
	public ref class orden : public System::Windows::Forms::Form
	{
	public:
		orden(void)
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
		~orden()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIngresar;
	protected:


	private: System::Windows::Forms::TextBox^ txtNombreCliente;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(orden::typeid));
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->txtNombreCliente = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::Color::DarkOrange;
			this->btnIngresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIngresar->FlatAppearance->BorderSize = 0;
			this->btnIngresar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnIngresar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnIngresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->Location = System::Drawing::Point(163, 142);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(129, 29);
			this->btnIngresar->TabIndex = 0;
			this->btnIngresar->Text = L"INGRESAR";
			this->btnIngresar->UseVisualStyleBackColor = false;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &orden::btnIngresar_Click);
			// 
			// txtNombreCliente
			// 
			this->txtNombreCliente->Location = System::Drawing::Point(110, 101);
			this->txtNombreCliente->Name = L"txtNombreCliente";
			this->txtNombreCliente->Size = System::Drawing::Size(224, 20);
			this->txtNombreCliente->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(82, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(280, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->ImageLocation = L"C:\\krusty_burguer\\img\\cerrar.png";
			this->pictureBox2->Location = System::Drawing::Point(408, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &orden::pictureBox2_Click);
			// 
			// orden
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(442, 219);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtNombreCliente);
			this->Controls->Add(this->btnIngresar);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"orden";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"orden";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtNombreCliente->Text == "") {
			MessageBox::Show("El campo Nombre de Cliente no puede estar vacío","ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		}
		else {
			int aleatorio = 0; // numero de orden 
			String^ codOrden;
			do {
				aleatorio++;
				SqlConnection^ cn;
				SqlConnectionStringBuilder^ st;
				st = gcnew SqlConnectionStringBuilder();
				st->DataSource = "localhost\\SQLEXPRESS";
				st->InitialCatalog = "krustyBurgerDB";
				st->IntegratedSecurity = true;
				cn = gcnew SqlConnection(Convert::ToString(st));
				//ListView^ Bio = gcnew ListView();
				String^ sentencia = "SELECT * FROM ORDEN WHERE codOrden = " + aleatorio;
				SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
				cn->Open();
				SqlDataReader^ reader = ejecutar->ExecuteReader();

				while (reader->Read())
				{
					codOrden = (reader["codOrden"]->ToString());
				}
				cn->Close();
			} while (codOrden == aleatorio.ToString());

			//MessageBox::Show(codOrden);
			//MessageBox::Show(aleatorio.ToString());

			krustyburguer::menu^ formMenu = gcnew krustyburguer::menu();
			//krustyburguer::login^ formLogin = gcnew krustyburguer::login();
			formMenu->lblNoOrden->Text = aleatorio.ToString();
			formMenu->lblNorden->Text = aleatorio.ToString();
			formMenu->lblCliente->Text = txtNombreCliente->Text;
			formMenu->lblFecha->Text = DateTime().Now.ToShortDateString();
			Conexion ingresoOrden;
			ingresoOrden.insertarOrden(aleatorio, txtNombreCliente->Text, Convert::ToDateTime(DateTime().Now.ToShortDateString()));
			formMenu->Show();
			this->Close();
		}
	}

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
