#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x;
    int y;

    A() {}

    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void assign(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void assign()
    {
        cout << "X: " << x << " Y: " << y << endl;
    }
};
int main()
{
    A *a = new A(1, 2);
    a->assign();
    a->assign(5, 6);
    a->assign();
    return 0;
}