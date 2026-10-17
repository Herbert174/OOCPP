#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <locale.h>

#include "main.h"
#include "Utilitarios.h"
#include "Objetos.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "en_US.UTF-8");

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

	return 0;
}