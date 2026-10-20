#pragma once

#include "Usuario.h"
#include <iostream>

class Personagem : public Usuario{
private:
	int nivel = 0;

public:
	int getNivel();
	void setNivel(int nivel);
	void aumentaNivel();
};

