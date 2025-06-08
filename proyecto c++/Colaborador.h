#pragma once
#include <iostream>
#include <exception>
#include <sstream>
#include<string>
#include "ObjectAdaptador.h"
#include "Ingresos.h"
#include "Deduccion.h"
using namespace std;

class Colaborador : public ObjectAdaptador
{
private:

	Ingresos** ingresos;
	Deduccion** deducciones;

	int numIngresos = 0;
	int numDeducciones = 0;
	string nombre;
	string cedula;
	string puesto;
	double salarioBase;
	int capacidadIngresos;
	int capacidadDeducciones;
	double salarioNeto;
	void expandirIngresos();
	void expandirDeducciones();
public:

	Colaborador(string nombre, string _cedula, string _puesto, double _salarioBase);
	virtual ~Colaborador();
	string getNombre();
	string getCedula();
	string getPuesto();
	double getSalarioBase();

	void setNombre(string _nombre);
	void setCedula(string _cedula);
	void setPuesto(string _puesto);
	void setSalarioBase(double _salarioBase);
	void agregarIngreso(Ingresos* ingreso);
	void agregarDeduccion(Deduccion* deduccion);
	void calcularSalarioNeto();
	double getSalarioNeto();
	string toString();

};