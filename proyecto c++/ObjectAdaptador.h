#pragma once
#include "Iobjeto.h"

/*
	El patr�n adaptador
	consiste en implementar 
	una interface, a sus comportamientos
	gen�ricos.
*/
class ObjectAdaptador : public Iobjeto {
public:
	virtual string toString() const override;
	virtual bool equals(Iobjeto*) override;
	virtual string getType() const override;

};


