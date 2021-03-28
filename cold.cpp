#include <iostream>
using namespace std;

int main(){
	int n,t, cnt=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		if(t<0)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
