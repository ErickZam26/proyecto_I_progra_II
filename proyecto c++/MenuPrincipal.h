#pragma once
#include "consola.h"
#include "Control.h"
class MenuPrincipal : public consola
{
private:
	Control* gestor;
public:
	MenuPrincipal(Control*);
	virtual void lanzar(int) override;
};

