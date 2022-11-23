//17) Given an array, find the sum of elements at odd index and elements at even index

#include <iostream>
using namespace std;
int main(){
	int n,sodd=0,seven=0;
	cout<<"Enter the length of the array : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Enter a value: ";
		cin>>a[i];
		if(i%2==0){
			seven+=a[i];
		}
		else{
			sodd+=a[i];
		}
	}
	cout<<"\nSum of elements at odd index  : "<<sodd;
	cout<<"\nSum of elements at even index : "<<seven;
	return 0;
}