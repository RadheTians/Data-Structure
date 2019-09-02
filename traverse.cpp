#include <iostream>  
using namespace std; 
 
int main() {  
	int A[20],i,j,k;
	cout << "Hello C++ Programming";  
	for(i=0;i<20;i++)
		A[i]=i;
	for(j=i-1;j>=0;j--)
		cout << '\n' << A[j] <<'\n';
	return 0;  
}  
