#include "NodoColaborador.h"

NodoColaborador::NodoColaborador(Colaborador* _colab) {
	colab = _colab;
	sig = NULL;
}

NodoColaborador::~NodoColaborador()
{
}

Colaborador* NodoColaborador::getColaborador()
{
	return colab;
}

void NodoColaborador::setColaborador(Colaborador* _colab)
{
	colab = _colab;
}

NodoColaborador* NodoColaborador::getNodo()
{
	return sig;
}

void NodoColaborador::setNodo(NodoColaborador* _sig)
{
	sig = _sig;
}
