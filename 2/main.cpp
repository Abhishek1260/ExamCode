#include <iostream>
using namespace std;

class construct
{

public:
    int a, b;
    construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{

    construct c;

    cout << "A : " << c.a << endl
         << "B : " << c.b << endl;

    return 0;
}