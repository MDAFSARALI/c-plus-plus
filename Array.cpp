#include<iostream>
using namespace std ;
int main (){
//	Array in c++:
//int marks[4]={23,45,59,80};
int marks[]={23,45,59,80};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
int math_marks[4];
math_marks[0]=10;
math_marks[1]=20;
math_marks[2]=500;
math_marks[2]=30;//We can update the value of the array further...

math_marks[3]=40;math_marks[4]=50;math_marks[5]=60;
cout<<"These are the math marks of 5 students are :\n";
	for (int i=0;i<=5;i++){
	cout<<math_marks[i]<<endl;
	}
	
	return 0;
}
