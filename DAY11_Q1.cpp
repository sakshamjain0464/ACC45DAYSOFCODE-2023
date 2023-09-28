// https://www.codechef.com/problems/CRICMATCH
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N, M;
	    cin>>N>>M;
	    int total = M*6*6;
	    if(N<=total){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
