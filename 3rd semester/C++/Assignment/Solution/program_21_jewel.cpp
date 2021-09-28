//Write a program to create a class and object.
#include<iostream>
#include<iomanip>
using namespace std;
void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 21" <<endl<<endl;
}
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
    ID();
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
