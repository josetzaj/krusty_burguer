#pragma once

namespace krustyburguer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de metodoTarjeta
	/// </summary>
	public ref class metodoTarjeta : public System::Windows::Forms::Form
	{
	public:
		metodoTarjeta(void)
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
		~metodoTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel5;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->numericUpDown3);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->dateTimePicker1);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->numericUpDown2);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->numericUpDown1);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(72, 45);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(518, 355);
			this->panel5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"GENERAR FACTURA";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 260);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 20);
			this->textBox1->TabIndex = 7;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(130, 222);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Nit";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(171, 86);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(245, 20);
			this->numericUpDown1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"No. Tarjeta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DATOS FACTURA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DATOS PAGO CON TARJETA";
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(590, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(72, 355);
			this->panel4->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(72, 355);
			this->panel3->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 400);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(662, 45);
			this->panel2->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(662, 45);
			this->panel1->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Fecha de Vencimiento";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(171, 119);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(98, 20);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"CV";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(171, 153);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(94, 20);
			this->numericUpDown3->TabIndex = 12;
			// 
			// metodoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 445);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"metodoTarjeta";
			this->Text = L"metodoTarjeta";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
