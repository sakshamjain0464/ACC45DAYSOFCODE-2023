#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int A,B;
	char C;
	cin>>A>>B>>C;
	switch(C){
	    case '+':cout<<A+B<<endl;break;
	    case '-':cout<<A-B<<endl;break;
	    case '*':cout<<A*B<<endl;break;
	    case '/':cout<<fixed<<setprecision(7)<<double(A)/B<<endl;break;
	}
	return 0;
}
