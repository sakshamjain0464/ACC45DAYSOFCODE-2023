// https://www.codechef.com/problems/ACCURACY
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    if(N == 0 || N%3 == 0){
	        cout<<0<<endl;
	    }else{
	        int M = (N/3)+1;
	        cout<<(M*3) - N<<endl;
	    }
	}
	return 0;
}
