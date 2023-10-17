// https://www.codechef.com/problems/CHEFCHOCO
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int C,X,Y;
	    cin>>C>>X>>Y;
	    (C<=X)?cout<<0<<endl:cout<<(C-X)*Y<<endl;
	}
	return 0;
}

