# matrix_library
A linear algebra library written in C++ that performs M*N matrix multiplication and transpose

## How to Use
### Step 1
Create a main.cpp file in which you include "matrix.cpp" 
### Step 2
In terminal, run $cmake .
If you want to use the library in multiple files, modify the CMakeList.txt by adding file names under "add_executable"

## Library Documentation
### Matrix Representation
Matrix Initialization
---
* **matrix \<typename> a(row_size,column_size, const initial_value)**
	
	Eg:	
		
		matrix <int> a(2,2,4);
	
		Matrix a will be:
		4 4 
		4 4
		
* **matrix \<typename> a(row_size,column_size)**
	
	Eg:
		
		matrix <int> a(2,2);
		
		Matrix a will be:
		0 0
		0 0
		
* **matrix \<typename> a;**
	
	Eg:
		
		matrix <int> a;

