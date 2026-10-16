#include "Utilitarios.h"

#include <iostream>

void limpaTela() {
	system("LCS");
}

void lerNumero(float& numero) {
	while (!(std::cin >> numero)) {
		std::cout << "Erro você não digitou um número, insira apenas números : ";
		std::cin.clear(); //Remove a flag de erro
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpa o buffer
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpa o buffer
}

void lerLetra(char& letra) {
	while ((std::cin >> letra)) {
		if (isalpha(static_cast<unsigned char>(letra))) { //Verifica se é um caracter do alfabeto (a ~ z) (A ~ Z)
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta o texto incorreto do buffer
			return;
		}
		std::cout << "Apenas letras são validas! " << std::endl;
		std::cout << "Digite uma letra : ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta o texto incorreto do buffer
	}
}

void lerPalavra(std::string& palavra) {
	std::cin >> palavra;
}

void lerFrase(std::string& frase) {
	getline(std::cin, frase);
}