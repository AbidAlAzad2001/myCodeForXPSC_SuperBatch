#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n%7==0 && n%2==0)
	        cout<<"Alice\n";
	   else if(n%9==0 && n%2==1)
	        cout<<"Bob\n";
	   else
	        cout<<"Charlie\n";
	}
	return 0;
}
