// https://www.codechef.com/problems/BRUNCH
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        (X/Y < 20)?cout<<X/Y<<endl:cout<<20<<endl;
    }
	return 0;
}
