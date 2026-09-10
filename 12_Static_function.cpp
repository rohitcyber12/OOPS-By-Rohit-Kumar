#include <iostream>
using namespace std;

class Calculator
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int subtract(int a, int b)
    {
        return a - b;
    }

    static int multiply(int a, int b)
    {
        return a * b;
    }

    static float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main()
{
    int a, b;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"URN:2514169"<<endl;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nAddition = " << Calculator::add(a, b);
    cout << "\nSubtraction = " << Calculator::subtract(a, b);
    cout << "\nMultiplication = " << Calculator::multiply(a, b);

    if (b != 0)
        cout << "\nDivision = " << Calculator::divide(a, b);
    else
        cout << "\nDivision not possible";

    return 0;
}