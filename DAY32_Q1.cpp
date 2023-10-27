// https://www.codechef.com/problems/MINCOINS
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X, coins = 0;
        cin>>X;
        
        if(X % 10 == 0){
            cout<<X/10<<endl;
        }
        else if(X % 5 == 0){
            cout<<X/10+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
