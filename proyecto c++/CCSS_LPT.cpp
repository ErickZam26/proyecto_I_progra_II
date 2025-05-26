#include "CCSS_LPT.h"

double CCSS_LPT::calcular(double salarioBruto, double) const
{
    return salarioBruto * 0.01;
}

string CCSS_LPT::obtenerNombre() const
{
    return string("Deduccion de Banco Popular ");
}
