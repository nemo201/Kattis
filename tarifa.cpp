#include <iostream>
using namespace std;

int main(){
	int x,n,p;
	cin >> x >> n;
	int cnt=x;
	for(int i=0; i<n; i++){
		cin >> p;
		cnt+=x-p;
	}
	cout << cnt << endl;
}
