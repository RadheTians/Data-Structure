#include <iostream>
using namespace std;

int main(){
	
	int A[100],i,j,k,N,n;
	cout << "\nEnter the numbers :=  ";
	cin >> n;
	cout << "\nEnter the numbers := ";
	for(i=0;i<n;i++){
		cin >> A[i];
	}
	cout << "Enter the index and number that you want to insert in := ";
	cin >> j >> N;
	if(j<=n){
		for(k=j;k<=n;k++){
			A[k]=A[k-1];
		}
		A[j-1]=N;
		for(i=0;i<=n;i++){
			cout << " " << A[i];
		}
	} else {
		cout << "Index is not subsecunt number";
	}
		
}
