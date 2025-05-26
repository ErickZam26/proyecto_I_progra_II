#include "adminArch.h"

void adminArch::cargar(Archivos* arch, ListaColaboradores* lista)
{
		Colaborador* newC;
		arch->abrir(1);
		cout << "inicio";
		newC = arch->leer();
			while (!arch->finArch()) {
				lista->agregar(newC);
				newC = arch->leer();
			}
			cout << "inicio";
			arch->cerrar(1);
}

void adminArch::guardar(Archivos* arch, ListaColaboradores* lista)
{
	arch->abrir(2);
	NodoColaborador* aux;
	aux = lista->getInicio();
	while (aux !=NULL) {

	arch->escribir(aux->getColaborador());

		aux=aux->getNodo();
	}

	arch->cerrar(2);
}
