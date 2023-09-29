// https://www.codechef.com/problems/CANDY123?tab=statement
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        for(int i = 1; i<=1000; i++){
            if(i%2 != 0){
                A-=i;
                if(A<0){
                    cout<<"Bob"<<endl;
                    break;
                }
            }
            else{
                B-=i;
                if(B<0){
                    cout<<"Limak"<<endl;
                    break;
                }
            }
        }
    }
	return 0;
}
