#pragma once
#include "combo1.h"
#include "combo2.h"
#include "menu.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;

	//public:
		//Conexion();

protected:
	void Conectar()
	{
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS"; //"Servidor al que nos conectaremos"
		st->InitialCatalog = "krustyBurgerDB"; //
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));
	}

public:
	void insertarOrden(int codOrden, String^ nombre, DateTime fecha) {
		Conectar();
		String^ sentencia = "INSERT INTO ORDEN VALUES (@codOrden, @nombre, @fecha)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		ejecutar->Parameters->AddWithValue("@codOrden", codOrden);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@nombre", nombre);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@fecha", fecha);//recibo el valor de los parametros

		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();

		//cerrar conexion
		cn->Close();
	}

	void insertarFactura(int codOrden, String^ direccion, String^ nit, float total) {
		Conectar();
		String^ sentencia = "INSERT INTO FACTURA VALUES (@codOrden, @direccion, @nit, @total)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		ejecutar->Parameters->AddWithValue("@codOrden", codOrden);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@direccion", direccion);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@nit", nit);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@total", total);

		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();

		//cerrar conexion
		cn->Close();
	}

	void insertarDetalleOrden(int codOrden, int codCombo, String^ bebida, String^ postre) {
		Conectar();
		String^ sentencia = "INSERT INTO DETALLE_ORDEN VALUES (@codOrden, @codCombo, @bebida, @postre)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@codOrden", codOrden);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@codCombo", codCombo);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@bebida", bebida);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@postre", postre);
		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();

		//cerrar conexion
		cn->Close();
	}

	
	/*void consultarCombo(int codComboQery) {
		String^ codCombo;
		String^ descrip;
		String^ precio;



		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "MÍNCHEZ-JOSHUA\\SQLEXPRESS";
		st->InitialCatalog = "krustyBurger";//su base de datos se llama Biosisemas
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Bio = gcnew ListView();
		String^ sentencia = "SELECT * FROM COMBO WHERE codCombo = " + codComboQery;
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();

		while (reader->Read())
		{
			//krustyburguer::combo1^ formCombo1 = gcnew krustyburguer::combo1();
			//krustyburguer::menu^ formMenu= gcnew krustyburguer::menu();
			if (codComboQery == 1) {
				//krustyburguer::combo1^ formCombo1 = gcnew krustyburguer::combo1();
				codCombo = (reader["codCombo"]->ToString());
				formCombo->txtCodCombo->Text = codCombo;
				descrip = (reader["descripcion"]->ToString());
				formCombo->lblDescripcion->Text = descrip;
				precio = (reader["precio"]->ToString());
				formCombo->txtPrecio->Text = precio;
				//krustyburguer::menu^ forMenu = gcnew krustyburguer::menu();

				if (formMenu->panel_contenedor->Controls->Count > 0)
					formMenu->panel_contenedor->Controls->RemoveAt(0);

				formCombo->TopLevel = false;
				formCombo->Dock = DockStyle::Fill;
				formMenu->panel_contenedor->Controls->Add(formCombo);
				formMenu->panel_contenedor->Tag = formCombo;
				//formHijo->Show();
				formCombo->Show();
			}
			
		}

		cn->Close();

	}*/
	
};