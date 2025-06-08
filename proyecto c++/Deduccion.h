#pragma once
#include <iostream>
#include <string>
using namespace std;
class Colaborador;
class Deduccion
{
protected:
	Colaborador* colab;
public:
	/*Deduccion() : colab(nullptr) {};*/
	Deduccion(Colaborador* c);
	virtual  double calcular() const = 0;
	virtual string obtenerNombre() const = 0;
	virtual ~Deduccion() = default;

};

