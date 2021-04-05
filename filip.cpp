#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int reverse(int num){
	int rev=0;
	while(num > 0){
		rev = rev*10 + num%10;
		num /= 10;
	}
	return rev;
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << (reverse(a) > reverse(b)? reverse(a) : reverse(b)) << endl;
}
