#include<iostream>
using namespace std;
int fibonacci(int n){
	if (n<=2){
		return 1;
	}
	return fibonacci(n-2)+fibonacci(n-1);
}
int main(){
	int position;
	cout<<"The place of fibonacci series which you want to see: "<<endl;
	cin>>position;
	cout<<"The position at "<<position <<" is "<<fibonacci(position)<<endl;	
	return 0;
}
