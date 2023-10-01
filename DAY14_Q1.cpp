#include <iostream>
using namespace std;

int main() 

{
    int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x<y) cout<<x<<endl;
	    else cout<<x/y+(x-x/y*y)<<endl;
	}
	return 0;
}
