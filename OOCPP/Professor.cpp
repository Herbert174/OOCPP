#include "Professor.h"

Professor::Professor() {

}

Professor::Professor(Pessoa InfoPessoa, float salario) : Pessoa(InfoPessoa.getNome(), InfoPessoa.getCpf()), salario(salario){
	
}

float Professor::getSalario() {
	return salario;
}
void Professor::setSalario(float salario) {
	this->salario = salario;
}

float Professor::getSaldo() {
	return saldo;
}

void Professor::setSaldo(float saldo) {
	this->saldo = saldo;
}

void Professor::imprimir() {
	std::cout << "O saldo do professor é de " << getSaldo() << " R$" << std::endl;
}

void Professor::imprimir(float saldo) {
	float novoSaldo = getSaldo() + saldo;
	setSaldo(novoSaldo);
	std::cout << "O saldo do professor é de " << getSaldo() << " R$" << std::endl;
}