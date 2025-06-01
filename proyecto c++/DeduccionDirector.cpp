#include "DeduccionDirector.h"


void DeduccionDirector::construirEmpleado(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarRenta();
	builder.agregarCCSS();
	builder.agregarMaternidad();

}

void DeduccionDirector::construirEmpleadoCCSS(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarCCSS();
}

void DeduccionDirector::construirEmpleadoMaternidad(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarMaternidad();
}

void DeduccionDirector::construirEmpleadoRenta(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarRenta();
}

void DeduccionDirector::construirEmpleadoEmbargos(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarEmbargo(2000000);
}

void DeduccionDirector::construirEmpleadoFija(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarDeduccionFija(1000);
}

void DeduccionDirector::construirEmpleadoPorcentual(DeduccionesBuilder& builder)
{
	builder.reset();
	builder.agregarDeduccionPorcentual(0.08);

}
