#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:


    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void area()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;          
    Rectangle r2(10, 5);   
    Rectangle r3(r2);      

    cout << "Rectangle 1:" << endl;
    r1.area();

    cout << "\nRectangle 2:" << endl;
    r2.area();

    cout << "\nRectangle 3 (Copied):" << endl;
    r3.area();

    return 0;
}