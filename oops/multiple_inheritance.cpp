#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public A, public B
{
    void view()
    {
        A ::display(); // Calling the display() function of class A.
        B ::display(); // Calling the display() function of class B.
    }
};
int main()
{
    C c;
    c.B::display(); // Calling the display() function defined in B class.
    return 0;
}