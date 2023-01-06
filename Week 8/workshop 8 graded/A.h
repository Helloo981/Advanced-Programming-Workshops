#pragma once

#include <iostream>

using namespace std;

class A {
private:
	int value; //this must stay private
public:
	A(int v) : value(v) {}
	void print() { cout << "My value is " << value << endl; }
	friend A add(A, A); //allows function to access private data in class
	
	//binary overload for +
	//const = constant, value wont change as its been set as constant
	//& = address operator??
	A operator+(const A& Aa) {
		//take current value and add it to current number
		int result = value + Aa.value;
		return A(result);
	}
	
	A operator++(int) {
		int add1 = value + 1;
		return add1;
	};
};