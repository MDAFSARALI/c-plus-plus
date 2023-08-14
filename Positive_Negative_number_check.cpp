#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	/*if(a>0){
		cout<<"The entered number is +ve :"<<endl;
	}
	else{
		if(a<0){
			cout<<"The entered number is -ve : "<<endl;
		}
		cout<<"Entered number is neithe +ve not -ve  :"<<endl;
	}*/
//	Other short method: 
if(a>0){
		cout<<"The entered number is +ve :"<<endl;
	}
else if(a<0){
	cout<<"The entered number is -ve :"<<endl;
}
else{
	cout<<"The entered number is 0"<<endl;
}
	cout<<"Thanks for using my code:";
	return 0;
}
