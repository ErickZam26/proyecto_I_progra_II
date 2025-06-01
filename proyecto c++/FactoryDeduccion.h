#pragma once
#include "FactoryMetod.h"
class FactoryDeduccion : public FactoryMetod
{

public:
    virtual Deduccion* crearDeduccion(string& tipo)  const override;

};

