#include <iostream>
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

    void operator++()
    {
        ++n;
    }

    void display()
    {
        cout << "Number = " << n << endl;
    }
};

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Number obj(x);

    cout << "Before increment: ";
    obj.display();

    ++obj;

    cout << "After increment: ";
    obj.display();

    return 0;
}