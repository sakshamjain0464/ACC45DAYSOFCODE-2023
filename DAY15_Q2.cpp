https://www.codechef.com/problems/UWCOI20A
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int *m = new int[N];
        for(int i = 0; i<N; i++){
            cin>>m[i];
        }
        int max_h = m[0];
        for(int i = 1; i<N; i++){
            if(max_h < m[i]){
                max_h = m[i];
            }
        }
        cout<<max_h<<endl;
    }
	return 0;
}
