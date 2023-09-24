// https://www.codechef.com/problems/INSTAGRAM

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X > (10*Y)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
