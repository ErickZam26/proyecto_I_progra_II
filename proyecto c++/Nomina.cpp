#include "Nomina.h"

Nomina::Nomina(Colaborador* _colaborador, string _periodo) : colaborador(_colaborador),
periodo(_periodo), capacidadIngresos(5), numIngresos(0), capacidadDeducciones(0), numDeducciones(0), calculada(0)
{

	ingresos = new Ingresos* [capacidadIngresos];
	deducciones = new Deduccion * [capacidadDeducciones];
}

void Nomina::expandirIngresos()
{
	capacidadIngresos *= 2;
	Ingresos** nuevo = new Ingresos * [capacidadIngresos];
	for (int i = 0; i < numIngresos; i++) {
		nuevo[i] = ingresos[i];
	}
	delete[] ingresos;
	ingresos = nuevo;
}

void Nomina::expandirDeducciones()
{
	capacidadDeducciones *= 2;
	Deduccion** nuevo = new Deduccion * [capacidadDeducciones];
	for (int i = 0; i < numDeducciones; i++) {
		nuevo[i] = deducciones[i];
	}
	delete[] deducciones;
	deducciones = nuevo;
}


void Nomina::agregarIngreso(Ingresos* ingreso)
{
	if (!ingreso) return;

	if (numIngresos == capacidadIngresos) {
		expandirIngresos();
	}
	ingresos[numIngresos++] = ingreso;
	calculada = false;
}

void Nomina::removerIngreso(int posicion)
{
	if (posicion < 0 || posicion >= numIngresos) {
		throw std::out_of_range("Posición inválida");
	}

	delete ingresos[posicion];
	for (int i = posicion; i < numIngresos - 1; i++) {
		ingresos[i] = ingresos[i + 1];
	}
	numIngresos--;
	calculada = false;
}

Ingresos** Nomina::getIngresos(int count)
{
	count = numIngresos;
	return ingresos;

}

void Nomina::agregarDeduccion(Deduccion* deduccion)
{
	if (!deduccion) return;

	if (numDeducciones == capacidadDeducciones) {
		expandirDeducciones();
	}
	deducciones[numDeducciones++] = deduccion;
	calculada = false;
}

void Nomina::removerDeduccion(int posicion)
{
	if (posicion < 0 || posicion >= numDeducciones) {
		throw std::out_of_range("Posición inválida");
	}

	delete deducciones[posicion];
	for (int i = posicion; i < numDeducciones - 1; i++) {
		deducciones[i] = deducciones[i + 1];
	}
	numDeducciones--;
	calculada = false;
}

Deduccion** Nomina::getDeducciones(int count)
{
	count = numDeducciones;
	return deducciones;
}


void Nomina::calcular()
{
	calcularSalarioBruto();
	calcularTotalDeducciones();
	calcularSalarioNeto();
	calculada = true;
}

void Nomina::calcularSalarioBruto()
{
	salarioBruto = colaborador->getSalarioBase();
	for (int i = 0; i < numIngresos; i++) {
		salarioBruto += ingresos[i]->calcularSalario();
	}
}

void Nomina::calcularTotalDeducciones()
{
	totalDeducciones = 0;
	for (int i = 0; i < numDeducciones; i++) {
		totalDeducciones += deducciones[i]->calcular();
	}
}

void Nomina::calcularSalarioNeto()
{
	salarioNeto = salarioBruto - totalDeducciones;
}

double Nomina::getSalarioBruto()
{
	return salarioBruto;
}

double Nomina::getTotalDeducciones()
{
	return totalDeducciones;
}

double Nomina::getSalarioNeto()
{
	return salarioNeto;
}




Colaborador* Nomina::getColaborador()
{
	return colaborador;
}

string Nomina::getPeriodo()
{
	return string("Periodo " + periodo);
}

string Nomina::generarReporte()
{
	if (!calculada) calcular();

	stringstream ss;
	ss << "Reporte de Nómina\n";
	ss << "Periodo: " << periodo << "\n";
	ss << "Colaborador: " << colaborador->getNombre() << "\n";
	ss << "Salario Bruto: " << salarioBruto << "\n";
	ss << "Total Deducciones: " << totalDeducciones << "\n";
	ss << "Salario Neto: " << salarioNeto << "\n";

	return ss.str();
}

void Nomina::exportarTXT(std::string nombreArchivo) {
	std::ofstream archivo(nombreArchivo);
	if (!archivo) {
		throw std::runtime_error("Error al abrir archivo");
	}
	archivo << generarReporte();
	archivo.close();
}