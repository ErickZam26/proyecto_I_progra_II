#include "Modelo.h"

Modelo* Modelo::_instancia = NULL;

Modelo::Modelo() {
	colaboradores = new ConjuntoColaboradores();
}

Modelo* Modelo::getInstancia() {
	if (_instancia == NULL) {
		_instancia = new Modelo();
	}
	return _instancia;
}

void Modelo::agregar(Colaborador* c) {
	colaboradores->agregar(c);
}

//Colaborador* Modelo::buscarColaborador(string cedula) {
//	return colaboradores->buscar(cedula);
//}
