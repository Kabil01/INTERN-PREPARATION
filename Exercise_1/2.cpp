//Get the month and year and print number of days;
#include <iostream>
using namespace std;
int main(){
	int m,y,day;
	
	cout<<"Enter the month:";
	cin>>m;
	cout<<"Enter the year:";
	cin>>y;
	if(m%2!=0){
		day=30;
	}
	else if(m==2){
		if((((y%4==0) && (y%100!=0))||(y%400==0))){
			day=29;
		}
		else{
			day=28;
		}
	}
	else{
		day=31;
	}
	cout<<day<<"\n";
	return 0;
}