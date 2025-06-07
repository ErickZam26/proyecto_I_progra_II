#pragma once
#include "consola.h"
#include "Control.h"
class Control;
class MenuPrincipal : public Consola
{
private:
	Control* gestor;
public:
	MenuPrincipal(Control* _gestor);
	virtual void lanzar(int) override;
};

