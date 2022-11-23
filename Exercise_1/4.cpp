//4.series gp
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,r,n,ans;
	cout<<"Enter the 'a' value : ";
	cin>>a;
	cout<<"Enter the 'r' value : ";
	cin>>r;
	cout<<"Enter the 'n' value : ";
	cin>>n;
	ans=a*pow(r,n-1);
	cout<<"The "<<n<<"th term is "<<ans;
}