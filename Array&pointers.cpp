# include <iostream>
using namespace std;
int main(){
//	Pointers and arrays:
int marks[]={1,2,3,4,5,6,7,8,9};
int *p=marks;
cout<<"The value of *p is "<<*p<<endl;	
cout<<"The value of marks[1] is "<<*(p+1)<<endl;
cout<<"The value of marks[2] is "<<*(p+2)<<endl;
cout<<"The value of marks[3] is "<<*(p+3)<<endl;
cout<<"The value of marks[4] is "<<*(p+4)<<endl;
cout<<"The value of marks[5] is "<<*(p+5)<<endl;
cout<<"The value of marks[6] is "<<*(p+6)<<endl;
cout<<"The value of marks[7] is "<<*(p+7)<<endl;
cout<<"The value of marks[8] is "<<*(p+8)<<endl;

	
	return 0;
}
