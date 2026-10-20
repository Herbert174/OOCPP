#pragma once
#include "Animal.h"
class Mamifero : public Animal {
private:
	int mesesGestacao = 0;

public:
	int getMesesGestacao() const;
	void setMesesGestacao(int mesesGestacao);
};

