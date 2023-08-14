#include<iostream>
using namespace std;
int main(){
    float principle=1000;
    float time=2.5;
    float rate=8.5;
    float simpleInterest=(principle*time*rate)/100;
    cout<<simpleInterest;
    return 0;
}