#pragma once
#include <iostream>


using namespace std;
template <typename T, int MAXROWS, int MAXCOLS>


class matrix
{
private:
    T arr[MAXROWS][MAXCOLS];
    int rows{};
    int cols{};
public:
    matrix() { rows = 0; cols = 0; } //initialise rows and cols
    matrix(int rows, int cols) {
        this->rows = rows;
    }
    void setElement(int row, int col, T val) {
        this->arr[row][col] = val;
    }
    T getElement(int row, int col) {
        return arr[row][col];
    }
};