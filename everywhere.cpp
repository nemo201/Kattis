#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	for(int i=0; i<t; i++){
		int cnt=1;
		cin >> n;
		string ar[n];
		for(int j=0; j<n; j++){
			cin >> ar[j];
		}
		for (int a = 1; a < n; a++) {
			int b = 0;
			for (b = 0; b < a; b++)
				if (ar[a] == ar[b])
					break;
					
			if (a == b)
				cnt++;
		}
		cout << cnt << endl;
	}
	
	return 0;
}
