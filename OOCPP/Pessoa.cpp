#include "Pessoa.h"

Pessoa::Pessoa() {

}

Pessoa::Pessoa(std::string nome, int cpf) : nome(nome), cpf(cpf){

}

std::string Pessoa::getNome() {
	return nome;
}

int Pessoa::getCpf() {
	return cpf;
}

void Pessoa::setNome(std::string nome) {
	this->nome = nome;
}

void Pessoa::setCpf(int cpf) {
	this->cpf = cpf;
}