#include <iostream>  
using namespace std;  
    
class A {  
    int number = 5;  
    int getNumber() {
        return number;
    }
    friend class B;           // friend class.  
};  
class B {  
    public:  
    void display(A &a) {  
        cout << "value of number is by variable: "<< a.number << endl;
        cout << "value of x is by function: "<< a.getNumber() << endl;  
    }  
};  
int main() {  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}  