#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x = 10;
    virtual int area() = 0; // pure vitual funcation and it need to be override in drived class.
};

class Circle : public A
{
public:
    int area()
    {
        cout << x * x << endl;
        return x * x;
    }
};

class Ractangle : public A
{
public:
    int y = 20;

    int area()
    {
        cout << x * y << endl;
        return x * y;
    }
};

int main()
{
    //A x; Can't do this, it's not allowed in c++
    Circle a;
    a.area();
    Ractangle b;
    b.area();
    return 0;
}