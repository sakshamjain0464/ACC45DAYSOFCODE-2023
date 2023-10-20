// https://www.codechef.com/problems/ATTENDU

#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N,count=0;
        string s;
        cin>>N>>s;
        for(int i = 0; i<N; i++){
            if(s[i] == '1') count++;
        }
        int att = count + 120 -N;
        if(((float)att/120)*100 >= 75){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
