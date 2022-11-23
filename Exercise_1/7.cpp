//7) Search an element in an array
#include <iostream>
using namespace std;

int main(){
	int n,s,count=0;
	cout<<"Enter the length of array : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the number : ";
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>s;
	for(int j=0;j<n;j++){
		if(a[j]==s){
			cout<<"It's at index"<<j;
		}
		else{
			count++;
		}
	}
	if(count==n){
		cout<<"Not found";
	}
	return 0;
}