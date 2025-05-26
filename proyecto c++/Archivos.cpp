#include "Archivos.h"

void Archivos::abrir(int modo) {
	
	switch (modo) {
	case 1:
		R.open("Colaboradores.txt");
		break;
	case 2:
		W.open("Colaboradores.txt");
		break;
	}
}
void Archivos::cerrar(int modo) {
	switch (modo) {
	case 1:
		R.close();
		break;
	case 2:
		W.close();
		break;
	}
}

Colaborador* Archivos::leer()
{
	string n, Id, p;
	int salario;
	if (!R.is_open()) {
		abrir(1);
	}
	R >> n >> Id>> p>>salario;

	return new Colaborador(n, Id, p, salario);
}

void Archivos::escribir(Colaborador* c)
{
	if (!W.is_open()) {
		abrir(2);
	}
	W <<
		c->getNombre() << " "
		<< c->getCedula() << " "
		<< c->getPuesto() << " "
		<< c->getSalarioBase() << endl;

}

bool Archivos::finArch()
{
	return R.eof();
}

