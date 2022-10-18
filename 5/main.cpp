#include <iostream>
using namespace std;

// creating a class
class Add
{

public:
    int a, b;
    int sum;

    Add()
    {
        a = 0;
        b = 0;
    }

    Add(int m, int n)
    {
        a = m;
        b = n;
    }

    Add(const Add &a1)
    {
        a = a1.a;
        b = a1.b;
    }

    void add()
    {
        sum = a + b;
    }

    void print()
    {
        cout << "SUM : " << sum << endl;
    }
};

int main()
{

    Add a1;
    Add a2(20, 30);
    Add a4(50, 60);
    Add a3(a4);

    a1.add();
    a1.print();

    a2.add();
    a2.print();

    a3.add();
    a3.print();

    a4.add();
    a4.print();

    return 0;
}