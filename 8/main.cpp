#include <iostream>
using namespace std;

class Complex
{

public:
    int real, imag;

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int a, int b)
    {
        real = a;
        imag = b;
    }

    void print()
    {
        cout << real << " + i " << imag << endl;
    }

    void operator=(Complex &s1)
    {
        real = s1.real;
        imag = s1.imag;
    }
};

int main()
{

    Complex c1(10, 20);
    c1.print();

    Complex c2(20, 50);
    c2.print();

    c1 = c2;
    c1.print();

    return 0;
}