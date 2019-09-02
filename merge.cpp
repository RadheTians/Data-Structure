#include<iostream>
using namespace std;

int main(){

	int A[100],B[100],C[100],i,j,k,n,m;
	cout << " Enter size of First Array :== ";
	cin >> m;
	cout << "\nEnter the elements of First Array :==>>\n";
	for(i=0;i<m;i++){
		cin >> A[i];
	}

	cout << " Enter size of Second Array :== ";
	cin >> n;
	cout << "\nEnter the elements of Second Array :==>>\n";
	for(i=0;i<n;i++){
		cin >> B[i];
	} 

	for(k=0;k<m;k++){
		C[k] = A[k];
	}

	i=0;
	for( ;k<m+n;k++){
		C[k] = B[i];
		i++;
	}

	for(j=0;j<m+n;j++){
		cout << " " << C[j];
	}

	return 0;
}
