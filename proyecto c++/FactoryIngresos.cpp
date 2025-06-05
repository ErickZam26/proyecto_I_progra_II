#include "FactoryIngresos.h"
#include "Bonificaciones.h"
#include "HorasOrdinarias.h"
#include "HorasExtra.h"
#include "HorasDobles.h"
#include "HorasFeriado.h"



Ingresos* IngresosFactory::crearIngresos(int tipo, Colaborador* colab, int valor1, float valor2) {
    switch (tipo) {
    case 1:
        return new Bonificaciones(valor1, valor2, colab); // valor1 = tipo de bonificación, valor2 = monto
    case 2:
        return new HorasOrdinarias(valor1, colab); // valor1 = horario
    case 3:
        return new HorasExtra(valor1, colab); // valor1 = horario
    case 4:
        return new HorasDobles(valor1, colab); // valor1 = horario
    case 5:
        return new HorasFeriado(valor1, colab); // valor1 = tipo de feriado
    default:
        return nullptr;
    }
}