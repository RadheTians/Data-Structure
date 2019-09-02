#include<iostream>
using namespace std;

class Node {

	public :
		int data;
		Node *link;
};

//globel Head
Node *head = NULL;


//new node
Node* NODE(int data){

	Node *newNode = new Node();
	newNode -> data = data;
	return newNode;

}

//front-Push
Node* push(int data){
	Node *node = NODE(data);
	node->link = head;
	head = node;
	return head;
}

//End-Append
Node* append(int data){
	Node *node = NODE(data);

	if(head == NULL){
		head = node;
	}else{
		Node *temp = head;
		while(temp->link != NULL){
			temp = temp->link;
		}
		temp->link = node;
	}
	return head;
}

//Insert at any Location
Node* location(int data,int index){

	Node *node = NODE(data);

	if(index == 1){
		node->link = head;
		head = node;
	}else{
		Node *temp = head;
		for(int i=1;i<index-1;i++){
			temp = temp->link;
		}
		node->link = temp->link;
		temp->link = node;
	}
	return head;
}

Node* pop(){
	head = head->link;
	return head;

}

Node* popEnd(){
	Node *temp = head;
	Node *ptr;
	if(head->link == NULL){
		head = head->link
	}else{
		while (temp->link != NULL) {
			ptr = temp;
			temp = temp->link;
		}
		ptr->link = NULL;
	}

	return head;

}

Node* PopLocation(int index){
	Node *temp = head;
	Node *ptr = NULL;
	if(index == 1){
		head = head->link;
	}else{
		for(int i=1;i<index;i++){
			ptr = temp;
			temp = temp->link;
		}
		ptr->link = temp->link;
	}
	return head;
}
//traverse
void traverse(){
	Node *temp=head;
	if(head != NULL){
		while(temp->link != NULL){
			cout << temp->data << " ---- ";
			temp = temp->link;
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
				push(data);
				break;
			case 2:
				cout << "Enter the Data Element & Index :== ";
				cin >> data >> index;
				location(data,index);
				break;
			case 3:
				cout << "Enter the Data Element :== ";
				cin >> data;
				append(data);
				break;
			case 4:
				traverse();
				break;
			case 5:
				pop();
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
