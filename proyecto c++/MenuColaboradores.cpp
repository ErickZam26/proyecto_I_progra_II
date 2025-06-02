#include "MenuColaboradores.h" 

MenuColaboradores::MenuColaboradores(Control* nuevoGestor) : consola() {
   gestor = nuevoGestor;  

   setTitulo("ADMINISTRACION DE COLABORADORES");  
   setInstrucciones("Por favor, leer con cuidado las siguientes opciones.");  

   agregarOpcion(new OpcionMenu("Ingresar colaborador"));  
   agregarOpcion(new OpcionMenu("Editar colaborador")); 
   agregarOpcion(new OpcionMenu("Eliminar colaborador"));
   agregarOpcion(new OpcionMenu("Buscar colaborador"));
   agregarOpcion(new OpcionMenu("Ver lista de colaboradores"));  
   agregarOpcion(new OpcionMenu("Regresar al menu"));  
}  

void MenuColaboradores::lanzar(int posicion) {



    try {
        switch (posicion) {
        case 1: {
            imprimir("Ingresando colaborador");
            string nombre = leerString("Por favor, digitar nombre:");
            string id = leerString("Por favor, digitar cedula:");
            string puesto = leerString("Por favor, digitar puesto:");
            float salarioBase = leerFloat("Por favor, digitar el saldo base:");
            imprimir("Creando objeto Colaborador ");
            /* Colaborador* nuevoColab = new Colaborador(nombre, id, puesto, salarioBase);*/
            imprimir("Agregando colaborar al gestor ");
            gestor->agregar(new Colaborador(nombre, id, puesto, salarioBase));
            imprimir("Colaborador agregado exitosamente");
            break;
        }
        case 2: {

            imprimir("Editando persona");
            string id = leerString("Por favor, digitar cedula del colaborador a editar:");
            Colaborador* colaborador = gestor->buscarColaborador(id);
            if (colaborador == nullptr) {
                imprimir("Colaborador no encontrado");
                enter();

                break;
            }

            // digitar datos a editar
            // "" para dejarlos igual
            string nombre = leerString("Por favor, digitar nuevo nombre (dejar en blanco para no cambiar):");
            string cedula = leerString("Por favor, digitar nueva cedula (dejar en blanco para no cambiar):");
            string puesto = leerString("Por favor, digitar nuevo puesto (dejar en blanco para no cambiar):");
            float nuevoSalarioBase = leerFloat("Por favor, digitar nuevo salario base (0 para no cambiar):");

            if (!puesto.empty()) {
                colaborador->setPuesto(puesto);
            }

            if (!cedula.empty()) {
                colaborador->setCedula(cedula);
            }

            if (!nombre.empty()) {
                colaborador->setNombre(nombre);
            }

            if (nuevoSalarioBase > 0) {
                colaborador->setSalarioBase(nuevoSalarioBase);
            }
            else if (nuevoSalarioBase < 0) {
                throw exception("El salario base no puede ser negativo");
            }

            gestor->actualizar(colaborador);
            imprimir("Colaborador actualizado exitosamente");
            break;
        }
        case 3: {
            imprimir("Eliminando colaborador");
            string id = leerString("Por favor, digitar cedula del colaborador a eliminar:");
            Colaborador* colaborador = gestor->buscarColaborador(id);
            if (colaborador == nullptr) {
                imprimir("Colaborador no encontrado");
                enter();
                break;
            }
            gestor->eliminar(colaborador);
            imprimir("Colaborador eliminado exitosamente");

            break;
        }
        case 4: {
            imprimir("Buscando colaborador");
            string id = leerString("Por favor, digitar cedula del colaborador a buscar:");
            Colaborador* colaborador = gestor->buscarColaborador(id);
            if (colaborador == nullptr) {
                imprimir("Colaborador no encontrado");
                enter();
                break;
            }
            imprimir("Colaborador encontrado: " + colaborador->toString());
            break;
        }
        case 5: {
            imprimir("Ver lista de colaboradores");
            //IIterador* it = gestor->datos->colaboradores->getIterdor();*/

            break;
        }
        case 6: {
            gestor->mostrarMenuPrincipal();
            return;
        }
        default:
            imprimir("Opción no válida");
            break;

        }
     
    }
    catch (exception& ex) {
        imprimir(ex.what());

    }
    enter();
    this->show();
}

