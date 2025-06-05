#pragma once
#include <iostream>
#include <sstream>
#include "Colaborador.h"
#include "ListaColaboradores.h"
#include "Archivos.h"
#include "adminArch.h"
#include "DeduccionDirector.h"
#include "Lista.h"
#include "OpcionMenu.h"


using namespace std;
class consola : public ObjectAdaptador
{
private:
	Lista* listaOpciones;
	string titulo;
	string instrucciones;
public:

	consola();
	virtual void setTitulo(string);
	virtual void setInstrucciones(string);
	virtual void agregarOpcion(OpcionMenu*);
	//void Consola::agreagarOpcion(string texto) {
	virtual void agregarOpcion(string texto);
	virtual void show();
	

	virtual void lanzar(int) = 0;

	static int leerEntero(string mensaje);
	static int leerEntero(string mensaje, int, int);
	static double leerDouble(string mensaje);
	static float leerFloat(string mensaje);
	static string leerString(string mensaje);
	static void imprimir(string mensaje, bool = true);
	static void enter();
	static void limpiar();

	/*virtual void lanzar(int) = 0;*/ //  noooooo

	//static void menuPrincipal();
	//static Colaborador* submenu1();
	//static void submenu2();
	//static void submenu3();
	//static void submenu4();
};

