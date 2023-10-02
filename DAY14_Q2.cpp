#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x == y && y == z){
	        cout<<"no"<<endl;
	    }
	    else{
	        if(x+y == z || y+z == x || x+z == y){
	            cout<<"yes"<<endl;
	        }
            else{
                cout<<"no"<<endl;
            }	    
	    }
	}
	return 0;
}
