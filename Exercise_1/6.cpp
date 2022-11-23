//6) Find if a number is an armstrong number :
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,temp,sum=0,a;
	cout<<"Enter the number:";
	cin>>n;
	temp=n;
	while(temp!=0){
	a=temp%10;
	sum+=pow(a,3);
	temp=temp/10;
}
if(sum==n){
	cout<<"It's an armstrong number";
}
else{
	cout<<"It's not an armstrong number";
}
return 0;
}