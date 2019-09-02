#include<iostream>
using namespace std;

int main(){

	int a,b,*p,*q;
	cout << "Enter the value of A and B :== ";
	cin >> a >> b;
	
	p = &a;
	q = &b;
	cout << "Address of A by Pointer := " << p << endl;
	cout << "Address of A by Mpercente := " << &a << endl;
	cout << "Value of A by Pointer := " << *p << endl;
	cout << "Value of A by Asterick and Mpercente := " << *p << endl;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	
	cout << "The value of A and B after swapping := " << *p << " " << *q << endl;
	return 0;
}
