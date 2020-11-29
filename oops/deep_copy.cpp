#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    string name;
    int* sem;
    Student(){
        sem = new int;
    }
    Student(Student &copy){
        roll = copy.roll;
        name = copy.name;
        sem = new int;
        *sem = *(copy.sem);
    }
    void setData(int roll,string name,int sem){
        this->name = name;
        this->roll = roll;
        *(this->sem) = sem;

    }
    void disPlay() {
        cout << "Roll No. : " << roll << endl << "Name : " << name << endl << "Semesetr: " << *sem << endl; 
    }
};

int main() {
    Student s;
    s.setData(115,"Radhe Raman Tiwari",7);
    Student s1 = s;
    s1.disPlay();
    return 0;
}