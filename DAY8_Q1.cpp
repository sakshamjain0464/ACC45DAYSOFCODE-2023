// https://www.codechef.com/problems/BATH

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X < 2*Y){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<X/(2*Y)<<endl;
	    }
	}
	return 0;
}
