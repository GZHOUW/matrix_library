# matrix_library
A linear algebra library written in C++ that performs M*N matrix multiplication and transpose

## How to Use
### Step 1
Create a main.cpp file in which you include "matrix.cpp" 
### Step 2
In terminal, run $cmake .
If you want to use the library in multiple files, modify the CMakeList.txt by adding file names under "add_executable"

## Library Documentation
### Matrix Initialization

* **Initialize empty matrix**

		matrix<int> a;
		
		Matrix a will be:
		(empty)


* **Initialize with row_size, col_size, and val**

		matrix<int> b(2, 2, 4);
	
		Matrix b will be:
		4 4 
		4 4
* **Initialize with 2D vector**

		matrix<int> c({ {1, 2}, {3, 4} });
	
	 	Matrix c will be:
		1 2
		3 4

### Matrix in Different Types


* **\<char> matrix**

		matrix<char> d(2, 2, 'w');
	
		Matrix d will be:
		w w 
		w w
* **\<double> matrix**

		matrix<double> e({ {1.1, 2.2, 3,3}, {4,4, 5.5, 6.6} });
	
	 	Matrix e will be:
		1.1 2.2 3.3
		4.4 5.5 6.6
		
### Matrix Computation and Manipulation
* **Print the matrix**

		e.print();
		
		The following will be printed:
		1.1 2.2 3.3
		4.4 5.5 6.6

* **Transpose the matrix:** returns a transposed copy of the input matrix.

		matrix<double> e_transposed = e.transpose();
		
		Matrix e will still be:
		1.1 2.2 3.3
		4.4 5.5 6.6
		
		Matrix e_transposed will be:
		1.1 4.4
		2.2 5.5
		3.3 6.6

* **Matrix Multiplication:** use overloaded '*' operator to multiply of two matrices with dimensions (A,B) and (B,C), resulting (A,C)
		
		matrix<int> X({ {1,2,3}, {4,5,6}, {7,8,9} }); 
		matrix<int> Y({ {1,4,7}, {2,5,8}, {3,6,9} });
		matrix<int> Z = X * Y;
		
		Matrix Z will be:
		14  32  50
		32  77  122
		50  122 194
