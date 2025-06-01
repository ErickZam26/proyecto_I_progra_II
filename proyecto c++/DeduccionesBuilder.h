#pragma once
#include "Deduccion.h"
class DeduccionesBuilder
{
public:

	virtual ~DeduccionesBuilder() = default;
	virtual void reset() = 0;
	virtual  void agregarRenta()  = 0;
	virtual  void agregarCCSS()  = 0;
	virtual  void agregarMaternidad() = 0;
	virtual  void agregarEmbargo(double monto) = 0;
	virtual   void agregarDeduccionFija(double monto) = 0;
	virtual void agregarDeduccionPorcentual(double porcentaje) = 0;
	virtual Deduccion** obtenerResultado() = 0;
	virtual int obtenerCantidad() = 0;
};

