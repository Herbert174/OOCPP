#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <locale.h>

#include "main.h"
#include "Utilitarios.h"
#include "Objetos.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Personagem.h"
#include "Professor.h"

using namespace std;

void exerciciosCookie() {
	string sabor;

	cout << "Digite o sabor do primeiro cookie : ";
	lerPalavra(sabor);

	Cookie cookie1(sabor);
	cookie1.setPreco((float)15.90);

	cout << "Digite o sabor do segundo cookie : ";
	lerPalavra(sabor);

	Cookie cookie2((float)14.30);
	cookie2.setSabor(sabor);

	cookie2.setFormato("Estrela");

	Cookie cookie3;
	cookie3.setPreco((float)16.70);

	cout << "Digite o sabor do terceiro cookie : ";
	lerPalavra(sabor);
	cookie3.setSabor(sabor);

	cout << "Digite o sabor do quarto cookie : ";
	lerPalavra(sabor);
	Cookie cookie4(sabor, (float)20.30);

	cout << endl;
	cout << "Cookie 1 : " << cookie1.getSabor();
	cout << " custa R$ : " << cookie1.getPreco();
	cout << " Formato : " << cookie1.getFormato();

	cout << endl;
	cout << "Cookie 2 : " << cookie2.getSabor();
	cout << " custa R$ : " << cookie2.getPreco();
	cout << " Formato : " << cookie2.getFormato();

	cout << endl;
	cout << "Cookie 3 : " << cookie3.getSabor();
	cout << " custa R$ : " << cookie3.getPreco();
	cout << " Formato : " << cookie3.getFormato();
	cout << endl;

	cout << "Cookie 4 : " << cookie4.getSabor();
	cout << " custa R$ : " << cookie4.getPreco();
	cout << " Formato : " << cookie4.getFormato();
	cout << endl;

	cookie1.comer();
	cookie1.avaliar(9);

	cookie2.comer();
	cookie2.avaliar(10);

	cookie3.comer();
	cookie3.avaliar(8);

	cookie4.comer();
	cookie4.avaliar(7);

	cout << "Valor do primeiro cookie " << cookie1.getPreco() << endl;
	cookie1.pagar((float)18.00);

	cout << "Valor do segundo cookie " << cookie2.getPreco() << endl;
	cookie2.pagar((float)14.00);

	cout << "Valor do terceiro cookie " << cookie3.getPreco() << endl;
	cookie3.pagar((float)16.70);

	cout << "Valor do terceiro cookie " << cookie4.getPreco() << endl;
	cookie4.pagar((float)10.70);

	Funcionario funcionario1("Cleber", 19, (float)1450.35);
	funcionario1.InfoFuncionario();
}

void exerciciosCachorro() {
	Cachorro cachorro1;

	cachorro1.setTerreno("Cidade");
	cachorro1.setMesesGestacao(3);
	cachorro1.setRaca("Pastor Alemão");

	cout << "Este cachorro é do terreno " << cachorro1.getTerreno() << " tem " << cachorro1.getMesesGestacao() << " meses de gestação e é da raça " << cachorro1.getRaca() << endl;
	cachorro1.emiteSom();

	Gato gato1;

	gato1.setTerreno("Cidade");
	gato1.setMesesGestacao(2);
	gato1.setRaca("Gato de Botas");

	cout << "Este gato é do terreno " << gato1.getTerreno() << " tem " << gato1.getMesesGestacao() << " meses de gestação e é da raça " << gato1.getRaca() << endl;

	gato1.emiteSom();
}

void exerciciosPersonagem() {
	Personagem personagem1;

	personagem1.setNome("JoaoGamer");
	personagem1.setEmail("JoaoGamer@gmail.com");
	personagem1.setNivel(3);

	cout << "O player " << personagem1.getNome() << " que usa o email " << personagem1.getEmail() << " está no nivel " << personagem1.getNivel() << endl;
	cout << "O player " << personagem1.getNome() << " está prestes a subir de nivel " << endl;
	personagem1.aumentaNivel();
	cout << "Agora o player " << personagem1.getNome() << " está no nivel " << personagem1.getNivel() << endl;
}

void exerciciosPessoaProfessor() {
	Professor professor1;
	
	Pessoa pessoa1("Cleber", 11111111);
	Pessoa pessoa2;

	pessoa2.setNome("Marcos");
	pessoa2.setCpf(2222222);

	Professor professor2(pessoa2, 3000);

	professor1.setNome("João");
	professor1.setCpf(3333333);
	professor1.setSalario(2800);

	cout << "Nome da primeira pessoa é : " << pessoa1.getNome() << " cujo cpf é : " << pessoa1.getCpf() << endl;
	cout << "Nome da segunda pessoa é : " << pessoa2.getNome() << " cujo cpf é : " << pessoa2.getCpf() << endl;
	cout << "Nome do primeiro professor é : " << professor1.getNome() << " cujo cpf é : " << professor1.getCpf() << " e salario : " << professor1.getSalario() << endl;
	cout << "Nome do segundo professor é : " << professor2.getNome() << " cujo cpf é : " << professor2.getCpf() << " e salario : " << professor2.getSalario() << endl;
	professor1.setSaldo(1500);
	professor1.imprimir();
	professor1.imprimir(3000);
	professor2.setSaldo(2800);
	professor2.imprimir();
	professor2.imprimir(1600);
}

int main() {
	setlocale(LC_ALL, "en_US.UTF-8");

	//exerciciosCookie();
	exerciciosCachorro();
	//exerciciosPersonagem();
	//exerciciosPessoaProfessor();

	return 0;
}