#include "Colaborador.h"

Colaborador::Colaborador(string _nombre, string _cedula, string _puesto, float _salarioBase) : nombre(_nombre), cedula(_cedula), puesto(_puesto), salarioBase(_salarioBase)
{
   
}

Colaborador::~Colaborador()
{}

string Colaborador::getNombre()
{
    return nombre;
}

string Colaborador::getCedula()
{
    return cedula;
}

string Colaborador::getPuesto()
{
    return puesto;
}

float Colaborador::getSalarioBase()
{
    return salarioBase;
}

void Colaborador::setNombre(string _nombre)
{
    nombre = _nombre;
}

void Colaborador::setCedula(string _cedula)
{
    cedula = _cedula;
}

void Colaborador::setPuesto(string _puesto)
{
    puesto = _puesto;
}

void Colaborador::setSalarioBase(float _salarioBase)
{
    salarioBase = _salarioBase;
}

string Colaborador::toString()
{
    stringstream s;
    s << "\n\n";
    s << "Nombre: " << getNombre() << "\n"
        << "ced: " << getCedula() << "\n"
        << "Puesto: " << getPuesto() << "\n"
        << "Salario Base: " << getSalarioBase() << "\n";
  
    return s.str();
}
