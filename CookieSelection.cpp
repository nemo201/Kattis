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
	string s;
	priority_queue <int> max_pq;
	priority_queue <int, vector<int>, greater<int>> min_pq;
	int val =0;
	
	while (cin >> s){
		if(s!="#"){
			val = stoi(s);
			if(min_pq.size()==0)
				min_pq.push(val);
			else{
				int d_min = min_pq.top();
				if(val > d_min){
					//cout << "adding value of min priority queue " << val << endl;
					min_pq.push(val);
					if(min_pq.size() > (max_pq.size()+1)) {
						d_min = min_pq.top();
						//cout << "pop " << d_min << "from min priority queue to max \n";
						min_pq.pop();
						max_pq.push(d_min);
					}
				}
				else {
					max_pq.push(val);
					//cout << "adding value of max priority queue " << val << endl;
					if(max_pq.size() > min_pq.size()){
						int d_max = max_pq.top();
						//cout << "pop" << d_max << "from max priority queue to min \n";
						max_pq.pop();
                        min_pq.push(d_max);
					}
				}
			}
		}
		else {
               int d_min = min_pq.top();
              //cout << "value of min priority queue " << d_min << endl;
               min_pq.pop();
               if (min_pq.size()!=max_pq.size()){

                   int d_max = max_pq.top();
                   //cout << "trasnferrign from max to min priority queue" << d_max <<endl;
                   max_pq.pop();
                   min_pq.push(d_max);
               }
               cout << d_min << endl;
          }
	}
}
