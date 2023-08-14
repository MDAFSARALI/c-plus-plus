#include<iostream>
using namespace std;
int main(){
	int i=1;
	for (; ;){
		if (i<=100){
			cout<<i<<endl;
		}
		else{
			break;
		}
		i++;
	}
	return 0;
}