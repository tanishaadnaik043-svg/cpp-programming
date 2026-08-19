#include<iostream>
using namespace std;
class Complex
{
    int real,image;
    public:
    void inputdetails()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter Imaginary part:";
        cin>>image;
    }
    void add(Complex c1,Complex c2)
    {
        real= c1.real+c1.real;
        image=c1.image+c2.image;
    }
    void substract(Complex c1,Complex c2)
    {
        real=c1.real-c1.real;
        image=c1.image-c2.image;
    }
    void dispaly()
    {
        cout<<real<<"+"<<image<<"i"<<endl;
    }

};
int main()
{
    Complex c1,c2,sum,difference;
    cout<<"Enter First COmplex Number:"<<endl;
    c1.inputdetails();
    cout<<"Enter Second Complex Number:"<<endl;
    c2.inputdetails();
    sum.add(c1,c2);
    difference.substract(c1,c2);

    cout<<"ADDITION=";
    sum.dispaly();

    cout<<"DIFFERENCE=";
    difference;
} 