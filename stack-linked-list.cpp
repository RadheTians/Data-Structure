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

Node* head = nullptr;

Node* push(int data){
  Node* node = new Node(data);
  if(head == nullptr){
    head=node;
  }else{
    node->next = head;
    head = node;
  }
  return head;
}

Node* pop(){
  if(head == nullptr){
    cout << " -1 " << endl;
  }else{
    head = head->next;
  }
  return head;
}

void traverse(){
  Node* temp = head;
  if(head == nullptr){
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

		cout << "\n 1 ==>> Push in the Stack \n 2 ==>> Pop from the Stack \n " <<
						"3 ==>> Traverse the Stack :==>>> \n ";
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
