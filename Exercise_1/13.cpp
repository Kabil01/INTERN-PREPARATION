//13) Single number
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the array length:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the element:";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int c;
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(int i=0;i<n;i+=2){
		if(a[i]!=a[i+1]){
			cout<<"The single number is "<<a[i]<<endl;
			break;
		}
	}
	
	return 0;
}