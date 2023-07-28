#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,j=0;
	    cin>>n;
	    int ar[n];
	    vector<int> v(n);
	    for(int i=1; i<=n; i++)
	    {
	        ar[i]=i+1;
	        
	    }
	    
	   ar[n]=1;
	    for(int i=1; i<=n; i++)
	    {
	        cout<<ar[i]<<" ";
	    }
	    
	    cout<<"\n";
	    
	}
	
	return 0;
}