#pragma once

#include "DeduccionesBuilder.h"
class DeduccionDirector
{
public:
	void construirEmpleado(DeduccionesBuilder&  builder) {
	
		builder.reset();
		builder.agregarRenta();
		builder.agregarCCSS();     
		builder.agregarMaternidad();


	}
	void construirEmpleadoCCSS(DeduccionesBuilder& builder) {
		builder.reset();
		builder.agregarCCSS();


	}
	void construirEmpleadoMaternidad(DeduccionesBuilder& builder) {

		builder.reset();
		builder.agregarMaternidad();

	}

	void construirEmpleadoRenta(DeduccionesBuilder& builder) {
		builder.reset();
		builder.agregarRenta();



	}


	void construirEmpleadoEmbargos(DeduccionesBuilder& builder) {
		builder.reset();
		builder.agregarEmbargo(2000000);


	}
	void construirEmpleadoFija(DeduccionesBuilder& builder) {
		builder.reset();
		builder.agregarDeduccionFija(1000);


	}
	void construirEmpleadoPorcentual(DeduccionesBuilder& builder) {
		builder.reset();
		builder.agregarDeduccionPorcentual(0.08);



	}
};

