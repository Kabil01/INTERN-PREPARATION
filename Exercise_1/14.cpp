//14) Maximum money
#include <iostream>
using namespace std;

int maximizeMoney(int N , int K) {
        int max=0;
        for(int i=0;i<N;i+=2){
            max+=K;
        }
    return max;
}

int main(){
	int n,k,ans;
	cout<<"Enter the number of houses:";
	cin>>n;
	cout<<"Enter the amount at single house:";
	cin>>k;
	ans= maximizeMoney(n,k);
	cout<<"Maximum money :"<<ans;
	return 0;
}
