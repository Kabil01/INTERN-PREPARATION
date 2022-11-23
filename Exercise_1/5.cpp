//5. Reverse a string and check if it’s a palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1;
	cout<<"Enter the string : ";
	cin>>s1;
	int a=0,b=s1.length()-1;
	while(b>a){
		if(s1[a++]!=s1[b--]){
			cout<<"It's not a palindrome";
			return 0;
		}
	}
	printf("It's a palindrome");
	return 0;
}