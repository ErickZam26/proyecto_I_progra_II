#pragma once
#include "Consola.h"
#include "Control.h"

class MenuColaboradores : public consola {
	private:
		Control* gestor;
	public:
		MenuColaboradores(Control*);
		virtual void lanzar(int ) override;
	
	};




