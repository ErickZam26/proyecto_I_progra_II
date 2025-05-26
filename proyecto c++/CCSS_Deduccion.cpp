#include "CCSS_Deduccion.h"



CCSS_Deduccion::CCSS_Deduccion()
{
}

double CCSS_Deduccion::calcular(double salarioBase) const
{
   double deduccionSEM = 0.50;
   double deduccionIVM = 0.0417;
   double deduccionBP = 0.01; 
   double totalDeducciones = deduccionSEM + deduccionIVM + deduccionBP;
    return salarioBase  * totalDeducciones;
}

string CCSS_Deduccion::obtenerNombre() const
{
    return string("Deduccion por Cargas Sociales (CCSS) ");
}
