#pragma once
#include "ConjuntoColaboradores.h"

class Modelo {
private:
	ConjuntoColaboradores* colaboradores;
	static Modelo* _instancia;
	Modelo();
public:
	static Modelo* getInstancia();
	virtual void agregar(Colaborador*);
	virtual Colaborador* buscarColaborador(string);

	virtual void eliminar(Colaborador*);
	virtual void actualizar(Colaborador*);

};
