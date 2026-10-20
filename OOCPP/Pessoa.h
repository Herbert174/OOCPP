#pragma once

#include <string>

class Pessoa{
private:
	std::string nome = "";
	int cpf = 0;

public:
	Pessoa();
	Pessoa(std::string nome, int cpf);
	std::string getNome();
	int getCpf();
	void setNome(std::string nome);
	void setCpf(int cpf);
};

