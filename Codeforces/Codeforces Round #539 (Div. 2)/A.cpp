#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define mp make_pair
#define pb push_back
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;

int main(int argc, char const *argv[])
{
	io
	int n,v;
	cin >> n >> v;
	int o_n = n;
	n--;
	int cost  = min(n, v);
	if(cost == n){
		// cout << cost << endl;
	}
	n = n-cost;
	int temp = 2;
	int i = 0;
	while(i<n){
		cost += temp;
		temp++;
		i++;
	}
	// cout << cost << endl;
	int ans = o_n - 1;
	for(int i = 1; i<o_n-v; i++) ans+=i;
	if (ans == cost){
		cout << "True"<<endl;
	}
	else{
		cout << "False"<<endl;
		cout << "ans " << ans << " my = " << cost <<endl;  
	}
	return 0;
}