#pragma once
#include "Colaborador.h"
#include "Lista.h"
class PlanillaColaborador
{
private:
    Colaborador* colaborador;
    string periodo;
    Lista* ingresos;       
    Lista* deducciones;   
    double salarioBruto;
    double totalDeducciones;
    double salarioNeto;
    bool calculada;
public:
    PlanillaColaborador(Colaborador* _colaborador, string _periodo);

    // Gestión de ingresos
    //void agregarIngreso(Ingreso* ingreso);
    void removerIngreso(int posicion);
    Lista* getIngresos();

    // Gestión de deducciones  
    //void agregarDeduccion(Deduccion* deduccion);
    void removerDeduccion(int posicion);
    Lista* getDeducciones();

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


};

