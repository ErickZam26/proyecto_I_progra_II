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


void consola::show() {

	limpiar();
	cout << "==================================================" << endl;
	cout << "=== " << titulo << endl;
	cout << "==================================================" << endl;
	cout << endl;
	if (instrucciones.compare("") != 0) {
		cout << instrucciones << endl;
	}
	cout << endl;
	for (int i = 0; i < listaOpciones->size(); i++) {
		cout << "\t" << (i + 1) << ". " << listaOpciones->get(i)->toString() << endl;
	}
	cout << endl;
	stringstream r;
	r << "Indique un numero entre 1 y " << listaOpciones->size() << "\n";
	lanzar(leerEntero(r.str(), 1, listaOpciones->size()));

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


int consola::leerEntero(string mensaje) {
	int numero;
	while (true) {
		cout << mensaje;
		cin >> numero;

		if (cin.fail()) {
			// Entrada no es un int
			cout << "Error: Debe ingresar un número entero válido." << endl;

			// Limpiar estado de error
			cin.clear();

			// Ignorar la entrada inválida
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			// Correcto, salir del ciclo
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpiar el resto
			return numero;
		}
	}
}

int consola::leerEntero(string mensaje, int minimo, int maximo) {
	int numero;
	while (true) {
		cout << mensaje;
		cin >> numero;

		if (cin.fail()) {
			cout << "Error: Debe ingresar un número entero válido." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (numero < minimo || numero > maximo) {
			cout << "Error: El número debe estar entre " << minimo << " y " << maximo << "." << endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return numero;
		}
	}
}

double consola::leerDouble(string mensaje) {
	double numero;
	while (true) {
		cout << mensaje;
		cin >> numero;

		if (cin.fail()) {
			// Entrada no es un int
			cout << "Error: Debe ingresar un número entero válido." << endl;

			// Limpiar estado de error
			cin.clear();

			// Ignorar la entrada inválida
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			// Correcto, salir del ciclo
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpiar el resto
			return numero;
		}
	}
}

		string consola::leerString(string mensaje) {
			cout << mensaje;
			string entrada;
			getline(cin, entrada); // Leer toda la línea, incluyendo espacios
			return entrada;
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
		cout << "5. Agregar Deducción Fija\n";
		cout << "6. Agregar Deducción Porcentual\n";
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
			cout << "Opción no válida.\n";
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
