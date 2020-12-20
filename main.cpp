/*
File Name: main.cpp
Created On: 12/18/2020
Author: Guangwei Zhou

Demonstration of the matrix library's correctness 
*/

#include "matrix.cpp"
#include <string>
#include <iostream>


int main() {
    // Matrix Initialization
    matrix<int> a; // Empty matrix
    matrix<char> b(3, 6, 'z'); // M*N matrix
    matrix<float> c({ {1.1, 2.2}, {3.3, 4.4} }); // Initialize with vector

    // Print these matrices
    a.print();
    b.print();
    c.print(); // nothing printed

    // Matrix Transpose
    matrix<int> AA(3, 6, 100);
    matrix<char> BB(2, 2, 'w');
    matrix<float> CC(0, 0, 1.1);
    std::cout << "Before transpose:" << std::endl;
    AA.print();
    BB.print();
    CC.print();
    matrix<int> AA_transposed = AA.transpose();
    matrix<char> BB_transposed = BB.transpose();
    matrix<float> CC_transposed = CC.transpose();
    std::cout << "After transpose:" << std::endl;
    AA_transposed.print();
    BB_transposed.print();
    //CC_transposed.print();

    // Matrix Multiplication
    matrix<int> x1(1, 3, 10); // int matrix
    matrix<int> x2(3, 2, 20);
    auto x3 = x1 * x2;
    std::cout << "Multiplication result:" << std::endl;
    x3.print();
    
    matrix<double> x4(3, 4, 2.78); // double matrix
    matrix<double> x5(4, 2, 3.1415);
    auto x6 = x4 * x5;
    std::cout << "Multiplication result:" << std::endl;
    x6.print();
    
    
    matrix<int> x7(3, 0, 2); // empty matrix
    matrix<int> x8(0, 2, 3);
    auto x9 = x7 * x8;
    std::cout << "Multiplication result:" << std::endl;
    x9.print();

    matrix<int> x10({ {1,2,3}, {4,5,6}, {7,8,9} }); 
    matrix<int> x11({ {1,4,7}, {2,5,8}, {3,6,9} });
    auto x12 = x10 * x11;
    std::cout << "Multiplication result:" << std::endl;
    x12.print();

    return 0;
}