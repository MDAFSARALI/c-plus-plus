#include<iostream>
using namespace std;
//Area of the Rectangle: 
int volume(int length,int breadth,int height){
	return length*breadth*height;
}
//Area of the cube: 
int volume(int length){
	return length*length*length;
}
//Area of the Cylinder: 
float volume(float radius,float height){
	return (3.14*radius*radius*height);
}
int main(){
	cout<<"The volume of Rectangle is : "<<volume(2,3,4)<<endl;
	cout<<"The volume of cube is : "<<volume(5)<<endl;
	cout<<"The volume of Cylinder is : "<<volume(2,3)<<endl;
	
	
	
	return 0;
}
