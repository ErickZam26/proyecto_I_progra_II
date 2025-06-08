#include "Colaborador.h"

Colaborador::Colaborador(string _nombre, string _cedula, string _puesto, double _salarioBase) : nombre(_nombre), cedula(_cedula), puesto(_puesto), salarioBase(_salarioBase)
,salarioNeto(0),capacidadDeducciones(10), numDeducciones(0),capacidadIngresos(10),numIngresos(0)
{
    deducciones = new Deduccion * [capacidadDeducciones];
    ingresos = new Ingresos * [capacidadIngresos];
}

Colaborador::~Colaborador()
{
    delete[] deducciones;
    delete[] ingresos;
}

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

double Colaborador::getSalarioBase()
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

void Colaborador::setSalarioBase(double _salarioBase)
{
    salarioBase = _salarioBase;
}

void Colaborador::agregarIngreso(Ingresos* ingreso)
{
    if (ingreso) {
        if (numIngresos == capacidadIngresos) {
            expandirIngresos();
        }
        ingresos[numIngresos++] = ingreso;
    }
   
}

void Colaborador::agregarDeduccion(Deduccion* deduccion)
{
    if (deduccion) {
        if (numDeducciones == capacidadDeducciones) {
            expandirDeducciones();
        }
        deducciones[numDeducciones++] = deduccion;
    }
}

void Colaborador::calcularSalarioNeto()
{
    double salarioBruto = salarioBase;
    for (int i= 0; i < numIngresos;i++) {
        salarioBruto += ingresos[i]->calcularSalario();
    }
    for (int i = 0; i < numDeducciones; i++) {
        salarioBruto -= deducciones[i]->calcular();
    }
    salarioNeto = salarioBruto;
}

double Colaborador::getSalarioNeto()
{
    return salarioNeto;
}

string Colaborador::toString()
{
    calcularSalarioNeto();

    stringstream s;
    s << getNombre() << " "
        <<getCedula() << " "
        << getPuesto() << " "
        << getSalarioBase() << endl;
    s << " Ingresos ";
    for (int i = 0; numIngresos;i++) {
        double valor = ingresos[i]->calcularSalario();
        s << "  " << ingresos[i]->obtenerNombre();

    }
    s << "Deducciones ";
    for (int i = 0; numDeducciones;i++) {
        double valor = deducciones[i]->calcular();
        s << "  " << deducciones[i]->obtenerNombre();
    }
    return s.str();
}


void Colaborador::expandirIngresos() {
    capacidadIngresos *= 2;
    Ingresos** nuevo = new Ingresos * [capacidadIngresos];
    for (int i = 0; i < numIngresos; i++) {
        nuevo[i] = ingresos[i];
    }
    delete[] ingresos;
    ingresos = nuevo;
}

void Colaborador::expandirDeducciones() {
    capacidadDeducciones *= 2;
    Deduccion** nuevo = new Deduccion * [capacidadDeducciones];
    for (int i = 0; i < numDeducciones; i++) {
        nuevo[i] = deducciones[i];
    }
    delete[] deducciones;
    deducciones = nuevo;
}