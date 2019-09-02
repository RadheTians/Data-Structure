#include<iostream>
using namespace std;

int main(){

	int A[100],i,j,k,n;
	cout << " Enter the no of Number that you want to insert First := ";
	cin >> n;
	if(0<=n<=100){
		cout << "\n Enter" << n << " Numbers ==>>\n";
		for(i=0;i<n;i++){
			cin >> A[i];
		}
		cout << "Enter index of number that you want to delete := ";
		cin >> j;
		if(1<=j<=n){
			for(k=j-1;k<n;k++){
				A[k]=A[k+1];
			}
			n--;
			for(k=0;k<n;k++){
				cout << " " << A[k];
			}
		}else {
			cout << " Enter Valid index";
		}
	}else {
		cout << " Enetr between 1 to 100 numbers";
	}
	return 0;

}
