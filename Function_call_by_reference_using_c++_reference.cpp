#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a,b;
	cout<<"Please enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;
	swap(a,b);
	cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;
	return 0;
}
