#include<iostream>
using namespace std;

//use of pointers


int main(){
	int myvar = 25;
	int* foo = &myvar; // here is value pointed to foo by myvar;
	int bar = myvar;
	int baz = *foo;

	
	cout << myvar << endl;
	cout << foo << endl;
	cout << bar << endl;
	cout << *foo << endl;
	cout << baz << endl;
	
	return 0;
}
