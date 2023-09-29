// https://www.codechef.com/problems/BULLET
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int time_taken = Y/X;
	    if(time_taken > Z){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<Z-time_taken<<endl;
	    }
	}
	return 0;
}
