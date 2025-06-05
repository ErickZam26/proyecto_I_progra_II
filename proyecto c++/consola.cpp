#include "consola.h"


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

void consola::agregarOpcion(string texto) {
	listaOpciones->agregarFinal(new OpcionMenu(texto));
}


void consola::agregarOpcion(OpcionMenu* opcion) {
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

float consola::leerFloat(string mensaje) {
	float numero;
	while (true) {
		cout << mensaje;
		cin >> numero;
		if (cin.fail()) {
			// Entrada no es un float
			cout << "Error: Debe ingresar un numero valido." << endl;
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




		void consola::imprimir(string mensaje, bool salto) {
			cout << mensaje;
			if (salto) {
				cout << endl;
			}
		}

		void consola::enter() {
			cout << "Presione una tecla para continuar . . .";
			cin.get();
		}

		void consola::limpiar() {
#ifdef _WIN32
			system("cls");   // Windows
#else
			system("clear"); // Linux/macOS
#endif
		}

