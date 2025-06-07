#include "Ingresos.h"
class Bonificaciones : public Ingresos {
private:
    int tipo;
    float monto;
public:
    Bonificaciones(int t, float m, Colaborador* c);
    virtual double calcularSalario() const override;
};