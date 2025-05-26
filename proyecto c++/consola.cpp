#include "consola.h"
#include "OpcionMenu.h"

consola::consola() {
	listaOpciones = new Lista();
	titulo = "";
	instrucciones = "";
}

void consola::setTitulo(string t) {
	titulo = t;
}

void consola::setInstrucciones(string i) {
	instrucciones = i;
}

void consola::agreagarOpcion(OpcionMenu* opcion) {
	listaOpciones->agregarFinal(opcion);
}

void consola::menuPrincipal()
{
	int n;
	do {
		cout << "----------------------" << endl;
		cout << "    MENU PRINCIPAL    " << endl;
		cout << "----------------------" << endl;

		cout << "1) Registro de empleados" << endl;
		cout << "2) Bonificaciones  y deducciones" << endl;
		cout << "3) Generacion de plantilla por periodo" << endl;
		cout << "4) Guardar Datos" << endl;
		cout << "0) Salir" << endl << endl;
	
	
	cout << "Ingrese opcion: ";
	cin >> n;

	switch (n)
		{
		case 1:
			colab = submenu1();
			break;

		case 2:
			submenu2();
			break;
		case 3:
			submenu3();
			break;
		case 4:
			submenu4();
			break;
		case 0:
			break;
		}
	system("cls");
	} while (n != 0);
		
}

Colaborador* consola::submenu1()
{
	system("cls");
	Colaborador* colab = nullptr;
	string nombre, id, puesto;
	float salarioBase;

	cout << "Ingresar el nombre del colaborador\t\t:  "; cin >> nombre;
	cout << "Ingresar el ID del colaborador\t\t\t:  "; cin >> id;
	cout << "Ingresar el puesto del colaborador\t\t:  "; cin >> puesto;
	cout << "Ingresar el salario base del colaborador\t:  "; cin >> salarioBase;
	// Validar que el ID no exista

	colab = new Colaborador(nombre, id, puesto, salarioBase);
	return colab;
	//guardar colab en lista generica
}

void consola::submenu2()
{
	if (colab == nullptr) {
		cout << "Debe registrar un colaborador primero(opcion 1)." << endl;
		system("pause");
		return;

	}
	

	/*DeduccionConcretaBuilder builder;*/
	DeduccionDirector director;

	int opcion;
	do {
		cout << "\n--- SUBMENU DEDUCCIONES ---\n";
		cout << "1. Agregar CCSS\n";
		cout << "2. Agregar Maternidad\n";
		cout << "3. Agregar Renta\n";
		cout << "4. Agregar Embargo\n";
		cout << "5. Agregar Deducci�n Fija\n";
		cout << "6. Agregar Deducci�n Porcentual\n";
		cout << "0. Salir y aplicar deducciones\n";
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			director.construirEmpleadoCCSS(builder);
			
			cout << "CCSS agregado." << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			director.construirEmpleadoMaternidad(builder);
			break;
		case 3:
			director.construirEmpleadoRenta(builder);
			system("pause");	
			system("cls");
			cout << "Renta agregado." << endl;
			break;
		case 4:
			director.construirEmpleadoEmbargos(builder);
			break;
		case 5:
			director.construirEmpleadoFija(builder);
			break;
		case 6:
			director.construirEmpleadoPorcentual(builder);
			break;
		case 0:
			break;
		default:
			cout << "Opci�n no v�lida.\n";
			break;
		}

	} while (opcion != 0);

	Deduccion** deducciones = builder.obtenerResultado();
	int cantidad = builder.obtenerCantidad();
	


	cout << "Deducciones aplicadas al colaborador." << endl;
	system("pause");
}


void consola::submenu3()
{
}

void consola::submenu4()
{
}
