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
	 cout << fixed << setprecision(4);
    double r, x, y;
    while(cin >> r >> x >> y){
        if(sqrt(x * x + y * y) >= r){
            cout << "miss" << endl;
        } else {
            double h = r - sqrt(x * x + y * y);
            double area = r * r * 3.141592653589793238462643383;
            double seg_area = r * r * acos((r - h) / r) - (r - h) * sqrt((2 * r * h - h * h));
            cout << area - seg_area << " " << seg_area << endl;
        }
    }
}
