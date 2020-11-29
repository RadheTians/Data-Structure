#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    string name;

    Student(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }
    ~Student() {
        cout << "Object is gone!!" <<endl;
    }
    void display() {
        cout << "Roll No. : " << roll << endl << "Name : " << name << endl; 
    }
};
void display(Student* s) {
    s->display();
}
int main() {
    Student s(115,"Radhe Raman Tiwari");
    s.display();
    Student s1 = Student(120,"RadheTians");
    s1.display();

    return 0;
}