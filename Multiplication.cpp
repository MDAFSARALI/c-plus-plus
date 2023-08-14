#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Please enter a number"<<endl;
	cin>>number;
	cout<<"The multiplication table of "<< number <<" is: "<<endl;
	for (int i=1;i<=10;i++){
		cout<<i*number<<endl;
	}
	return 0;
}
