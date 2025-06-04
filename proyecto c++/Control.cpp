#include "Control.h"

Control::Control() {
	datos = Modelo::getInstancia();
	menuColaboradores = new MenuColaboradores(this);
	menuPrincipal = new MenuPrincipal(this);
	menuArchivos = new MenuArchivos(this);
	menuPlanilla = new MenuPlanilla(this);
	submenuDeducciones = new SubmenuDeducciones(this);
	submenuIngresos = new SubmenuIngresos(this);

}

void Control::agregar(Colaborador* c) {
	datos->agregar(c);
}

void Control::eliminar(Colaborador* c)
{
	datos->eliminar(c);

}

void Control::actualizar(Colaborador* c)
{
	datos->actualizar(c);
}


Colaborador* Control::buscarColaborador(string cedula)
{
	return datos->buscarColaborador(cedula);
}

void Control::mostrarMenuColaborador() {
	menuColaboradores->show();
}


void Control::mostrarMenuPrincipal() {
	menuPrincipal->show();
}

void Control::mostrarMenuArchivos() {
	menuArchivos->show();
}

void Control::mostrarMenuPlanilla() {
	menuPlanilla->show();
}

void Control::mostrarSubmenuDeducciones() {
	submenuDeducciones->show();
}

void Control::mostrarSubmenuIngresos() {
	submenuIngresos->show();
}

