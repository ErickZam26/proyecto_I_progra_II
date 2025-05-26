#pragma once
#include "NodoColaborador.h"
#include <string>
#include <sstream>

using namespace std;

class ListaColaboradores
{
private:
	NodoColaborador* inicio;

public:
	ListaColaboradores(NodoColaborador* n);
	ListaColaboradores();
	~ListaColaboradores();
	NodoColaborador* getInicio();
	void agregar(Colaborador* nuevo);
	string verLista();
};

