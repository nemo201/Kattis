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
	string n;
	cin >> n;
	int a = n.length();
	rep(i,0,a){
		if(i == 0)
			cout << n[i];
		if(n[i] == '-')
			cout << n[i+1];
	}
	cout << endl;
}
