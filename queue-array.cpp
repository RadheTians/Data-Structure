#include<iostream>
using namespace std;

void push(int* arr, int* data, int* n, int* front, int* rear) {

  if(*rear+1 == *n){
    std::cout << "Overflow Occured" << endl;
    return;
  }
  if(*front == -1 && *rear == -1){
    *front = 0;
    *(arr + ++(*rear)) = *data;
    return;
  }

  *(arr + ++(*rear)) = *data;

}
void pop(int* a,int *front, int* rear) {
  if(*front ==-1 && *rear == -1){
    std::cout << "Queue is Empty" << endl;
    return;
  }
  if(*front== *rear+1){
    std::cout << "Queue is Empty" << endl;
    return;
  }

  ++(*front);
}

void traverse(int* a, int* front ,int* rear) {
  if(*front ==-1 && *rear == -1){
    std::cout << "Queue is Empty" << endl;
    return;
  }
  if(*front== *rear+1){
    std::cout << "Queue is Empty" << endl;
    return;
  }
  for(int i=*front;i<=*rear;i++){
    std::cout << *(a+i) << "  ---  ";
  }
}


int main(){
  int A[100],n=100,front=-1,rear=-1,data,a;
  while(true){

		cout << "\n 1 ==>> Push in the Queue \n 2 ==>> Pop from the Queue \n " <<
						"3 ==>> Traverse the Queue :==>>> \n ";
		cin >> a;
		switch(a){
			case 1:
				cout << "Enter the Data Element :== ";
				cin >> data;
				push(A,&data,&n,&front,&rear);
				break;
			case 2:
				pop(A,&front,&rear);
				break;
			case 3:
				traverse(A,&front,&rear);
				break;
			default:
				exit(0);
				break;
		}
	}

  return 0;

}
