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
    rep(i, 0, n){
        string s1,s2;
        cin >> s1 >> s2;
        int len = s1.length();
        rep(j,0,len){
            if(s1[j] == s2[j])
                cout << ".";
            else
                cout << "*";
        }
        cout << endl;
    }
}

