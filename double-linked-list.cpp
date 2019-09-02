#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
      this->data = data;
      this->next = NULL;
      this->prev = NULL;
    }
};
Node* head = nullptr;


Node* pushFront(int data){
  Node *temp = head;
  Node *node = new Node(data);

  if(head == NULL){
    head = node;
  }else{
    head = node;
    temp->prev = node;
    node->next = temp;
  }
  return head;
}

Node* pushEnd(int data){

  Node* temp = head;
  Node* node = new Node(data);
  if(head == NULL){
    head = node;
  }else{
    while (temp->next != NULL) {
      temp = temp->next;
    }
    node->prev = temp;
    temp->next = node;

  }
  return head;
}

Node* pushLocation(int data, int index){
  Node* temp = head;
  Node* node = new Node(data);
  if(head == NULL){
    head = node;
  }else if (index == 1){
    node->next = head;
    head->prev = node;
    head = node;

  }else{

    for(int i=1;i<index-1;i++){
      temp = temp->next;
    }
    if(temp->next == NULL){
      node->prev = temp;
      temp->next = node;
    }else{
      node->prev = temp;
      node->next = temp->next;
      temp->next->prev = node;
      temp->next = node;
    }

  }

  return head;
}

Node* popFront(){
  if(head->next == NULL){
    head = head->next;
  }else{

    head = head->next;
    head->prev = NULL;
  }
  return head;
}
Node* popEnd(){
  Node* temp = head;
  if(head->next == NULL){
    head = head->next;
  }else{
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->prev->next = temp->next;
  }
  return head;
}

Node* PopLocation(int index){
  Node* temp = head;
  if(head->next == NULL){
    head = head->next;
  }else if(index == 1){
    head = head->next;
    head->prev = NULL;
  }else{
    for(int i=1;i<index;i++){
			temp = temp->next;
		}
    if(temp->next == NULL){
      temp->prev->next = temp->next;
    }else{
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
    }

  }
  return head;
}

void traverse(){
	Node* temp = head;
	if(head != NULL){
		while(temp->next != NULL){
			cout << temp->data << " ---- ";
			temp = temp->next;
		}
		cout << temp->data << " ---- " <<endl;
	}else{
		cout << "List is Empty" << endl;
	}
}
int main(){

	int data,index,a;
	while(true){

		cout << " 1 ==>> Insert at Front \n 2 ==>> Insert at Any Location \n 3 ==>> Insert at End \n " <<
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
				cout << "Enter the Data Element & Index :== ";
				cin >> data >> index;
				pushLocation(data,index);
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
			case 7:
				std::cout << "Enter the Index :== ";
				std::cin >> data;
				PopLocation(data);
				break;
			default:
				exit(0);
				break;
		}
	}
	return 0;
}
