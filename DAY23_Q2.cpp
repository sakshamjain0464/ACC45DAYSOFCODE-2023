// https://www.codechef.com/problems/NOTIME
#include <iostream>
using namespace std;

int main() {
	int T[100], N,H,x;
	cin>>N>>H>>x;
	bool found = false;
	for(int i = 0; i<N;i++){
	    cin>>T[i];
	    if(x+T[i] >= H){
	        cout<<"YES"<<endl;
	        found = true;
	        break;
	    }
	}
	if(found == false){
	    cout<<"NO"<<endl;
	}
	return 0;
}
