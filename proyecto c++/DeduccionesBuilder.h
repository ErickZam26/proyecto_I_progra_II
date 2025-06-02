#pragma once
#include "Deduccion.h"
#include "Ingresos.h"
class DeduccionesBuilder
{
public:
	//parte builder deducciomnes.
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



	//Parte builder ingresos
	virtual void agregarBonificaciones() = 0;
	
	virtual void agregarHorasDobles() = 0;
	virtual void agregarHorasExtras() = 0;
	virtual void agregarHorasFeriado() = 0;
	virtual void agregarHorasOrdinarias() = 0;
	virtual Ingresos** obtenerResultadoI() = 0;



};

