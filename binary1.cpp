#include<iostream>
using namespace std;

class Addition
{
private:
    int n1, n2, n3;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> n1;

        cout << "Enter second number: ";
        cin >> n2;
    }

    void add()
    {
        n3 = n1 + n2;
    }

    void display()
    {
        cout << "Addition of two numbers: " << n3 << endl;
    }
};

int main()
{
    Addition obj;

    obj.input();
    obj.add();
    obj.display();

    return 0;
}