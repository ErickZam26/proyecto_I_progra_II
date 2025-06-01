#pragma once  
#include "Deduccion.h"  
class CCSS_Deduccion : public Deduccion  
{  
public:  
  CCSS_Deduccion(); 
  virtual double calcular() const override;  
  virtual string obtenerNombre() const override;  
};
