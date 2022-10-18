#include <iostream>
using namespace std;

class Add
{
    int m, n;

public:
    Add(void);

    void add()
    {
        cout << m + n << endl;
    }
};

Add::Add(void)
{
    m = 10, n = 0;
}

int main()
{

    Add a;
    a.add();

    return 0;
}