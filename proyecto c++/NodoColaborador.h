#pragma once
#include "Colaborador.h"
class NodoColaborador
{
private:
	Colaborador* colab;
	NodoColaborador* sig;

public:

	NodoColaborador(Colaborador* _colab);
	~NodoColaborador();
	Colaborador* getColaborador();
	void setColaborador(Colaborador* _colab);
	NodoColaborador* getNodo();
	void setNodo(NodoColaborador* _sig);

};
