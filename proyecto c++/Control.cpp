#include "Control.h"

Control::Control() {
	datos = Modelo::getInstancia();
	menuColaboradores = new MenuColaboradores(this);
	menuPrincipal = new MenuPrincipal(this);
}

void Control::agregar(Colaborador* p) {
	datos->agregar(p);
}



//void Control::rentar(string cedula, string sku) {
//	datos->rentar(cedula, sku);
//}
//
//void Control::regresar(string cedula, string sku) {
//	datos->regresar(cedula, sku);
//}

//Colaborador* Control::buscarPersona(string cedula) {
//	return datos->buscarColaborador(cedula);
//}

void Control::mostrarMenuPersona() {
	MenuColaboradores->show();
}


void Control::mostrarMenuPrincipal() {
	menuPrincipal->show();
}
//
//void Control::mostrarMenuRenta(Persona* p) {
//	MenuRentar* menu = new MenuRentar(this, p);
//	menu->show();
//}
