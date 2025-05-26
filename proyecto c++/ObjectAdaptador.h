#pragma once
#include "Iobjeto.h"

/*
	El patrón adaptador
	consiste en implementar 
	una interface, a sus comportamientos
	genéricos.
*/
class ObjectAdaptador : public Iobjeto {
public:
	virtual string toString() const override;
	virtual bool equals(Iobjeto*) override;
	virtual string getType() const override;

};


