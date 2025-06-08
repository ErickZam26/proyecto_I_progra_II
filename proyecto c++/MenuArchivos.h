#pragma once
#include "consola.h"
#include "Control.h"
class Control;
class MenuArchivos : public Consola {
private:
    Control* gestor;

public:
    MenuArchivos(Control* _gestor);
    void lanzar(int posicion);
    void exportarPlanillaPorColaborador();
    void exportarPlanillaPorPeriodo();
//
//private:
//    void exportarPlanillaPorColaborador();
//    void exportarPlanillaPorPeriodo();
//    void exportarTodasLasPlanillas();
//    void mostrarReporteEnPantalla();

};

// Opciones del MenuArchivos:
// 1. Exportar planilla de un colaborador espec�fico
// 2. Exportar planilla de un per�odo espec�fico
// 3. Exportar todas las planillas
// 4. Mostrar reporte en pantalla

// 6. Regresar al men� principal

