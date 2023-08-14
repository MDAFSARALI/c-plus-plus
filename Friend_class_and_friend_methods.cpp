//Class 27: Friend class & Member friend function.
#include<iostream>
using namespace std;
class complex;
class calculator{
	int sum(int a,int b){
		return (a+b);
	}
	public:
	int sumRealcomplex(complex ,complex );
	int sumImgcomplex(complex ,complex );
};
class complex{
	int a,b;
	public:
		friend int  calculator::sumRealcomplex(complex c1,complex c2);
		friend int  calculator::sumImgcomplex(complex c1,complex c2);
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"Your number is :"<<a<<" + "<<b<<" i"<<endl;
		}	
};
int calculator::sumRealcomplex(complex c1,complex c2){
	return (c1.a+c2.a);
}
int calculator::sumImgcomplex(complex c1,complex c2){
	return (c1.b+c2.b);
}

int main(){
	complex c1,c2;
	c1.setNumber(1,4);
	c1.printNumber();
	
	c2.setNumber(4,8);
	c2.printNumber();
	calculator cal;
	int resR=cal.sumRealcomplex(c1,c2);
	int resI=cal.sumImgcomplex(c1,c2);
	
	
	cout<<"The sum of Real part is : "<<resR<<endl;
	cout<<"The sum of Imginary part is : "<<resI<<endl;	
	return 0;
}
