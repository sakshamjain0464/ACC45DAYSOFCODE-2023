// https://www.codechef.com/problems/VALENTINE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X<Y){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<X/Y<<endl;
	    }
	}
	return 0;
}
