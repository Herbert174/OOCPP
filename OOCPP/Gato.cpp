#include "Gato.h"

std::string Gato::getRaca() const {
	return raca;
}

void Gato::setRaca(std::string raca) {
	this->raca = raca;
}

void Gato::emiteSom() {
	std::cout << "Miando!" << std::endl;
}