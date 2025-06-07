#include "CCSS_Deduccion.h"

CCSS_Deduccion::CCSS_Deduccion(Colaborador* c) : Deduccion(c)
{
    SEM = 0.0500;
    IVM = 0.0417;
    IPT = 0.0100;
}

double CCSS_Deduccion::calcular() const
{
    if (!colab) return 0.0;

    double totalDeducciones = SEM + IVM + IPT;
    return colab->getSalarioBase() * totalDeducciones;
}

string CCSS_Deduccion::obtenerNombre() const
{
    return string("Deduccion por Cargas Sociales (CCSS) ");
}

double CCSS_Deduccion::getSEM()
{
    return SEM;
}

double CCSS_Deduccion::getIVM()
{
    return IVM;
}

double CCSS_Deduccion::getLPT()
{
    return IPT;
}
