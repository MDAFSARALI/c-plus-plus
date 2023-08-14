#include<iostream>
using namespace std;
//	structure is a user define data type:(for different types of data memebers)
//struct employee{
//	int data;
//	int favChar;
//	float salary;
//};
union money{
	int rice;
	float pound;
	char car;
};





//int main(){
//struct employee harry;
//struct employee subham;
//struct employee Rohan;
//harry.data=1;
//harry.favChar ='h';
//harry.salary=12.50;
//cout<<harry.salary<<endl;


//...........................................
// typedef struct employee{
//	int data;
//	int favChar;
//	float salary;
//}ep;
//int main(){
//ep harry;
//ep subham;
//ep Rohan;//Look like object creation like java ...
//harry.data=1;
//harry.favChar ='h';
//harry.salary=12.50;
//cout<<harry.salary<<endl;
//Rohan.data=2;
//Rohan.favChar ='6';
//Rohan.salary=5.000532;
//cout<<Rohan.salary<<endl;

//................This is for union...........
int main(){
	enum Meal{breakfast,lunch,dinner
	};
	Meal m1=lunch;
	cout<<m1<<endl;
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;
//	union money m1;
//	m1.rice=12;
//	m1.pound=15.2;
//	m1.car='c';
//	cout<<m1.rice<<endl;	
//	cout<<m1.pound<<endl;
//	cout<<m1.car<<endl;
	return 0;
}	
	
	
	
//}
