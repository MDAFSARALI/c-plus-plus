#include<iostream>
#include<cstring>
using namespace std;
float Interest(float money,float const factor=0.20){
	return money*factor;
}
int main(){
	int amount;
	cout<<"Please Enter the Amount you wnat to deposite:"<<endl;
	cin>> amount;
	cout<<"The amount you will get on "<< amount << " of deposite is :"<<Interest(amount)<<endl;
	cout<<"The amount you will get on "<< amount << " of deposite is :"<<Interest(amount,0.30)<<endl;
//	In the line number 11 we have tried to update the and shockingly that updated its mean that the const key word will be 
//Effective when we are passing the pointer variables 


	return 0;
}
