// https://www.codechef.com/problems/NETFLIX
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,C,X;
	    cin>>A>>B>>C>>X;
	    (A+B >= X || A+C >=X || B+C >= X)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
