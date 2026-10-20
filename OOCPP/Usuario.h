#pragma once

#include <string>

class Usuario{
private:
	std::string nome = "";
	std::string email = "";

public:
	std::string getNome();
	std::string getEmail();
	void setNome(std::string nome);
	void setEmail(std::string email);
};
