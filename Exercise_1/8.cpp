//8) Print n fibonacci terms using iteration and recursion
#include <iostream>
using namespace std;

int fib(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return (fib(n-1)+fib(n-2));
	}
}

int main(){
	int n,ans;
	cout<<"Enter the n :";
	cin>>n;	
	ans=fib(n);
	cout<<"The "<<n<<"th fibonacci term is "<<ans<<endl;
}