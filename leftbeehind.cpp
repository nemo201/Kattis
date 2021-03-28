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
	for (int sweet, sour; cin >> sweet >> sour;) {
        if (sweet == 0 && sour == 0)
            break;
        if (sour + sweet == 13)
            cout << "Never speak again."
                 << "\n";
        else if (sour > sweet)
            cout << "Left beehind."
                 << "\n";
        else if (sweet > sour)
            cout << "To the convention."
                 << "\n";
        else
            cout << "Undecided."
                 << "\n";
    }
}
