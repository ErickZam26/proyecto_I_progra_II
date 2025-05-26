#pragma once
#include <string>

using namespace std;

class Iobjeto
{
public:
	virtual string toString() const = 0;
	virtual bool equals(Iobjeto*) = 0;
	virtual string getType() const = 0;
};

