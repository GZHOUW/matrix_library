/*
File Name: matrix.h
Created On: 12/18/2020
Author: Guangwei Zhou

A linear algebra library that performs matrix multiplication and transpose
*/

// Create a template for matrix
#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <vector>
#include <string>

template <typename T>
class matrix
{
private:
    int n_row;
    int n_col;
    std::vector<std::vector<T> > m;

public:
    // Constructors
    matrix();                             // empty matrix
    matrix(int, int, T);                  // n_row, n_col, element
    matrix(std::vector<std::vector<T> >); // from a 2D vector

    void print();       // prints this matrix
    matrix transpose(); // transpose
    // matrix multiply(matrix, matrix);

    matrix<T> operator*(const matrix&);
    //matrix<T> operator*=(const matrix&);
};

#endif