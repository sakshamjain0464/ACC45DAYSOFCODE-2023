// https://www.codechef.com/problems/FLIPCARDS
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,X;
	    cin>>N>>X;
	    if(N==X){
	        cout<<0<<endl;
	    }
	    else if(N-X >= X){
	        cout<<X<<endl;
	    }
	    else{
	        cout<<N-X<<endl;
	    }
	}
	return 0;
}
