#include "Builder.h"

Builder::Builder(Colaborador* colab) : colaborador(colab)
{
	deduccion = new FactoryDeduccion();
	ingresos = new FactoryIngresos();
}

Builder& Builder::agregarIngreso(int opcion, int tipo, int valor)
{
	ingresos->crearIngresos(opcion, colaborador, tipo, valor);
	return *this;
}

Builder& Builder::agregarDeduccion(int opcion, int tipo, int valor)
{
	deduccion->crearDeduccion(opcion, colaborador, tipo, valor);
    return *this;
}

void Builder::construir()
{
}
//#include "Builder.h"
//Builder(Colaborador* colab) : colaborador(colab) {}
//
//Builder& agregarIngreso(int opcion, int tipo, int valor) {
//    ingresos->crearIngresos(opcion, colaborador, tipo, valor);
//    return *this;
//}
//
//Builder& agregarDeduccion(int opcion, int tipo, int valor) {
//    deduccion->crearDeduccion(opcion, colaborador, tipo, valor);
//    return *this;
//}
//
//void construir() {
//}