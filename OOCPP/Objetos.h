#pragma once

#include <iostream>
#include <string>

class Cookie {
private:
	float preco = 0.0;
	std::string sabor = "";
	std::string formato = "";

public:
	Cookie(std::string sabor); //Podemos ter mais de um construtor, dessa forma o programa irá automaticamente 
	Cookie();                  //buscar o que se enquadra nos parametros passado para saber qual construtor chamar
	Cookie(float preco);
	Cookie(std::string sabor, float preco);

	void comer();
	void avaliar(int nota);
	void pagar(float valor);

	float getPreco();
	std::string getSabor();
	std::string getFormato();

	void setPreco(float preco);
	void setSabor(std::string sabor);
	void setFormato(std::string formato);
};

class Funcionario {
private:
	std::string nome;
	int idade;
	float salario;

public:
	Funcionario(std::string nome, int idade, float salario);

	void InfoFuncionario();
};