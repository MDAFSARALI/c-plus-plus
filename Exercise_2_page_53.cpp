// A program containing errors!
# include <iostream>
# include <string>
# include <cstdlib>
void srand(int seed);
int main(){
string message = "\nLearn from your mistakes!";
cout << message << endl;
int len = message.length();
cout << "Length of the string: " << len << endl;
// And a random number in addition:
int a, b;
a = srand(12);
b = rand( a );
cout<< "\nRandom number: " << b << endl;
return 0;
}

