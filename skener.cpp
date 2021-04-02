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
	int r,c,zr,zc;
	cin >> r >> c >> zr >> zc;
	char arr[r][c];
	int rows = r*zr;
	int cols = c*zc;
	char arr2[rows][cols];
	
	rep(i,0,r){
		rep(j,0,c){
			cin >> arr[i][j];
		}
	}
	
	rep(i,0,rows){
		rep(j,0,cols){
			if (arr[i][j] == '.'){
				arr2[i][j] = '.';
				arr2[i][j+1] = '.';
			}
			if (arr[i][j] == 'X'){
				arr2[i][j] = 'X';
				arr2[i][j+1] = 'X';
			}
		}
	}
}
