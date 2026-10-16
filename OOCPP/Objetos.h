#pragma once

#include <iostream>
#include <string>

class Cookie {
public:
	float preco = 0.0;
	std::string sabor = "";
	std::string formato = "";

	Cookie(std::string sabor); //Podemos ter mais de um construtor, dessa forma o programa irá automaticamente 
	Cookie();                  //buscar o que se enquadra nos parametros passado para saber qual construtor chamar

	void comer();
	void avaliar(int nota);

	float getPreco();
	void pagar(float valor);
};

class Funcionario {
public:
	std::string nome;
	int idade;
	float salario;

	Funcionario(std::string nome, int idade, float salario);

	void InfoFuncionario();
};