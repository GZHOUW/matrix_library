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
---
* **matrix \<type> a;**

		matrix<int> a;
		Matrix a will be:
		(empty)


* **matrix \<type> a(row_size, column_size, value)**

		matrix<int> a(2,2,4);
	
		Matrix a will be:
		4 4 
		4 4
* **matrix \<type> a(vector\<vector\<type>>)**

		matrix<float> c({ {1.1, 2.2}, {3.3, 4.4} });
	
	 	Matrix a will be:
		1.1 2.2 
		3.3 4.4
		

