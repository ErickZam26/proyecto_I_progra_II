#include "MenuColaboradores.h" 

MenuColaboradores::MenuColaboradores(Control* nuevoGestor) : consola() {
   gestor = nuevoGestor;  

   consola::setTitulo("ADMINISTRACION DE PERSONAS");  
   consola::setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");  

   agregarOpcion(new OpcionMenu("Crear persona"));  
   agregarOpcion(new OpcionMenu("Editar persona"));  
   agregarOpcion(new OpcionMenu("Listar personas"));  
   agregarOpcion(new OpcionMenu("Libros asociados"));  
   agregarOpcion(new OpcionMenu("Regresar al menu"));  
}  



void MenuColaboradores::lanzar(int posicion) {  
   if (posicion == 1) {  
       try {  
           imprimir("Creando persona");  
           string nombre = consola::leerString("Por favor, digitar nombre:");
           string id = consola::leerString("Por favor, digitar cedula:");  
		   string puesto = consola::leerString("Por favor, digitar puesto:");
		   double salarioBase = consola::leerDouble("Por favor, digitar el saldo base:");
           gestor->agregar(new Colaborador(nombre, id, puesto, salarioBase));  
       }  
       catch (exception& ex) {  
           consola::imprimir(ex.what());  
           consola::enter();  
       }  
       show();  
   }  
   else if (posicion == 2) {  
       imprimir("Editando persona");  
   }  
   else if (posicion == 3) {  
       imprimir("Listando");  
   }  
   else if (posicion == 5) {  
       gestor->mostrarMenuPrincipal();  
   }  
}
