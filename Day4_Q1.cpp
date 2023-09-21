// https://www.codechef.com/practice/PCBM01/problems/CANDYSTORE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y, total;
	    cin>>x>>y;
	    if(x>y){
	        total = y;
	    }
	    else{
	        total = x + ((y-x)*2);
	    }
	    cout<<total<<endl;
	}
	return 0;
}
