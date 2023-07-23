#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y%2==1)y++;
	    if(x%2==0) {
	        cout<<(y-x)/2<<endl;
	    } else if(x==9) {
	        cout<<(y-(x+3))/2 + 1<<endl;
	    } else {
	        cout<<(y-(x+x))/2 + 1<<endl;
	    }
	}
	return 0;
}