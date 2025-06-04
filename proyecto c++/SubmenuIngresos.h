#pragma once
#include "consola.h"
#include "Control.h"
class SubmenuIngresos : public consola
{
private:
	Control* gestor;
public:
	SubmenuIngresos(Control* _gestor);
	void lanzar(int posicion) override;
};

