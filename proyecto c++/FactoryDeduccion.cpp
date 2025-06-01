#include "FactoryDeduccion.h"  
#include "CCSS_Deduccion.h"  
#include "DeduccionRenta.h"  
#include "DeduccionMaternidad.h"  
#include "DeduccionEmbargos.h"  
#include "DeduccionFija.h"  
#include "DeduccionPorcentual.h"  

Deduccion* FactoryDeduccion::crearDeduccion(string& tipo) const  
{  
   if (tipo == "Deducion CCSS") {  
       return new CCSS_Deduccion();  
   }  
   if (tipo == "Deducion Renta") {  
       return new DeduccionRenta();  
   }  
   if (tipo == "Deducion Maternidad") {  
       return new DeduccionMaternidad(0.5);  
   }  
   if (tipo == "Deducion Embargo") {  
       return new DeduccionEmbargos(0.25);  
   }  
   if (tipo == "Deducion Fija") {  
       return new DeduccionFija(0.1);  
   }  
   if (tipo == "Deducion Porcentual") {  
       return new DeduccionPorcentual(0.1);  
   }  

   return nullptr;
}
