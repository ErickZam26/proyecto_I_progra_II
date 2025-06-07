#include "adminArch.h"

void adminArch::cargar(Archivos* arch, ConjuntoColaboradores* lista)
{
		Colaborador* newC;
		arch->abrir(1);
		cout << "inicio";
		newC = arch->leer();
			while (!arch->finArch()) {
				lista->agregar(newC);
				newC = arch->leer();
			}
			cout << "inicio";
			arch->cerrar(1);
}

void adminArch::guardar(Archivos* arch, ConjuntoColaboradores* lista) {  
   arch->abrir(0);  
   IIterador* iterador = lista->getIterdor(); // Use the iterator to traverse the collection  
   while (iterador->hasMore()) {  
       Colaborador* colab = dynamic_cast<Colaborador*>(iterador->next());  
       if (colab != nullptr) {  
           arch->escribir(colab);  
       }  
   }  
   arch->cerrar(0);  
   cout << "Datos guardados exitosamente." << endl;  
}


