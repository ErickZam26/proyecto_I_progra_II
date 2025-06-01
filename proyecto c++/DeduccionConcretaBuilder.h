#pragma once
#include "DeduccionesBuilder.h"

class DeduccionConcretaBuilder : public DeduccionesBuilder
{
private:
    Deduccion** deducciones;
    int indice ;
    int capacidad ;
    bool resultadoEntregado;
    void expandirCapacidad(); //metodo para crear mas espacios
public:
    DeduccionConcretaBuilder();
    ~DeduccionConcretaBuilder();
    void reset() override;

    void agregarRenta() override;
    void agregarCCSS() override;
    void agregarMaternidad() override;
    void agregarEmbargo(double monto) override;
    void agregarDeduccionFija(double monto) override;
    void agregarDeduccionPorcentual(double porcentaje) override;
    Deduccion** obtenerResultado() override;
	int obtenerCantidad() override;
};

