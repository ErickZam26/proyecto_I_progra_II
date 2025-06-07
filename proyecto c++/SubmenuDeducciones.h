#pragma once
#include "consola.h"
#include "Control.h"
class SubmenuDeducciones : public Consola
{
private:
	Control* gestor;
public:
	SubmenuDeducciones(Control* _gestor);
	void lanzar(int posicion) override;
};

