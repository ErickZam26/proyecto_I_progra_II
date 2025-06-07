#pragma once
#include "Archivos.h"
class adminArch{
public:
	void cargar(Archivos* Arch, ConjuntoColaboradores* lista);
	void guardar(Archivos* Arch, ConjuntoColaboradores* lista);
};

