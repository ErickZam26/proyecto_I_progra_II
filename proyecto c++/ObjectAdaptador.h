#pragma once
#include "Iobjeto.h"

/*
	El patr�n adaptador
	consiste en implementar 
	una interface, a sus comportamientos
	gen�ricos.
*/
class ObjectAdaptador : Iobjeto {
public:
	virtual string toString() const override;
};


