#include<bits/stdc++.h>
using namespace std;

class A {

	public:
	int x;
	int y;
	
	A(int x,int y){
	
		this->x = x;
		this->y = y;
	}
	A operator +(A b){
		return A(this->x + b.x, this->y + b.y);
	}
	A operator -(A b){
		return A(this->x - b.x, this->y - b.y);
	}
	void display(){
		cout << x << " + (" << this->y <<"i)" <<endl;
	}
};

int main(){

	A a = A(1,2);
	A b = A(2,4);
	A c = a + b;
	c.display();
	c = a - b;
	c.display();
	c = b - a;
	c.display();
	return 0;
	
}
