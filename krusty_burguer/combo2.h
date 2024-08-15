#pragma once

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
	/// Resumen de combo2
	/// </summary>
	public ref class combo2 : public System::Windows::Forms::Form
	{
	public:
		combo2(void)
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
		~combo2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txtCodCombo;
	protected:
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txtOrden;
	private:
	public:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Panel^ panel1;
	private:
	public: System::Windows::Forms::TextBox^ txtPrecio;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::ComboBox^ cbBebida;
	private:

	public:


	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ lblDescripcion;
	private: System::Windows::Forms::Button^ button7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(combo2::typeid));
			this->txtCodCombo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtOrden = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbBebida = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblDescripcion = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtCodCombo
			// 
			this->txtCodCombo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCodCombo->Location = System::Drawing::Point(222, 60);
			this->txtCodCombo->Name = L"txtCodCombo";
			this->txtCodCombo->ReadOnly = true;
			this->txtCodCombo->Size = System::Drawing::Size(100, 21);
			this->txtCodCombo->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(112, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"CÓDIGO COMBO";
			// 
			// txtOrden
			// 
			this->txtOrden->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOrden->Location = System::Drawing::Point(313, 17);
			this->txtOrden->Name = L"txtOrden";
			this->txtOrden->ReadOnly = true;
			this->txtOrden->Size = System::Drawing::Size(100, 21);
			this->txtOrden->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(227, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"No. ORDEN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(112, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DESCRIPCION";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->txtCodCombo);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtPrecio);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->txtOrden);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->cbBebida);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->lblDescripcion);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(644, 386);
			this->panel1->TabIndex = 1;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrecio->Location = System::Drawing::Point(178, 161);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->ReadOnly = true;
			this->txtPrecio->Size = System::Drawing::Size(100, 21);
			this->txtPrecio->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(112, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"PRECIO";
			// 
			// cbBebida
			// 
			this->cbBebida->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbBebida->FormattingEnabled = true;
			this->cbBebida->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"COCA-COLA", L"7UP", L"MIRINDA", L"GRAPETE", L"MOUNTAIN DEW",
					L"AGUA PURA"
			});
			this->cbBebida->Location = System::Drawing::Point(292, 216);
			this->cbBebida->Name = L"cbBebida";
			this->cbBebida->Size = System::Drawing::Size(121, 24);
			this->cbBebida->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(81, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"SELECCIONA TIPO DE BEBIDA";
			// 
			// lblDescripcion
			// 
			this->lblDescripcion->AutoSize = true;
			this->lblDescripcion->BackColor = System::Drawing::Color::Transparent;
			this->lblDescripcion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescripcion->ForeColor = System::Drawing::Color::White;
			this->lblDescripcion->Location = System::Drawing::Point(132, 128);
			this->lblDescripcion->Name = L"lblDescripcion";
			this->lblDescripcion->Size = System::Drawing::Size(0, 17);
			this->lblDescripcion->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkOrange;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(439, 342);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(193, 32);
			this->button7->TabIndex = 19;
			this->button7->Text = L"AGREGAR A LA ORDEN";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &combo2::button7_Click);
			// 
			// combo2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 386);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"combo2";
			this->Text = L"combo2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;

		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS"; //"Servidor al que nos conectaremos"
		st->InitialCatalog = "krustyBurgerDB"; //
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));

		if (cbBebida->Text == "") {
			MessageBox::Show("Debes de seleccionar el sabor de tu bebida","ERROR",MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			String^ sentencia = "INSERT INTO DETALLE_ORDEN VALUES (@codOrden, @codCombo, @bebida, @postre)"; //@ se utiliza para uso de parametros
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

			//recibo el valor de los parametros
			ejecutar->Parameters->AddWithValue("@codOrden", Convert::ToInt32(txtOrden->Text));//recibo el valor de los parametros
			ejecutar->Parameters->AddWithValue("@codCombo", Convert::ToInt32(txtCodCombo->Text));//recibo el valor de los parametros
			ejecutar->Parameters->AddWithValue("@bebida", cbBebida->Text);//recibo el valor de los parametros
			ejecutar->Parameters->AddWithValue("@postre", "S/D");
			//abrir conexion
			cn->Open();
			ejecutar->ExecuteNonQuery();
			MessageBox::Show("LA ORDEN SE GUARDO CON EXITO","INFORMACION", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//cerrar conexion
		}
		cn->Close();
	}
};
}
