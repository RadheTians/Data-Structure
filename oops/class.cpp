#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    long long ro;
    string name;
    string branch;

    void setValue(long long ro, string name, string branch){
        this->ro = ro;
        this->name = name;
        this->branch = branch;
    }
    void display(){
        cout << "Roll No. :" << ro << endl << "Name: " << name << endl << "Branch: " << branch << endl;
    }

};

int main(){

    Student s;
    s.setValue(17010115,"Radhe Raman Tiwari","CSE");
    s.display();

    s.setValue(17010111,"RadheTians","CSE");
    s.display();

    return 0;
}