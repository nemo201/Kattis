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
	int n,c,x;
	while(cin >> n){
		bool bq = true, bs = true, bpq = true;
		queue<int> q;
		stack<int> s;
		priority_queue<int> pq;
		while(n--){
			cin >> c >> x;
			if(c == 1){
				if(bq)
					q.push(x);
				if(bs)
					s.push(x);
				if(bpq)
					pq.push(x);
			}
			else {
				if(bq) {
					if(q.empty() || q.front() != x)
						bq = false;
					if(bq)
						q.pop();
				}
				if(bs) {
					if(s.empty() || s.top() != x)
						bs = false;
					if(bs)
						s.pop();
				}
				if(bpq) {
					if(pq.empty() || pq.top() != x)
						bpq = false;
					if(bpq)
						pq.pop();
				}
			}
		}
		if(!bq && !bs && !bpq)
			cout << "impossible\n";
		else if(bq && !bs && !bpq)	
			cout << "queue\n";
		else if(!bq && bs && !bpq)
			cout << "stack\n";
		else if(!bq && !bs && bpq)	
			cout << "priority queue\n";
		else
			cout << "not sure\n";
	}
	return 0;
}
