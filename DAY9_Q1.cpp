// https://www.codechef.com/problems/WATERCOOLER2?tab=statement
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X,Y, count = 0;
        cin>>X>>Y;
        count = Y/X;
        if(count*X<Y){
            cout<<count<<endl;
        }
        else{
            cout<<count-1<<endl;
        }
    }
	return 0;
}
