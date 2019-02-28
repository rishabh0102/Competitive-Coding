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
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vi arr(n);
		unordered_set<int> grt_k
		unordered_map<int, vector<int>> mp;
		for(int i = 0; i<n; i++){
			cin >> arr[i];
			mp[arr[i]].pb(i);
			if(mp[arr[i]].size()>=k)
			grt_k.insert(arr[i]);
		}
		int result = 0;
		for(auto i : s){
			for(int j = 0; i<map[i].size(); j++){
				
			}
		}

	}
	return 0;
}