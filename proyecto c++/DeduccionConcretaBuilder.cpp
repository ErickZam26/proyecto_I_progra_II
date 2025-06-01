#include "DeduccionConcretaBuilder.h"
#include "DeduccionEmbargos.h"
#include "DeduccionFija.h"
#include "DeduccionMaternidad.h"
#include "DeduccionPorcentual.h"
#include "DeduccionRenta.h"
#include "CCSS_Deduccion.h"

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

DeduccionConcretaBuilder::DeduccionConcretaBuilder(): capacidad(10), indice(0), resultadoEntregado(false)
{
	deducciones = new Deduccion * [capacidad];
}

DeduccionConcretaBuilder::~DeduccionConcretaBuilder()
{
	if (!resultadoEntregado) {// dado el caso que no se entrego libera la memoria
		for (int i = 0; i < indice;++i) 
			delete deducciones[i];
		delete[] deducciones;
	}
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
		deducciones[indice++] = new CCSS_Deduccion();
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
	resultadoEntregado = true;
	return indice;
}