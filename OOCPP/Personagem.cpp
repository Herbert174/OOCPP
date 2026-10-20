#include "Personagem.h"

int Personagem::getNivel() {
	return nivel;
}

void Personagem::setNivel(int nivel) {
	this->nivel = nivel;
}

void Personagem::aumentaNivel() {
	nivel++;
	std::cout << "Nivel aumentado!" << std::endl;
}