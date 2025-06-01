#pragma once
#include <functional>
#include "ObjectAdaptador.h"
#include "Lista.h"
class OpcionMenu : public ObjectAdaptador
{
private:
	string titulo;
public:
	OpcionMenu(string);
	virtual string toString() const override;
};

