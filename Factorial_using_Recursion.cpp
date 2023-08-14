#include<iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int number;
	cout<<"The number which you want to find out the factorial:"<<endl;
	cin>>number;
	cout<<"The fatorial of the "<<number <<" is "<<factorial(number)<<endl;
	return 0;
}
