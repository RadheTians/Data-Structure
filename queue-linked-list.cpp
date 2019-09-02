#include<iostream>
using namespace std;

class Node{
  public :
    int data;
    Node* next;

    Node(int data){
      this->data = data;
      this->next = nullptr;
    }
};

Node* front = nullptr;
Node* rear = nullptr;

Node* push(int data){
  Node* node = new Node(data);
  if(front == nullptr){
    front = node;
    rear = node;
  }else{
    rear->next = node;
    rear = node;
  }
  return front;
}

Node* pop(){
  if(front == nullptr){
    cout << " -1 " << endl;
  }else{
    front = front->next;
  }
  return front;
}

void traverse(){
  Node* temp = front;
  if(temp == nullptr){
    std::cout << " <<== -1 ==>> " << '\n';
  }else{
    while(temp != nullptr){
      cout << temp->data << "  ---  ";
      temp = temp->next;
    }
  }
}

int main(){
  int data,a;
	while(true){

		cout << "\n 1 ==>> Push into the Queue \n 2 ==>> Pop from the Queue \n " <<
						"3 ==>> Traverse the Queue :==>>> \n ";
		cin >> a;
		switch(a){
			case 1:
				cout << "Enter the Data Element :== ";
				cin >> data;
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				traverse();
				break;
			default:
				exit(0);
				break;
		}
	}
  return 0;
}
