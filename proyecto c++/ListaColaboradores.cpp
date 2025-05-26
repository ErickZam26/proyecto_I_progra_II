#include "ListaColaboradores.h"

ListaColaboradores::ListaColaboradores(NodoColaborador* n)
{
	inicio = n;
}

ListaColaboradores::ListaColaboradores()
{
	inicio = NULL;
}

ListaColaboradores::~ListaColaboradores()
{
}

NodoColaborador* ListaColaboradores::getInicio()
{
	return inicio;
}

void ListaColaboradores::agregar(Colaborador* nuevo)
{
	NodoColaborador* n = new NodoColaborador(nuevo);
	if (inicio == NULL) {
		inicio=n;
	}
	else {
		NodoColaborador* aux = inicio;
		while (aux->getNodo () != NULL) {
			aux = aux->getNodo();
		}
		aux->setNodo(n);
	}
}

string ListaColaboradores::verLista()
{
	stringstream s;
	NodoColaborador* aux = inicio;
	while (aux!=NULL) {
		s << aux->getColaborador()->toString();
		aux = aux->getNodo();
	}
	return s.str();
}
