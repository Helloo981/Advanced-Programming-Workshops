#pragma once
#include "Animal.h";

class Sheep : public Animal
{
public:
	Sheep() {}
	virtual void speak(void) {
		cout << "Sheep says: \t\tbaa!" << endl;
	}
};