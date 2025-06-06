#pragma once
#include "Lista.h"
#include "Colaborador.h"
class Nomina
{
private:

    string periodo;
    Lista* ingresos;
    Lista* deducciones;
    double salarioBruto;
    double totalDeducciones;
    double salarioNeto;
    bool calculada;
public:
    Nomina(Colaborador* _colaborador, string _periodo);

    // Gesti�n de ingresos
    //void agregarIngreso(Ingreso* ingreso);
    void removerIngreso(int posicion);
    Lista* getIngresos();

    // Gesti�n de deducciones  
    //void agregarDeduccion(Deduccion* deduccion);
    void removerDeduccion(int posicion);
    Lista* getDeducciones();

    // C�lculos
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

