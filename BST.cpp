#include<iostream>
using namespace std;


class Node{
  public :
    int data;
    Node* left;
    Node* right;
    Node(int data){
      this->data = data;
      this->left = nullptr;
      this->right = nullptr;
    }
};

Node* Insert(Node* root, int data){
  if(root ==nullptr){
    return new Node(data);
  }else if(root->data > data){
    root->left = Insert(root->left,data);

  }else{
    root->right = Insert(root->right,data);
  }
  return root;
}

void Preorder(Node* root){
  if(root == nullptr)
    return;
  std::cout << root->data << "  ";
  Preorder(root->left);
  Preorder(root->right);
}

void Inorder(Node* root){
  if(root == nullptr)
    return;
  Inorder(root->left);
  std::cout << root->data << "  ";
  Inorder(root->right);
}

void Postorder(Node* root){
  if(root == nullptr)
    return;
  Postorder(root->right);
  Postorder(root->left);
  std::cout << root->data << "  ";
}

Node* Search(Node* root,int data){
  if(root->data == data || root == nullptr)
    return root;
  else if(root->data > data)
    return Search(root->left,data);
  else
    return Search(root->right,data);
}



Node* Delete(Node* root,int data){
  
  

}

int main() {
  Node* root = nullptr;
  int data,i,a;
  while(true){

		cout << "\n 1 ==>> To Insert item in BST \n 2 ==>> To Delete item From BST \n " <<
						"3 ==>> Preorder Traversal :==>>> \n 4 ==>> Inorder Traversal :==>>> \n "<<
            "5 ==>> Postorder Traversal :==>>> \n 6 ==>> Search an Item ==>> \n ";
		cin >> a;
		switch(a){
			case 1:
				cout << "Enter the Data Element :== ";
				cin >> data;
				root = Insert(root,data);
				break;
			case 2:
        cout << "Enter the Data Element :== ";
        cin >> data;
				root = Delete(root,data);
				break;
      case 3:
  			Preorder(root);
  			break;
			case 4:
				Inorder(root);
				break;
      case 5:
  			Postorder(root);
  			break;
      case 6:
        cout << "Enter the Data Element :== ";
        cin >> data;
    		if(Search(root,data) != nullptr)
          std::cout << "Item Found" << endl;
        else
          std::cout << "Item not Found" << endl;
    		break;
			default:
				exit(0);
				break;
		}
	}


  return 0;
}
