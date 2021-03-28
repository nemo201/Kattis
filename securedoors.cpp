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
	int n;
	cin >> n;
	string action;
	string name;
	set<string> log;
	bool inside = false;
	
	rep(i,0,n){
		cin >> action >> name;
		inside = log.find(name) != log.end();
		if(action == "entry"){
			cout << name << " entered";
			if(inside)
				cout << " (ANOMALY)";
			else
				log.insert(name);
		
			cout << endl;
		}
		else {
			cout << name << " exited";
			if(!inside)
				cout << " (ANOMALY)";
			else
				log.erase(name);
			cout << endl;
		}
	}
}
