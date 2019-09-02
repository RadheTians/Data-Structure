#include<iostream>
using namespace std;

class Node{
  public :
    int data;
    Node* prev;
    Node* next;

    Node(int data){
      this->data = data;
      this->next = nullptr;
      this->prev = nullptr;
    }
};

Node* head = nullptr;

Node* pushEnd(int data){
  Node* tail = head;
  Node* node = new Node(data);
  if(head == nullptr){
    head = node;
    head->prev = head;
    head->next = head;
  }else{
    while(tail->next != head){
      tail = tail->next;
    }
    node->prev = tail;
    node->next = head;
    tail->next = node;
    head->prev = node;

  }
  return head;
}


Node* pushFront(int data){
  Node* node = new Node(data);
  Node* tail = head;
  if(head == nullptr){
    head = node;
    head->prev = head;
    head->next = head;
  }else{
    while(tail->next != head){
      tail = tail->next;
    }
    node->prev = tail;
    node->next = head;
    tail->next = node;
    head = node;
  }
  return head;

}

void traverse(){
  Node* temp = head;
  if(head == nullptr){
    cout << "List is Empty!";
  }else{
    while(temp->next != head){
      cout << temp->data << " ---  ";
      temp = temp->next;
    }
    std::cout << temp->data << " ---  ";
  }
}


Node* popFront(){
  Node* temp = head;
  while(temp->next != head){
    temp = temp->next;
  }

  head = head->next;
  head->prev = temp;
  temp->next = head;
  return head;
}

Node* popEnd(){
  Node* temp = head;
  Node* ptr = nullptr;
  while(temp->next != head){
    ptr = temp;
    temp = temp->next;
  }
  ptr->next =head;
  head->prev = ptr;

  return head;
}

int Search(int data){
  Node* temp = head;
  while(temp->next != head){
    if(temp->data == data)
      return 1;
    temp = temp->next;
  }
  if(temp->data == data)
    return 1;
  return 0;
}

int main(){

	int data,index,a;
	while(true){

		cout << "\n 1 ==>> Insert at Front \n 2 ==>> Searching \n 3 ==>> Insert at End \n " <<
						"4 ==>> Traverse the List :==>>> \n 5 ==>> Delete from Front \n 6 ==>> Delete from End \n " <<
						"7 ==>> Delete from Any Location \n";
		cin >> a;
		switch(a){
			case 1:
				cout << "Enter the Data Element :== ";
				cin >> data;
				pushFront(data);
				break;
			case 2:
				cout << "Enter the Data Element that you want to Search :== ";
				cin >> data;
				cout << " " << Search(data);
				break;
			case 3:
				cout << "Enter the Data Element :== ";
				cin >> data;
				pushEnd(data);
				break;
			case 4:
				traverse();
				break;
			case 5:
				popFront();
				break;
			case 6:
				popEnd();
				break;
			/*case 7:
				std::cout << "Enter the Index :== ";
				std::cin >> data;
				PopLocation(data);
				break;*/
			default:
				exit(0);
				break;
		}
	}
	return 0;
}
