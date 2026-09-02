#include <iostream>
using namespace std;

class Employee
{
    int employeeId;
    string name;
    float salary;

public:

    Employee()
    {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, float s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;                        
    Employee e2(101, "Tanisha", 50000);   
    Employee e3(e2);                     

    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    cout << "\nCopy Constructor:" << endl;
    e3.display();

    return 0;
}