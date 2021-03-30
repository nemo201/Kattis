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
	for(int i; cin >> i && i;){
		vector<string> names;
		for(size_t name = 0; name < i; name++){
			string n;
			cin >> n;
			names.push_back(n);
		}
		stable_sort(names.begin(), names.end(), [](const string &a, const string &b){ return a[0] < b[0] ? true : a[0] > b[0] ? false : a[1] < b[1];});
		for_each(names.begin(), names.end(), [](const string &s){cout << s << endl;});
		cout << endl;
	}
}
