#include<iostream>
using namespace std;
class complex{
	int a,b;
	public :
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		friend complex sumComplex(complex c1,complex c2);
		void printNumber(){
			cout<<"Your number is : "<<a<<" + "<<b<<" i"<<endl;
		}
};
complex sumComplex(complex c1,complex c2){
	complex c3;
	c3.setNumber((c1.a+c2.a),(c1.b+c2.b));
	return c3;
}
int main(){
	complex c1,c2,c3;
	c1.setNumber(1,4);
	c1.printNumber();
	
	c2.setNumber(4,8);
	c2.printNumber();
	c3=sumComplex(c1,c2);
	cout<<"----------------------------------"<<endl;
	c3.printNumber();
	
	return 0;
}
