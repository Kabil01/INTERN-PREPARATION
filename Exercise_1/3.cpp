//3) Reverse of a number:
#include <iostream>
#include <cmath>
using namespace std;

long long int reverse_digit(long long int n){
		long long int sum=0;
		int i=0;

	    long long int temp=n;
	    while(n!=0){
	        n=n/10;
	        i++;
	    }
	    while(temp!=0){
	        sum+=(temp%10)*pow(10,i-1);
	        i--;
	        temp=temp/10;
	    }
	    return sum;
}
		
int main(){
	long long int n,rev;
	cout<<"Enter the number : ";
	cin>>n;
	rev=reverse_digit(n);
	cout<<"Reversed digit is "<<rev;
	return 0;
}