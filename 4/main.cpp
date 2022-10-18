#include <iostream>
using namespace std;

class foo
{
public:
    foo()
    {
        x = 0;
    }

    void f(int n)
    {
        x = n * 5;
    }

    void output()
    {
        cout << "X : " << x << endl;
    }

private:
    int x;
};

class baz : public foo
{

public:
    baz()
    {
        s = 0;
    }

    void f1(int n)
    {
        s = n * 10;
    }

    void output()
    {
        foo::output();
        cout << "S : " << s << endl;
    }

private:
    int s;
};

int main()
{

    baz s1;
    s1.f(10);
    s1.f1(5);
    s1.output();

    return 0;
}