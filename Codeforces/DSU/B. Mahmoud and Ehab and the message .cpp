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
int arr[100005],cost[100005],group[100005];
int main(int argc, char const *argv[])
{
	io
	int n,k,m;
	unordered_map<string, int> mp;
	cin >> n >> k >> m;
	for(int i = 1; i<=n; i++){
		string s;
		cin >> s;
		mp[s] = i;
	}
	for(int i = 1; i<=n; i++){
		cin >> arr[i];
		cost[i] = 1 << 30;
	}
	for(int i = 1; i<=k; i++){
		int x;
		cin >> x;
		while(x--){
			int index;
			cin >> index;
			group[index] = i;
			cost[i] = min(cost[i], arr[index]);
		}
	}
	ll ans = 0;
	for(int i = 0; i<m; i++){
		string s;
		cin >> s;
		ans += cost[group[mp[s]]];
	}
	cout << ans;
	return 0;
}