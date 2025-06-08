#include "MenuArchivos.h"

MenuArchivos::MenuArchivos(Control* _gestor)

{
    gestor = _gestor;
    setTitulo("GESTION DE Archivos");
    setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");

    agregarOpcion(new OpcionMenu("Guardar colaborador"));
    agregarOpcion(new OpcionMenu("Guardar planilla "));
    agregarOpcion(new OpcionMenu("Cargar Datos "));
    agregarOpcion(new OpcionMenu("Regresar al men� principal"));
}

//void MenuArchivos::exportarPlanillaPorColaborador()
//{
//    string cedula = leerString("C�dula del colaborador:");
//    string periodo = leerString("Per�odo (YYYY-MM):");
//
//     Buscar n�mina en el modelo
//    Nomina* nomina = gestor->buscarNomina(cedula, periodo);
//    if (nomina) {
//        std::string archivo = "planilla_" + cedula + "_" + periodo + ".txt";
//        nomina->exportarTXT(archivo);
//        imprimir("Planilla exportada: " + archivo);
//    }
//    else {
//        imprimir("No se encontr� la planilla");
//    }
//}
//
//void MenuArchivos::exportarPlanillaPorPeriodo()
//{
//    std::string periodo = leerString("Per�odo (YYYY-MM):");
//    Nomina** nominas = gestor->getNominas(periodo);
//    int numNominas = gestor->getCantidadNominas();
//
//    if (numNominas > 0) {
//        for (int i = 0; i < numNominas; i++) {
//            std::string archivo = "planilla_" + nominas[i]->getColaborador()->getCedula() + ".txt";
//            nominas[i]->exportarTXT(archivo);
//        }
//        imprimir(std::to_string(numNominas) + " planillas exportadas");
//    }
//    else {
//        imprimir("No hay planillas para ese per�odo");
//    }
//}

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
            // Regresar al men� principal
            gestor->mostrarMenuPrincipal();
            return;

        default:
            imprimir("Opci�n no v�lida.");
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



