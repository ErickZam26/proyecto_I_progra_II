#include "FactoryIngresos.h"
#include "Bonificaciones.h"
#include "HorasOrdinarias.h"
#include "HorasExtra.h"
#include "HorasDobles.h"
#include "HorasFeriado.h"
#include "TipoIngreso.h"


Ingresos* IngresosFactory::crearIngresos(TipoIngreso tipo, Colaborador* colab, int valor1, float valor2) {
    switch (tipo) {
    case BONIFICACION:
        return new Bonificaciones(valor1, valor2, colab); // valor1 = tipo de bonificación, valor2 = monto
    case HORAS_ORDINARIAS:
        return new HorasOrdinarias(valor1, colab); // valor1 = horario
    case HORAS_EXTRA:
        return new HorasExtra(valor1, colab); // valor1 = horario
    case HORAS_DOBLES:
        return new HorasDobles(valor1, colab); // valor1 = horario
    case HORAS_FERIADO:
        return new HorasFeriado(valor1, colab); // valor1 = tipo de feriado
    default:
        return nullptr;
    }
}
