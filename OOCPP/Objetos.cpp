#include "Objetos.h"

#include <iostream>
#include <cmath>

Cookie::Cookie(std::string sabor) : sabor(sabor){
	std::cout << "Cookie foi criado com sabor definido! " << std::endl;
	formato = "Redondo";
}

Cookie::Cookie() {
	std::cout << "Cookie foi criado sem sabor definido! " << std::endl;
	formato = "Redondo";
}

Cookie::Cookie(float preco) : preco(preco){
	std::cout << "Cookie foi criado com preço definido! " << std::endl;
	formato = "Redondo";
}

Cookie::Cookie(std::string sabor, float preco) : sabor(sabor), preco(preco) {
	std::cout << "Cookie foi criado com sabor e preço definido! " << std::endl;
	this->formato = "Boneco";
}

void Cookie::comer() {
	std::cout << "Você comeu o seu cookie de " << sabor << std::endl;
}

void Cookie::avaliar(int nota) {
	std::cout << "Você deu uma avaliação para o seu cookie de " << sabor << " de " << nota << std::endl;
}

void Cookie::pagar(float valor) {
	float valorRestante;
	valorRestante = preco - valor;
	if (valorRestante > 0) {
		std::cout << "Faltam " << valorRestante << " para finalizar o pagamento" << std::endl;
	}
	else if (valorRestante < 0) {
		std::cout << "Voltar " << abs(valorRestante) << " para o cliente" << std::endl;
	}
	else {
		std::cout << "Pagamento realizado com sucesso! " << std::endl;
	}
}

float Cookie::getPreco() {
	return preco;
}

std::string Cookie::getSabor() {
	return sabor;
}

std::string Cookie::getFormato() {
	return formato;
}

void Cookie::setPreco(float preco) {
	this->preco = preco;
}

void Cookie::setSabor(std::string sabor) {
	this->sabor = sabor;
}

void Cookie::setFormato(std::string formato) {
	this->formato = formato;
}

Funcionario::Funcionario(std::string nome, int idade, float salario) : nome(nome), idade(idade), salario(salario) {
	std::cout << "Funcionario criado com sucesso! " << std::endl;
}

void Funcionario::InfoFuncionario() {
	std::cout << "Funcionario : " << nome << " tem " << idade << " anos e recebe " << salario << " de salario " << std::endl;
}