//write a program to demonstrate inline function.

#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;


inline int square(int n)
{
	return n*n;
}
int main()
{
	cout << "The square of 15 is: " << square(15) << endl;
	return 0;
}
