#pragma once

#include "DeduccionesBuilder.h"
class DeduccionDirector
{
public:
	void construirEmpleado(DeduccionesBuilder& builder);
	void construirEmpleadoCCSS(DeduccionesBuilder& builder);
	void construirEmpleadoMaternidad(DeduccionesBuilder& builder);
	void construirEmpleadoRenta(DeduccionesBuilder& builder);
	void construirEmpleadoEmbargos(DeduccionesBuilder& builder);
	void construirEmpleadoFija(DeduccionesBuilder& builder);
	void construirEmpleadoPorcentual(DeduccionesBuilder& builder);
	void construirEmpleadoBonificaciones(DeduccionesBuilder& builder);
	void construirEmpleadoHorasDobles(DeduccionesBuilder& builder);
	void construirEmpleadoHorasExtra(DeduccionesBuilder& builder);
	void construirEmpleadoHorasFeriado(DeduccionesBuilder& builder);
	void construirEmpleadoHorasOrdinarias(DeduccionesBuilder& builder);


	
};

