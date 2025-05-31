#pragma once
#include "Modelo.h"
#include "MenuColaboradores.h"
#include "MenuPrincipal.h"




class Control {
private:
	Modelo* datos;
	MenuColaboradores* menucolaboradores;
	MenuPrincipal* menuPrincipal;
public:
	Control();
	virtual void agregar(Colaborador*);
	/*virtual void rentar(string, string);
	virtual void regresar(string, string);*/
	virtual Colaborador* buscarPersona(string);
	//
	virtual void mostrarMenuPersona();
	virtual void mostrarMenuPrincipal();
	virtual void mostrarMenuRenta(Colaborador*);
};


