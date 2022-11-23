//10) Check if two strings are anagrams
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	int count =0;
	cout<<"Enter the first string:";
	cin>>s1;
	cout<<"Enter the second string:";
	cin>>s2;
	for(int i=0;i<s1.length();i++){
		for(int j=i;j<s1.length();j++){
			if(s1[i]>s1[j]){
				char c;
				c=s1[i];
				s1[i]=s1[j];
				s1[j]=c;
			}
		}
	}

	for(int i=0;i<s2.length();i++){
		for(int j=i;j<s2.length();j++){
			if(s2[i]>s2[j]){
				char c;
				c=s2[i];
				s2[i]=s2[j];
				s2[j]=c;
			}
		}
	}

	if(s1.length()!=s2.length()){
		cout<<"Not a anagram";
	}
	else{
		for(int i=0;i<s1.length();i++){
			if(s1[i]!=s2[i]){
				cout<<"Its not a anagram";
				break;
			}
			else{
				count++;
			}
		}
		if(count==s2.length()){
			cout<<"Its a anagram";
		}
	}
}