#pragma once
#include "consola.h"
#include "Control.h"

    class MenuPlanilla : public consola {
    private:
        Control* gestor;
        string periodoActual;
        Lista* colaboradoresDelPeriodo; // Lista de colaboradores para este período

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

    //    // Submenús internos
    //    void submenuIngresos(Colaborador* colaborador);
    //    void submenuDeducciones(Colaborador* colaborador);
    };

    // Opciones del MenuPlanilla:
    // 1. Establecer período de planilla
    // 2. Seleccionar colaboradores para el período
    // 3. Gestionar ingresos por colaborador
    // 4. Gestionar deducciones por colaborador  
    // 5. Calcular planilla del período
    // 6. Ver resumen de planilla
    // 7. Regresar al menú principal


