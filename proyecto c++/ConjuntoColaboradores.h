#pragma once
#include "Lista.h"
#include "colaborador.H"

class ConjuntoColaboradores : public ObjectAdaptador {
private:
	Lista* listaColaboradores;
public:
	ConjuntoColaboradores();
	virtual void agregar(Colaborador*);
	virtual void eliminar(Colaborador*);
	virtual void actualizar(Colaborador*);
	//virtual double promedioHora() const;
	virtual IIterador* getIterdor()const;
	virtual string toString() const override;
	virtual Colaborador* Buscar(string) const;
	virtual void remover(string);
};

