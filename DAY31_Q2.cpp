// https://www.codechef.com/problems/BLITZ3_2
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    cout<<(2*(180+A))-(B+C)<<endl;
	}
	return 0;
}
