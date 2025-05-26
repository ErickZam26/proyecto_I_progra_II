#include "ObjectAdaptador.h"
#include <typeinfo>

string ObjectAdaptador::toString() const {
	return typeid(*this).name();
}
