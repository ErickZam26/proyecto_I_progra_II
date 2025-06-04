#pragma once
#include "consola.h"
#include "Control.h"

    class MenuPlanilla : public consola {
    private:
        Control* gestor;
        string periodoActual;
        Lista* colaboradoresDelPeriodo; // Lista de colaboradores para este per�odo

    public:
        MenuPlanilla(Control* _gestor);
        void lanzar(int posicion);

    //private:
    //    void establecerPeriodo();
    //    void seleccionarColaboradores();
    //    void gestionarIngresosPorColaborador();
    //    void gestionarDeduccionesPorColaborador();
    //    void calcularPlanillaPeriodo();
    //    void mostrarResumenPlanilla();

    //    // Submen�s internos
    //    void submenuIngresos(Colaborador* colaborador);
    //    void submenuDeducciones(Colaborador* colaborador);
    };

    // Opciones del MenuPlanilla:
    // 1. Establecer per�odo de planilla
    // 2. Seleccionar colaboradores para el per�odo
    // 3. Gestionar ingresos por colaborador
    // 4. Gestionar deducciones por colaborador  
    // 5. Calcular planilla del per�odo
    // 6. Ver resumen de planilla
    // 7. Regresar al men� principal


