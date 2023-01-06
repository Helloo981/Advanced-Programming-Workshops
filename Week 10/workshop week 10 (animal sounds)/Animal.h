#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Animal
{
public:
	Animal() {}
	virtual void speak(void) = 0; //virtual - designed to be overloaded
};
