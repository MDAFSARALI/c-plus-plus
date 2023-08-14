#include<iostream>
using namespace std;
int main(){
//	What is pointer ---> It is a data type ...Which holds the address of other data types ,
	int a=3;
	int* b=&a;//(&) is address of operators and (*) is derefrenc operators...
	cout<<"The address of a is :"<<b<<endl;//The will produce the address of a ...
	cout<<"The address of a is :"<<&a<<endl;
//	We can find out the value at the basis of address of any memory position 
//by usning (*) star operators 
	cout<<"The value of a is :"<<*b<<endl;//This line will produce the output as 3
	
//	Pointer to pointer...
	int **c=&b;
	cout<<"Address of b is :"<<&b<<endl;
	cout<<"Address of b is :"<<c<<endl;
	cout<<"Value of a is :"<<**c<<endl;
	return 0;
}

