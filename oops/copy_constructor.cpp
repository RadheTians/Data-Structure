#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    string name;

    Student(int roll,string name) {
        this->roll = roll;
        this->name = name;
    }
    
    Student(Student &copy) {
        roll = copy.roll;
        name = copy.name;
    }

    void display() {
         cout << "Roll No. : " << roll << endl << "Name : " << name << endl; 
    }

};

int main() {
    Student s(115,"RadheTians");
    Student s1(s);
    s1.display();

    Student s2 = s;
    s2.display();

    return 0;
}