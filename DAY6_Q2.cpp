// https://www.codechef.com/problems/DIGARR
#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n;
	    cin>>n;
	    string d;
	    cin>>d;
	    int count=0;
	    for(int i=0;i<=n;i++)
	    {
	        if(d[i]=='0' || d[i]=='5')
	        count++;
	    }
	    if (count>0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
