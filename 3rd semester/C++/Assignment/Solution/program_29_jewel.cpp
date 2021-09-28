// Write a program to get the movie name, the price of
// an adult ticket price, the price of a child ticket price,
// the number of adult tickets sold, and the number of
// child tickets sold.
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
    cout<< "Program - 29" <<endl<<endl;
}

int main()
{
    ID();
    int aP, cP, aS, cS;
    string movie;

    cout<< "Please Enter a Movie Name : " <<endl;
    getline(cin,movie);


    cout<< "Price of an adult ticket : " <<endl;
    cin>>aP;

    cout<< "Price of a child ticket : " <<endl;
    cin>>cP;

    cout<< "Number of adult tickets sold : "<<endl;
    cin>>aS;

    cout<< "Number of child tickets sold : "<<endl;
    cin>>cS;


    cout<<endl<< "Movie Name : "<<movie<<endl;
    cout<< "Price of an adult ticket : "<<aP<<endl;
    cout<< "Price of a child ticket :  "<<cP<<endl;
    cout<< "Number of adult tickets sold : "<<aS<<endl;
    cout<< "Number of child tickets sold : "<<cS<<endl;
    return 0;
}
/*
Sample Input :

Sample Output :

*/



