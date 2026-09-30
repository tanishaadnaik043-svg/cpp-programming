#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    c3 = c1.add(c2);

    cout << "Addition: ";
    c3.display();

    return 0;
}