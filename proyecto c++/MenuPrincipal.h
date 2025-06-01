#pragma once
#include "consola.h"
#include "Control.h"
class Control;
class MenuPrincipal : public consola
{
private:
	Control* gestor;
public:
	MenuPrincipal(Control* _gestor);
	virtual void lanzar(int) override;
};

