#include "ConjuntoColaboradores.h"

ConjuntoColaboradores::ConjuntoColaboradores() {
    listaColaboradores = new Lista();
}

void ConjuntoColaboradores::agregar(Colaborador* c) {
    listaColaboradores->agregar(c);
}

//double ConjuntoColaboradores::promedioHora() const {
//    double suma = 0;
//    double total = 0;
//    IIterador* ite = listaColaboradores->getIterador();
//    while (ite->hasMore()) {
//        Colaborador* Colaborador = (Colaborador*)ite->next();
//        suma = Colaborador->salarioHora();
//        total++;
//    }
//    return suma / total;
//}

IIterador* ConjuntoColaboradores::getIterdor() const
{
    return listaColaboradores->getIterador();
}

string ConjuntoColaboradores::toString() const {
    return listaColaboradores->toString();
}

Colaborador* ConjuntoColaboradores::Buscar(string cedula) const
{
    IIterador* it = listaColaboradores->getIterador();
    while (it->hasMore()) {
        Colaborador* colaborador = (Colaborador*)it->next();
        if (colaborador->getCedula().compare(cedula) == 0) {
            return colaborador;
        }
    }
    throw exception("Registro no encontado");
}

void ConjuntoColaboradores::remover(string cedula)
{
    listaColaboradores->remover(Buscar(cedula));
}

