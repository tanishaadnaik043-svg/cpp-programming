#include<iostream>
using namespace std;

class Number
{
private:
    int n;
    
public:
    Number(int x)
    {
        n = x;
    }

    void operator-()
    {
        n = -n;
    }

    void display()
    {
        cout << "= " << n << endl;
    }
};

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Number obj(x);

    cout << "No Before (-) operator: ";
    obj.display();

    -obj;

    cout << "No After (-) operator: ";
    obj.display();

    return 0;
}