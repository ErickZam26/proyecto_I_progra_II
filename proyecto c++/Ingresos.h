#pragma once
#include <iostream>
#include <string>
using namespace std;
class Colaborador;
class Ingresos
{
protected:
    Colaborador* colab;
public:
    Ingresos(Colaborador* c);
    virtual double calcularSalario() const = 0;
    virtual string obtenerNombre() const = 0;
    virtual ~Ingresos() = default;
};