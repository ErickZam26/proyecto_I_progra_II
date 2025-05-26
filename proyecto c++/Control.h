#pragma once
#include "Modelo.h"
#include "MenuColaboradores.h"
#include "MenuPrincipal.h"


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
	virtual void agregar(Colaborador*);
	/*virtual void rentar(string, string);
	virtual void regresar(string, string);*/
	virtual Colaborador* buscarPersona(string);
	//
	virtual void mostrarMenuPersona();
	virtual void mostrarMenuPrincipal();
	virtual void mostrarMenuRenta(Colaborador*);
};


