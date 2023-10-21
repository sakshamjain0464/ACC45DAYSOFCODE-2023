// https://www.codechef.com/problems/CHEFSTUD
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     int count = 0;
     for(int i=0; i<s.length(); i++){
        if(s[i] == '>') s[i] = '<';
        else if(s[i] == '<') s[i] = '>';
        else continue;
     }
     for(int i=0; i<s.length(); i++){
        if(s[i] == '>' && s[i+1] == '<') count++;
     }
     cout<<count<<endl;
    }
	return 0;
}
