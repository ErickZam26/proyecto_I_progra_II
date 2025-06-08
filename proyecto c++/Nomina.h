#pragma once

#include "Colaborador.h"
#include "Ingresos.h"
#include "Deduccion.h"
#include <fstream>
class Nomina
{
private:
    Colaborador* colaborador;
    string periodo;
    Ingresos** ingresos;
    Deduccion** deducciones;
    int capacidadIngresos;
    int numIngresos;
    int capacidadDeducciones;
    int numDeducciones;

    double salarioBruto;
    double totalDeducciones;
    double salarioNeto;
    bool calculada;

    // Funciones auxiliares
    void expandirIngresos();
    void expandirDeducciones();
public:
    Nomina(Colaborador* _colaborador, string _periodo);

    // Gestión de ingresos
    void agregarIngreso(Ingresos* ingreso);
    void removerIngreso(int posicion);
    Ingresos** getIngresos(int count);

    // Gestión de deducciones  
    void agregarDeduccion(Deduccion* deduccion);
    void removerDeduccion(int posicion);
    Deduccion** getDeducciones(int count);

    // Cálculos
    void calcular();
    void calcularSalarioBruto();
    void calcularTotalDeducciones();
    void calcularSalarioNeto();

    double getSalarioBruto();
    double getTotalDeducciones();
    double getSalarioNeto();
    Colaborador* getColaborador();
    string getPeriodo();

    // Reportes
    string generarReporte();
    void exportarTXT(string nombreArchivo);
    void buscarNomina();

};

