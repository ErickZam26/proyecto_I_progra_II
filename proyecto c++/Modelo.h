#pragma once
#include "ConjuntoColaboradores.h"
#include "Archivos.h"
#include "adminArch.h"

class Modelo {
private:
	ConjuntoColaboradores* colaboradores;
	static Modelo* _instancia;
	Archivos* archivos;
	adminArch* administrador;
	Modelo();
public:
	static Modelo* getInstancia();
	virtual void agregar(Colaborador*);
	virtual Colaborador* buscarColaborador(string);

	virtual void eliminar(Colaborador*);
	virtual void actualizar(Colaborador*);


	//void mostrarColaboradores();
	virtual void guardarEnArchivo(const string& nombreArchivo = "Colaboradores.txt");
	virtual void cargarDesdeArchivo(const string& nombreArchivo = "Colaboradores.txt");
};
