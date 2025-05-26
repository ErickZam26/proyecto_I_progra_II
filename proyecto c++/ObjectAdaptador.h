#pragma once
#include "Iobjeto.h"

/*
	El patrón adaptador
	consiste en implementar 
	una interface, a sus comportamientos
	genéricos.
*/
class ObjectAdaptador : Iobjeto {
public:
	virtual string toString() const override;
};


