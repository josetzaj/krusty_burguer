/*#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <string>
#include<string.h>
#include<string>

using namespace std;


struct nodo {
	int orden;
	int codCombo;
	char descripCombo;
	double precio;
	char bebida;
	char postre;
	nodo* siguiente;
};

void agregar(nodo** cab, nodo** fin, int orden, int codCombo, char descripCombo, double precio, char bebida, char postre) {
	//String^ hola = "123";
	//int ord = (int) hola;
	if ((*cab) == NULL) {
		*cab = new nodo;
		(*cab)->orden = orden;
		(*cab)->codCombo = codCombo;
		(*cab)->descripCombo = descripCombo;
		(*cab)->precio = precio;
		(*cab)->bebida = bebida;
		(*cab)->postre = postre;
		(*cab)->siguiente = NULL;
		(*fin) = (*cab);

	}else{
		(*fin)->siguiente = new nodo;
		(*fin)->siguiente->orden = orden;
		(*fin)->siguiente->codCombo = codCombo;
		(*fin)->siguiente->descripCombo = descripCombo;
		(*fin)->siguiente->precio = precio;
		(*fin)->siguiente->bebida = bebida;
		(*fin)->siguiente->postre = postre;
		(*fin) = (*fin)->siguiente;
		(*fin)->siguiente = NULL;
	}
}

/*void mostrar(nodo* cab) {
	nodo* temp;
	while (temp != NULL) {
		
		temp = temp->siguiente;
	}
}*/