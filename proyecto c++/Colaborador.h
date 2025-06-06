#pragma once
#include <iostream>
#include <exception>
#include <sstream>
#include<string>
#include "ObjectAdaptador.h"
using namespace std;
class Colaborador : public ObjectAdaptador
{
private:
	string nombre;
	string cedula;
	string puesto;
	float salarioBase;
public:

	Colaborador(string nombre, string _cedula, string _puesto, float _salarioBase);
	virtual ~Colaborador();
	string getNombre();
	string getCedula();
	string getPuesto();
	float getSalarioBase();

	void setNombre(string _nombre);
	void setCedula(string _cedula);
	void setPuesto(string _puesto);
	void setSalarioBase(float _salarioBase);

	string toString();

};