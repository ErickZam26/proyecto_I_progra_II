#pragma once
#include "Modelo.h"
#include "MenuPersonas.h"
#include "MenuPrincipal.h"
#include "MenuRentar.h"

class MenuPersonas;
class MenuPrincipal;
class MenuRentar;

class Control {
private:
	Modelo* datos;
	MenuPersonas* menuPersonas;
	MenuPrincipal* menuPrincipal;
public:
	Control();
	virtual void agregar(Persona*);
	virtual void rentar(string, string);
	virtual void regresar(string, string);
	virtual Persona* buscarPersona(string);
	//
	virtual void mostrarMenuPersona();
	virtual void mostrarMenuPrincipal();
	virtual void mostrarMenuRenta(Persona*);
};


