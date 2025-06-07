#include "FactoryDeduccion.h"  
#include "CCSS_Deduccion.h"  
#include "DeduccionRenta.h"  
#include "DeduccionMaternidad.h"  
#include "DeduccionEmbargos.h"  

#include "DeduccionFyP.h"
Deduccion* FactoryDeduccion::crearDeduccion(int tipo, Colaborador* c, int valor1, int valor2)
{
    switch (tipo) {
    case 1:
        return new CCSS_Deduccion(c);

    case 2:
        return new DeduccionRenta(c);
    case 3:
        return new DeduccionMaternidad(c);
    case 4:
        return new DeduccionEmbargos(c);
    case 5:
        return new DeduccionFyP(valor1, valor2, c);
    }

    return nullptr;
}
