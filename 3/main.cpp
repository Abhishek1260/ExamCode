#include <iostream>
using namespace std;

class points
{
public:
    int x, y;
    points()
    {
        x = 0;
        y = 0;
    }

    points(int a, int b)
    {
        x = a;
        y = b;
    }

    points(const points &p2)
    {
        x = p2.x;
        y = p2.y;
    }

    void print()
    {
        cout << "X : " << x << endl
             << "Y : " << y << endl;
    }
};

int main()
{

    points p1(50, 10);
    points p2;
    points p3(p1);

    p1.print();
    cout << endl;
    p2.print();
    cout << endl;
    p3.print();

    return 0;
}