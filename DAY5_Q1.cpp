// https://www.codechef.com/problems/BATTERYLOW
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    if(N == 1){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<(N/2)+1<<endl;
	    }
	}
	return 0;
}
