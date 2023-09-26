// https://www.codechef.com/problems/LOSTWKND
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A[5], P, total_hours = 0, total_hours_of_week = 24*5;
	    for(int i = 0; i<5; i++){
	        cin>>A[i];
	    }
	    cin>>P;
	    for(int i = 0; i<5; i++){
	        A[i]*=P;
	        total_hours += A[i];
	    }
	    if(total_hours <= total_hours_of_week){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
