#include <iostream>
using namespace std;

class Complex
{

public:
    int real, imag;

    Complex operator+(Complex const &ptr)
    {
        Complex ans;
        ans.real = real + ptr.real;
        ans.imag = imag + ptr.imag;
        return ans;
    }

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
};

int main()
{

    Complex c1(10, 20);
    Complex c2(10, 30);
    c1.print();
    c2.print();
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}