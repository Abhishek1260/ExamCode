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

    Complex operator-()
    {
        real = -real;
        imag = -imag;
    }

    void print()
    {
        cout << real << " + i " << imag << endl;
    }
};

int main()
{

    Complex c1(10, 20);
    c1.print();
    -c1;
    c1.print();

    return 0;
}