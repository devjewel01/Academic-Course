//Write a program to demonstrate inline function.
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;


void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 40" <<endl<<endl;
}

inline int square(int n)
{
	return n*n;
}
int main()
{
	cout << "The square of 15 is: " << square(15) << endl;
	return 0;
}
