//9) Given a string, count the number of alphabets in it
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int count=0;
	cout<<"Enter the string:";
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'|s[i]=='u'){
			count++;
		}
	}
	cout<<"No of alphabets in "<<s<<" is "<<count;
}