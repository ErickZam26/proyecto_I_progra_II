#include "Colilla.h"


Colilla::Colilla(Nomina* _nomina, std::string _fecha)
	: nomina(_nomina), fecha(_fecha) {
}

string Colilla::GenerarColilla() {
	std::stringstream ss;
	ss << "COLILLA DE PAGO\n";
	ss << "Fecha: " << fecha << "\n";
	ss << nomina->generarReporte();
	return ss.str();
}
//void Colilla::GenerarColilla()
//{
//
//	// Implementación de la generación de la colilla
//	// Aquí se pueden utilizar los objetos Nomina, Ingresos y Deduccion
//	// para calcular y mostrar la colilla correspondiente al periodo.
//
//	// Ejemplo de uso:
//	// cout << "Generando colilla para el periodo: " << periodo << endl;
//	// nomina->calcularIngresos();
//	// nomina->calcularDeducciones();
//	// nomina->mostrarColilla();
//
//	// Nota: Asegúrate de inicializar 'nomina' y 'periodo' antes de llamar a este método.
//}
