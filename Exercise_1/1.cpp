#include <iostream>
using namespace std;

void check(int a,int b,int c){
	if(a==b && a==c){
		cout<<"Equilateral";
	}
	else if(a==b || a==c || b==c){
		cout<<"Isoceles";
	}
	else{
		cout<<"Scalene";
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	check(a,b,c);
}