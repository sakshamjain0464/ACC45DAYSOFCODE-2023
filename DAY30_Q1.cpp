// https://www.codechef.com/problems/PIZZAC
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    if(N == 1){
	        cout<<"YES"<<endl;
	    }
	    else if(N % 2 == 0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
