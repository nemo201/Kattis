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
	string s, english, foreign;
	getline(cin, s);	
	unordered_map<string, string> dict;
	
	while(!s.empty()){
		
		//stringstream is used to count the number of words, here line is replacing the work of cin.
		stringstream line(s);
		line >> english >> foreign;
		dict[foreign] = english;
		getline(cin, s);
	}
	
	while(cin >> s){
		if (dict.find(s) == dict.end())
			cout << "eh" << endl;
		else
			cout << dict[s] << endl;
	}
}
