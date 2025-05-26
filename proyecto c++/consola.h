#pragma once
#include <iostream>
#include <sstream>
#include "Colaborador.h"
#include "ListaColaboradores.h"
#include "Archivos.h"
#include "adminArch.h"
#include "DeduccionDirector.h"
#include "DeduccionConcretaBuilder.h"


using namespace std;
class consola
{
public:
	static void menuPrincipal();
	static Colaborador* submenu1();
	static void submenu2();
	static void submenu3();
	static void submenu4();
};

