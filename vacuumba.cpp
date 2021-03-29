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
	double angle, distance, angleRad;
	ll n,m;
	
	cin >> n;
	cout << fixed << setprecision(4);
	
	rep(i,0,n){
		cin >> m;
		double x = 0.0;
		double y = 0.0;
		double lastAngle = M_PI / 2;
		
		rep(j,0,m){
			cin >> angle >> distance;
			angleRad = (angle * M_PI / 180);
			angleRad = fmod((lastAngle + angleRad), 360.0);
			lastAngle = angleRad;
			x += cos(angleRad) *distance;
			y += sin(angleRad) *distance;
		}
		cout << x << " " << y << endl;
	}
	
}
