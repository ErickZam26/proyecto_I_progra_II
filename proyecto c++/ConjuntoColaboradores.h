#pragma once
#include "Lista.h"
#include "colaborador.H"

class ConjuntoColaboradores : public ObjectAdaptador {
private:
	Lista* listaColaboradores;
public:
	ConjuntoColaboradores();
	virtual void agregar(Colaborador*);
	//virtual double promedioHora() const;
	virtual string toString() const override;
};

