#include <iostream>
using namespace std;

class Complex
{
    float real;
    float  imag;

public:

    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(Complex c)
    {
        return Complex((real * c.real - imag * c.imag),(real * c.imag + imag * c.real));
    }


    Complex operator/(Complex c)
    {
        float d = c.real * c.real + c.imag * c.imag;

        return Complex((real * c.real + imag * c.imag) / d,(imag * c.real - real * c.imag) / d);
    }

    void display()
    {
        cout << real;
        if (imag >= 0)
        {

            cout << " + " << imag << "i"<<endl;
        }else{
            cout << " - " << -imag << "i"<<endl;
        }
    }
};

int main()
{
    float r1, i1, r2, i2;

    cout << "Enter first complex number (real imag): ";
    cin >> r1 >> i1;

    cout << "Enter second complex number (real imag): ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);   
    Complex c2(r2, i2);
    Complex result;

    cout << "\nAddition: ";
    result = c1 + c2;
    result.display();

    cout << "Subtraction: ";
    result = c1 - c2;
    result.display();

    cout << "Multiplication: ";
    result = c1 * c2;
    result.display();

    cout << "Division: ";
    result = c1 / c2;
    result.display();

    return 0;
}