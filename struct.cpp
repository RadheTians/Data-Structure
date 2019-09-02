#include<iostream>
using namespace std;


class student{

	public :
		string name;
		int roll;
		float m1,m2;
	public : 
		void details(student s){

			cout << "Name of Student := " << s.name << endl;
			cout << "Roll No. := " << s.roll << endl;
			cout << "Marks := " << s.m1 << " " << s.m2 << endl;
		}
};

int main(){

	student s;
	cout << "Enter name of student := ";
	cin >> s.name;
	cout << "Roll NO. := ";
	cin >> s.roll;
	cout << "Marks of two subject := ";
	cin >> s.m1 >> s.m2;
	
	s.details(s);
	return 0;
}
