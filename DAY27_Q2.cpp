// https://www.codechef.com/problems/COUNTP
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N, even = 0, odd = 0;
	    cin>>N;
	    int *A = new int[N];
	    for(int i = 0;i<N; i++){
	        cin>>A[i];
	        (A[i] % 2 == 0)?even++:odd++;
	    }
	    (odd % 2 == 0 && odd!=0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
