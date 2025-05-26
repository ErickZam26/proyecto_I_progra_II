#pragma once
#include "ObjectAdaptador.h"
#include "Nodo.h"
#include "IColeccion.h"
#include "IEnumerable.h"

class Lista : public ObjectAdaptador, public IColeccion, IEnumerable {
private:
	Nodo* root;
public:
	Lista();
	virtual void agregar(ObjectAdaptador*) override;
	virtual bool removerInicio() override;
	virtual void clear() override;
	virtual int size() const override;
	virtual ObjectAdaptador* get(int) const override;
	virtual string toString() const override;
	virtual IIterador* getIterador() const override;
	virtual void agregarFinal(ObjectAdaptador* dato);

	virtual bool vacio() const;
};

