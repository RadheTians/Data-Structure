#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    long long ro;
    string name;
    static string branch;

    void setValue(long long ro, string name){
        this->ro = ro;
        this->name = name;
    }
    void display(){
        cout << "Roll No. :" << ro << endl << "Name: " << name << endl;
    }
    static void disPlaybranch(){
        cout << "Branch: " << branch <<endl;
    }

};

string Student::branch = "CSE";
int main(){

 
    Student s;
    s.setValue(17010115,"Radhe Raman Tiwari");
    s.display();
    Student::disPlaybranch();
    s.setValue(17010111,"RadheTians");
    s.display();
    Student::disPlaybranch();

    return 0;
}