#pragma once
#include <fstream>
#include <iostream>
#include "ListaColaboradores.h"

using namespace std;


class Archivos {
private:
	ofstream W;
	ifstream R;

public:
	void abrir(int modo);
	void cerrar(int modo);

	Colaborador* leer();
	void escribir(Colaborador* p);
	bool finArch();
};

