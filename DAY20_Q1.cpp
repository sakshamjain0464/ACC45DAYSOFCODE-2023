// https://www.codechef.com/problems/VOLCONTROL
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X>Y){
	        cout<<X-Y<<endl;
	    }
	    else{
	        cout<<Y-X<<endl;
	    }
	}
	return 0;
}
