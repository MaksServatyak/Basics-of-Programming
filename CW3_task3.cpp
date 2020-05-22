#include <iostream>
#include<cstring>
using namespace std;
struct Kolo
{
    //поля
    int radius;
    int length;
    //методи
    float Area()
    {
        float s = 3.14 * radius * radius;
        return s;
    }
    //конструктори
    Person(int radius,int length)
    {
        (*this).length = length;

       
        (*this).radius = radius;
    }
};

int main()
{
    Kolo kolo{ 3,45 };
    cout<<kolo.Area;
    return 0;
}


