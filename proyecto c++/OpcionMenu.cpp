#include "OpcionMenu.h"

OpcionMenu::OpcionMenu(string title) {
	titulo = title;
}

string OpcionMenu::toString() const {
	return titulo;
}