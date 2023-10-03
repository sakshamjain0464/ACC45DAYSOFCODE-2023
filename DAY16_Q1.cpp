// https://www.codechef.com/problems/CANDYDIST
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,M;
	    cin>>N>>M;
	    if(N > M && ((N/M)%2) == 0 && N%M == 0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
