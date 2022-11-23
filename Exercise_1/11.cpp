//11) Reverse an array
#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter the array length : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the number : ";
	    cin>>a[i];
	}
	for(int i=0;i<n/2;i++){
	    int c;
	    c=a[i];
	    a[i]=a[n-i-1];
	    a[n-i-1]=c;
	}
	cout<<"The reversed is ";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	return 0;
}