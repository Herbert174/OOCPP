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
	cookie1.preco = (float)15.90;

	cout << "Digite o sabor do segundo cookie : ";
	lerPalavra(sabor);

	Cookie cookie2(sabor);
	cookie2.preco = (float)14.30;
	
	cookie2.formato = "Estrela";

	Cookie cookie3;
	cookie3.preco = (float)16.70;

	cout << "Digite o sabor do terceiro cookie : ";
	lerPalavra(sabor);
	cookie3.sabor = sabor;

	cout << endl;
	cout << "Cookie 1 : " << cookie1.sabor;
	cout << " custa R$ : " << cookie1.preco;
	cout << " Formato : " << cookie1.formato;

	cout << endl;
	cout << "Cookie 2 : " << cookie2.sabor;
	cout << " custa R$ : " << cookie2.preco;
	cout << " Formato : " << cookie2.formato;

	cout << endl;
	cout << "Cookie 3 : " << cookie3.sabor;
	cout << " custa R$ : " << cookie3.preco;
	cout << " Formato : " << cookie3.formato;
	cout << endl;

	cookie1.comer();
	cookie1.avaliar(9);

	cookie2.comer();
	cookie2.avaliar(10);

	cookie3.comer();
	cookie3.avaliar(8);

	cout << "Valor do primeiro cookie " << cookie1.getPreco() << endl;
	cookie1.pagar((float)18.00);

	cout << "Valor do segundo cookie " << cookie2.getPreco() << endl;
	cookie2.pagar((float)14.00);

	cout << "Valor do terceiro cookie " << cookie3.getPreco() << endl;
	cookie3.pagar((float)16.70);

	Funcionario funcionario1("Cleber", 19, (float)1450.35);
	funcionario1.InfoFuncionario();

	return 0;
}