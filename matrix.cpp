/*
File Name: matrix.cpp
Created On: 12/18/2020
Author: Guangwei Zhou

A linear algebra library that performs matrix multiplication and transpose
*/

#include "matrix.h"
#include <iostream>

// Constructors
template <typename T>
matrix<T>::matrix() { // empty matrix
    n_col = 0;
    n_row = 0;
    // m is empty
}


template <typename T>
matrix<T>::matrix(int r, int c, T val) { // n_row, n_col, element
    if (r < 0 or c < 0) {
        throw std::invalid_argument("Matrix dimension cannot be negative.");
    }
    else if (r==0 or c == 0){ // empty matrix
        n_row = 0;
        n_col = 0;
    }
    else {
        n_row = r;
        n_col = c;
        std::vector<std::vector<T> > temp(r, std::vector<T>(c, val));
        m = temp;
    }
    
}

template <typename T>
matrix<T>::matrix(std::vector<std::vector<T> > v) { // from a 2D vector
    n_row = v.size();
    if (n_row == 0) {
        n_col = 0;
    }
    else {
        n_col = v[0].size();
    }
    m = v;
}

// print this matrix
template <typename T>
void matrix<T>::print() {
    for (unsigned int i = 0; i < n_row; i++) {
        for (unsigned int j = 0; j < n_col; j++) {
            std::cout << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

// transpose: returns a transposed copy of this matrix
template <typename T>
matrix<T> matrix<T>::transpose() {
    std::vector<std::vector<T> > m_transposed(n_col, std::vector<T>(n_row, 0));
    
    for (unsigned int i = 0; i < n_row; i++) {
        for (unsigned int j = 0; j < n_col; j++) {
            m_transposed[j][i] = m[i][j];
            //std::cout << m_transposed[j][i] << std::endl;
        }
    }
    return matrix(m_transposed);
}

// Perform operator overload
// Matrix multiplication: Operator *, supports multiplication of two matrices with dimensions (A,B) and (B,C) resulting (A,C)
template <typename T>
matrix<T> matrix<T>::operator*(const matrix& other) {
    if (this->n_col == other.n_row) {
        matrix<T> result(this->n_row, other.n_col, 0);
        for (unsigned int i = 0; i < this->n_row; i++) {
            for (unsigned int j = 0; j < other.n_col; j++) {
                for (unsigned int k = 0; k < other.n_row; k++) {
                    result.m[i][j] += this->m[i][k] * other.m[k][j];
                }
            }
        }
        return result;
    }
    else {
        throw std::invalid_argument("Matrix dimensions do not match.");
    }
}
