#include<bits/stdc++.h>
using namespace std;

class A {
	public:
	
	int x;
	int y;
	
	void display(){
		cout << x << " " << y <<endl;
		
	}
};

class B: public A {

	public:
	
	void assign(int x,int y){
		this->x = x;
		this->y = y;
		
	}
	void display(){
		cout << "X: " << x << " Y: " << y <<endl;
		
	}
};

int main(){
	B b;
	b.A::display();
	b.assign(10,20);
	b.A::display();
	b.display();
	return 0;
	
}
