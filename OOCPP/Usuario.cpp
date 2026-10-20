#include "Usuario.h"

std::string Usuario::getNome() {
	return nome;
}

std::string Usuario::getEmail() {
	return email;
}

void Usuario::setNome(std::string nome) {
	this->nome = nome;
}

void Usuario::setEmail(std::string email) {
	this->email = email;
}