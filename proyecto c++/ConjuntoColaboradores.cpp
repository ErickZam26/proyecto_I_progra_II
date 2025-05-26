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

string ConjuntoColaboradores::toString() const {
    return listaColaboradores->toString();
}
