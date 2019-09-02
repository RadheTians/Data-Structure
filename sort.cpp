#include<iostream>
using namespace std;
int main(){
	
	int A[100],i,j,k,n,temp;
	cout << "Enter the no of numbers :== ";
	cin >> n;
	if(0<=n<=100){
		cout << "Enter " << n << "Numbers :==>>\n";
		for(i=0;i<n;i++){
			cin >> A[i];
		}
		for(i=1;i<n;i++){
			for(j=0;j<n-1;j++){
				if(A[i]<A[j]){
					temp = A[i];
					A[i] = A[j];
					A[j] = temp;
				}
			}
		}
		for(k=0;k<n;k++){
			cout << " " << A[k];
		}
	}else{
		cout << "Enter number between 1 to 100";
	}
	return 0;
}
