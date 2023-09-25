https://www.codechef.com/problems/TABLET

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,B, max = 0;
	    cin>>N>>B;
	    int T[N][3];
	    for(int i = 0; i<N; i++){
	        cin>>T[i][0]>>T[i][1]>>T[i][2];
	    }
	    for(int i = 0; i<N; i++){
	    if(T[i][2] <= B && max < T[i][0]*T[i][1]){
	        max = T[i][0]*T[i][1];
	    }
	    }
	    if(max == 0){
	        cout<<"no tablet"<<endl;
	    }
	    else{
	        cout<<max<<endl;
	    }
	}
	return 0;
}
