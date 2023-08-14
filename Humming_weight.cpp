//LeetCode_Problem_solve :
//191:Counting the no of 1 bit;(Humming weight)
#include<iostream>
using namespace std;
int main(){
	int count=0;
	 int input;
	cout<<"Please enter the input"<<endl;
	cin>>input;
	while (input!=0){
		if(input&1){
			count++;
		}
		input=input<<1;
	}	
	cout<<"The no of 1 present in the input is : "<<count<<endl;	
	return 0;
}







