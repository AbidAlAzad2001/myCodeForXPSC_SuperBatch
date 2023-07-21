#include <iostream>
using namespace std;
int main(){
	int T, N, a;
	for(cin >> T; T; T--){
		cin >> N;
		int x = 0;
		for(int i=0; i<N; i++){
			cin >> a;
			x ^= a;
		}
		cout << ((N % 2 == 1 || x == 0)? x:-1) << endl;
	}
}


