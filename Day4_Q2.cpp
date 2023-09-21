#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float l,v1,v2;
	    cin>>l>>v1>>v2;
	    float t = l/v1;
	    float h = l/v2;
	    if(t>int(l/v1) && t<int((l/v1)+1)){
	        t = int(l/v1) + 1;
	    }
	    if(h>int(l/v2) && h<int((l/v2)+1)){
	        h = int(l/v2) + 1;
	    }
	    if(t == h ){
	        cout<<-1<<endl;
	    }
	    else if(t>h){
	        cout<<t-h-1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
