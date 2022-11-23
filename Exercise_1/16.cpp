//6) Total fine
#include <iostream>
using namespace std;

int main(){
	int n,date;
	long long int fines=0;
	cout<<"Enter the date:";
	cin>>date;
	cout<<"Enter the no.of cars:";
	cin>>n;
	int cars[n],fine[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the car number:";
		cin>>cars[i];
		cout<<"Enter the fine for car "<<cars[i]<<" :";
		cin>>fine[i];
	}

    if(date%2==0){
        for(int i=0;i<n;i++){
            if(cars[i]%2!=0){
                fines+=fine[i];
            }
        }
    }
    else{
         for(int i=0;i<n;i++){
            if(cars[i]%2==0){
                fines+=fine[i];
            }
        }
    }
    
    cout<<"\nThe total fine amount : "<<fines;
     return 0;
}