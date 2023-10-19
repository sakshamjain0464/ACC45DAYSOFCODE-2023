https://www.codechef.com/problems/ELECTN
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,X, count = 0;
	    cin>>N>>X;
	    int *A = new int[N];
	    for(int i = 0; i<N; i++){
	        cin>>A[i];
	        if(A[i] >= X){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
