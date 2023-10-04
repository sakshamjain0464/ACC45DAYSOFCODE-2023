#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,A[1000000], O[1000000], Acount = 0, Ocount = 0;
	    cin>>N;
	    for(int i = 0; i<N; i++){
	        cin>>O[i];
	    }
	    for(int i = 0; i<N; i++){
	        cin>>A[i];
	    }
	    for(int i = 0; i<N; i++){
	        if(O[i] == 0){
	            Ocount = 0;
	        }
	        else{
	            Ocount++;
	        }
	    }
	    for(int i = 0; i<N; i++){
	        if(A[i] == 0){
	            Acount = 0;
	        }
	        else{
	            Acount++;
	        }
	    }
	    if(Acount < Ocount){
	        cout<<"ADDY"<<endl;
	    }
	    else if(Acount > Ocount){
	        cout<<"OM"<<endl;
	    }
	    else{
	        cout<<"DRAW"<<endl;
	    }
	}
	return 0;
}
