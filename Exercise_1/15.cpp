//15) Check if the given elements are in the given range
#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	cout<<"Enter the array length:";
	cin>>n;
	int arr[n];

	for(int z=0;z<n;z++){
		cout<<"Enter the number:";
		cin>>arr[z];
	}
	cout<<"Enter the starting range:";
	cin>>a;
	int temp=a;
	cout<<"Enter the ending range:";
	cin>>b;
	    int ar[b-a],count=0;
		for(int i=0;i<((b-a)+1);i++){
		    if(temp<=b){
		        ar[i]=temp;
		        temp++;
		    }
		}
		for(int i=0;i<(b-a);i++){
		    for(int j=0;j<n;j++){
		        if(ar[i]==arr[j]){
		            count++;
		        }
		    }
		}
		if(count==(b-a+1)){
			cout<<"Yes";
		}
		else{
		    cout<<"No";
		}
		return 0;
	}
