#include <iostream>
using namespace std;
 void print(int x) {
 cout << "Printing integer: " << x << endl;
 }
 void print(double y) {
 cout << "Printing double: " << y << endl;
 } 
int main() {
 int a = 42;
 double b = 3.14;
 print(a); // Which print function should be called?
 print(b); // Which print function should be called?
 return 0;
 }