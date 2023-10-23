// https://www.codechef.com/problems/CRICRANK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int R1,W1,C1, R2,W2,C2, R=0,W=0,C=0;
	    cin>>R1>>W1>>C1>>R2>>W2>>C2;
	    if(R2>R1) R = 1;
	    if(W2>W1) W = 1;
	    if(C2>C1) C = 1;
	    if(R == 1 && W == 1 && C == 1) cout<<'B'<<endl;
	    else if(R == 0 && W == 0 && C == 0) cout<<'A'<<endl;
	    else if((R == 1 && W ==1 && C == 0) || (R == 0 && W ==1 && C == 1) || (R == 1 && W ==0 && C == 1)) cout<<'B'<<endl;
	    else cout<<'A'<<endl;
	}
	return 0;
}
