#include<iostream>
using namespace std;
float Money(float amount,float factor=0.10){
	return amount*factor;
}
int main(){
	float amount;
	cout<<"Please enter the amount :"<<endl;
	cin>>amount;
	cout<<"The Interest you will get on" <<amount<<" is "<<Money(amount)<<endl;
	cout<<"The Interest VIP will get on" <<amount<<" is "<<Money(amount,0.20)<<endl;
//	In the line number 11 we have overwrite the fator by 0.20 means 20%	
	return 0;
}
