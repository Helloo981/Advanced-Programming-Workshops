#include <iostream>
#include "A.h";

int main()
{
    A a1 = A(2);
    A a2 = A(3);

    a1.print();
    a2.print();

    A a3 = add(a1, a2); //add function
    a3.print(); //this should display "my value is 5"

    A a4 = a1 + a2 + a3; //binary operator
    a4.print();

    A a5 = a4++; //unary operator
    a5.print();

    return 0;
}

