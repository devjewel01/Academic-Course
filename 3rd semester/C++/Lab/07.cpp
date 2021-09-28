//write a program to create a class and object.

#include<iostream>
#include<iomanip>
using namespace std;

class Room
{
public:
    double length;
    double weight;
    double height;
    double Calculate_Area()
    {
        return length*weight*height;
    }
};
int main()
{

    Room room;
    cout<< "Enter room's length - ";
    cin>>room.length;
    cout<< "Enter room's weight - ";
    cin>>room.weight;
    cout<< "Enter room's height - ";
    cin>>room.height;

    cout<< "Area of this room - " << fixed << setprecision(5) <<room.Calculate_Area() <<endl;
    return 0;
}
