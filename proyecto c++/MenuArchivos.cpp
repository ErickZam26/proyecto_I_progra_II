#include "MenuArchivos.h"

MenuArchivos::MenuArchivos(Control* _gestor)

{
    gestor = _gestor;
    setTitulo("GESTION DE Archivos");
    setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

    agregarOpcion(new OpcionMenu("Guardar colaborador"));
    agregarOpcion(new OpcionMenu("Guardar planilla "));
    agregarOpcion(new OpcionMenu("Cargar Datos "));
    agregarOpcion(new OpcionMenu("Regresar al menú principal"));
}

void MenuArchivos::lanzar(int posicion)
{
    bool operacionCancelada = false;

    try {
        switch (posicion) {
        case 1:
		
	
           
            imprimir("Colaboradores guardados exitosamente.");
            break;

        case 2:

            imprimir("Planillas guardadas exitosamente.");
            break;

        case 3:
            //// Cargar datos
            //gestor->();
            imprimir("Colaboradores cargados exitosamente.");
            break;

        case 4:
            // Regresar al menú principal
            gestor->mostrarMenuPrincipal();
            return;

        default:
            imprimir("Opción no válida.");
            operacionCancelada = true;
            break;
        }
    }
    catch (const std::exception& e) {
        imprimir("Error: ");
        imprimir(e.what());
        operacionCancelada = true;
    }

    enter();      
    this->show(); 
}



