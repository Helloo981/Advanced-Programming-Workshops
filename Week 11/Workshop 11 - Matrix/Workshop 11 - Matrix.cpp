#include <iostream>
#include <stdlib.h>

using namespace std;
#include "matrix.h";


int main()
{
    matrix<int, 5, 5> i_mat(5, 5); //5x5 matrix
    i_mat.setElement(0, 0, 10);
    cout << i_mat.getElement(0, 0) << endl; //7.5

    matrix<float, 7, 7> f_mat(5, 5); //7x7 matrix
    f_mat.setElement(0, 0, 7.5);
    cout << f_mat.getElement(0, 0) << endl; //7.5
}