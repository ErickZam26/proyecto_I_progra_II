#include "DeduccionConcretaBuilder.h"
#include "DeduccionEmbargos.h"
#include "DeduccionFija.h"
#include "DeduccionMaternidad.h"
#include "DeduccionPorcentual.h"
#include "DeduccionRenta.h"
#include "CCSS_SEM.h"
#include "CCSS_LPT.h"
#include "CCSS_IVM.h"

void DeduccionConcretaBuilder::expandirCapacidad()
{
	int nuevaCapacidad = capacidad * 2;
	Deduccion** nuevoArray = new Deduccion * [nuevaCapacidad];
	for (int i = 0; i < indice; ++i) {
		nuevoArray[i] = deducciones[i];
	}
	delete[] deducciones;
	deducciones = nuevoArray;
	capacidad = nuevaCapacidad;

}

DeduccionConcretaBuilder::DeduccionConcretaBuilder(Deduccion** d, int i, int c): deducciones(d), indice(i), capacidad(c)
{
	deducciones = new Deduccion * [capacidad];
}

DeduccionConcretaBuilder::~DeduccionConcretaBuilder()
{
	for (int i = 0; i < indice;++i) {
		delete deducciones[i];
	}
	delete deducciones;
}

void DeduccionConcretaBuilder::reset()
{
	for (int i = 0; i < indice; ++i) {
		delete deducciones[i];
	}
	indice = 0;
}

void DeduccionConcretaBuilder::agregarRenta()
{
	if (indice >= capacidad) {
		expandirCapacidad();
		deducciones[indice++] = new DeduccionRenta();
}
}

void DeduccionConcretaBuilder::agregarCCSS()
{
	if (indice >= capacidad) {
		expandirCapacidad();
		deducciones[indice++] = new CCSS_SEM();
	}
	if (indice >= capacidad) {
		expandirCapacidad();
		deducciones[indice++] = new CCSS_IVM();
	}
	if (indice >= capacidad) {
		expandirCapacidad();
		deducciones[indice++] = new CCSS_LPT();
	}
}

void DeduccionConcretaBuilder::agregarMaternidad()
{
	if (indice >= capacidad)
		expandirCapacidad();
		deducciones[indice++] = new DeduccionMaternidad(0.05);
}


void DeduccionConcretaBuilder::agregarEmbargo(double monto)
{
	if (indice >= capacidad)
		expandirCapacidad();
		deducciones[indice++] = new DeduccionEmbargos(monto);
}

void DeduccionConcretaBuilder::agregarDeduccionFija(double monto)
{
	if (indice >= capacidad)
		expandirCapacidad();
		deducciones[indice++] = new DeduccionFija(monto);
}

void DeduccionConcretaBuilder::agregarDeduccionPorcentual(double porcentaje)
{
	if (indice >= capacidad)
		expandirCapacidad();
	deducciones[indice++] = new DeduccionPorcentual(porcentaje);
}

Deduccion** DeduccionConcretaBuilder::obtenerResultado()
{
	return deducciones;
}
int DeduccionConcretaBuilder::obtenerCantidad()
{
	return indice;
}