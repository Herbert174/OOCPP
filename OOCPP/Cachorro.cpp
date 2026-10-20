#include "Cachorro.h"

std::string Cachorro::getRaca() const{
	return raca;
}

void Cachorro::setRaca(std::string raca) {
	this->raca = raca;
}

void Cachorro::emiteSom() {
	std::cout << "Latindo!" << std::endl;
}