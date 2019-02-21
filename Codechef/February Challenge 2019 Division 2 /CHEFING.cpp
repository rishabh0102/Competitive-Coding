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
	int t;
	io
	cin >> t;
	while(t--){
		int n;
		unordered_map <char, int> mp;
		cin >> n;
		for(int i = 0; i<n; i++){
			string s;
			cin >> s;
			for(int j = 0; j<s.length(); j++){
				if(mp[s[j]] == i){
					mp[s[j]]++;
				}
			}
		}
		int result = 0;
		for(auto it = mp.begin(); it!=mp.end(); it++){
			if(it->second == n){
				result++;
			}
		}
		cout << result << endl;
	}
	return 0;
}