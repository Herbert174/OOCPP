#pragma once
#include "Pessoa.h"
#include <iostream>

class Professor : public Pessoa {
private:
	float salario = 0.0;
	float saldo = 0.0;

public:
	Professor();
	Professor(Pessoa InfoPessoa, float salario);
	float getSalario();
	void setSalario(float salario);
	float getSaldo();
	void setSaldo(float saldo);
	void imprimir();              //Overload - Funções de mesmo nome com parametros diferentes podem ser criados
	void imprimir(float saldo);   //o programa saberá qual chamar a partir do parametro utilizado na chamada da função
};                                //Evitar em C++ fazer Overload onde só muda o parametro de int pra float

