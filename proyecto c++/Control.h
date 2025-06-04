#pragma once  
#include "Modelo.h"  
#include "MenuColaboradores.h"  
#include "MenuPrincipal.h"  
#include "MenuArchivos.h"  
#include "MenuPlanilla.h"  
#include "SubmenuDeducciones.h"  
#include "SubmenuIngresos.h"  

class MenuArchivos;  
class MenuColaboradores;  
class MenuPrincipal;  
class MenuPlanilla;  
class SubmenuDeducciones;  
class SubmenuIngresos; 

class Control {  
private:  
   Modelo* datos;  
   MenuColaboradores* menuColaboradores;  
   MenuPrincipal* menuPrincipal;  
   MenuPlanilla* menuPlanilla;  
   MenuArchivos* menuArchivos;  
   SubmenuDeducciones* submenuDeducciones; 
   SubmenuIngresos* submenuIngresos;

public:  
   Control();  
   virtual void agregar(Colaborador*);  
   virtual void eliminar(Colaborador*);  
   virtual void actualizar(Colaborador*);  
   virtual Colaborador* buscarColaborador(string);  

   virtual void mostrarMenuPrincipal();  
   virtual void mostrarMenuColaborador();  
   virtual void mostrarMenuArchivos();  
   virtual void mostrarMenuPlanilla();   
   virtual void mostrarSubmenuDeducciones();  
   virtual void mostrarSubmenuIngresos();  
};
