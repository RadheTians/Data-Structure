#include<iostream>
using namespace std;
int main(){

	int A[100],i,j,k,N,n;
	cout << "Enter the no of Numbers :== ";
	cin >> n;
	if(1<=n<=100){
		cout << "Enter " << n << " Numbers ==>> \n";
		for(i=0;i<n;i++){
			cin >> A[i];
		}
		cout << "Enter the number that you want to search := ";
		cin >> N;
		for(k=0;k<n;k++){
			if(A[k]==N){
				break;
			}
		}
		if(k==n){
			cout << "\n Given number isn't present\n\n";
		}else {
			cout << "\n Number present at " << k+1 << " place\n\n";
		}		

	}else {
		cout << "\nEnter number between 1 to 100\n";
	}
	return 0;
}
