#pragma once

#include "Mamifero.h"
#include <string>
#include <iostream>

class Gato : public Mamifero{
private:
	std::string raca;

public:
	std::string getRaca() const;
	void setRaca(std::string raca);
	void emiteSom();
};

