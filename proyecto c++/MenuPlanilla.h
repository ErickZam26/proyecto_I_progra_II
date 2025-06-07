#pragma once
#include "consola.h"
#include "Control.h"

    class MenuPlanilla : public Consola {
    private:
        Control* gestor;
        string periodoActual;
        Lista* colaboradoresDelPeriodo; // Lista de colaboradores para este per�odo

    public:
        MenuPlanilla(Control* _gestor);
        void lanzar(int posicion);

    private:
        void establecerPeriodo();
        void seleccionarColaboradores();
        void gestionarIngresosPorColaborador();
        void gestionarDeduccionesPorColaborador();
        void calcularPlanillaPeriodo();
        void mostrarResumenPlanilla();

        // Submen�s internos
        void submenuIngresos(Colaborador* colaborador);
        void submenuDeducciones(Colaborador* colaborador);
    };



