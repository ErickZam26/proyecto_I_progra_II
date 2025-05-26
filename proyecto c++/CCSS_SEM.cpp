#include "CCSS_SEM.h"
double CCSS_SEM::calcular(double salarioBruto, double) const

{

    return salarioBruto * 0.055;
}

string CCSS_SEM::obtenerNombre() const
{
    return string("Deduccion Seguro de Enfermedad y Maternidad");
}


