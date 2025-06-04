#pragma once
#include "Iobjeto.h"


class ObjectAdaptador : public Iobjeto {
public:
	virtual string toString() const override;
	virtual bool equals(Iobjeto*) override;
	virtual string getType() const override;

};


