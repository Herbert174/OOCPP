#pragma once

#include <string>

class Animal
{
private:
	std::string terreno = "";

public: 
	std::string getTerreno() const;  //usar const em funções que só recebem e não alteram o valor trazem maior segurança ao codigo
	void setTerreno(std::string terreno);
	virtual void emiteSom() = 0;  //Metodos puramente virtuais (sem implementação " = 0 " ) forçam que as classes filhas 
};                                //implementem esse método para serem aceitas

