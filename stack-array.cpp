#include<iostream>
using namespace std;

void push(int* arr, int* data, int* n, int* top) {

  if(*top+1 == *n){
    std::cout << "Overflow Occured" << endl;
    return;
  }

  *(arr + ++(*top)) = *data;

}
void pop(int* a,int *top) {
  --(*top);
}

void traverse(int* a, int* top) {
  for(int i=0;i<=*top;i++){
    std::cout << *(a+i) << "  ---  ";
  }
}


int main(){
  int A[100],n=100,top=-1,data,a;
  while(true){

		cout << "\n 1 ==>> Push in the Stack \n 2 ==>> Pop from the Stack \n " <<
						"3 ==>> Traverse the Stack :==>>> \n ";
		cin >> a;
		switch(a){
			case 1:
				cout << "Enter the Data Element :== ";
				cin >> data;
				push(A,&data,&n,&top);
				break;
			case 2:
				pop(A,&top);
				break;
			case 3:
				traverse(A,&top);
				break;
			default:
				exit(0);
				break;
		}
	}

  return 0;

}
