#pragma once
#include "Animal.h";

class Cow : public Animal
{
public:
	Cow() {}
	void speak(void) {
		cout << "Cow says: \t\tmoo!" << endl;
	}
};