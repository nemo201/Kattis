#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
	int arr[10],cnt=0;
	rep(i,0,10)
		cin >> arr[i];

	rep(i,0,10)
		arr[i] = arr[i]%42;
		
	sort(arr,arr+10);

	rep(i,1,10){
		if(arr[i]!=arr[i-1])
			cnt++;
	}
	
	cout <<cnt+1 << endl;
}
