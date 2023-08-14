#include <iostream> // Just one header file in a line
#include <string>
#include <cstdlib> // Prototypes of functions
// void srand( unsigned int seed);
// int rand(void);
// or:
// #include <stdlib.h>
using namespace std; // Introduces all names of namespace
// std into the global scope.
int main()
{
string message = "\nLearn from your mistakes!";// =
cout << message << endl;
// SOLUTIONS ■ 55
int len = message.length();
// instead of: length(message);
cout << "Length of the string: " << len << endl;
// And another random number:
int b; // Variable a is not needed.
srand(12); // instead of: a = srand(12.5);
b = rand(); // instead of: b = rand(a);
cout << "\nRandom number: " << b << endl;
return 0;
}
