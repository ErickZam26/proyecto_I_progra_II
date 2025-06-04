#pragma once
#include "Modelo.h"
#include "MenuColaboradores.h"
#include "MenuPrincipal.h"
#include "MenuArchivos.h"
#include "MenuPlanilla.h"


class Control {
private:
	Modelo* datos;
	MenuColaboradores* menuColaboradores;
	MenuPrincipal* menuPrincipal;
	MenuPlanilla* menuPlanilla;       
	MenuArchivos* menuArchivos;        
public:
	Control();
	virtual void agregar(Colaborador*);
	virtual void eliminar(Colaborador*);
	virtual void actualizar(Colaborador*);
	/*virtual void rentar(string, string);
	virtual void regresar(string, string);*/
	virtual Colaborador* buscarColaborador(string);
	//


	virtual void mostrarMenuPrincipal();
	virtual void mostrarMenuColaborador();
	virtual void mostrarMenuArchivos();
	virtual void mostrarMenuPlanilla();


};

