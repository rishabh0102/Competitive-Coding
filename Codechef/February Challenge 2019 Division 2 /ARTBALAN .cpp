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
		string s;
		cin >> s;
		int n = s.length();
		vi freq(26);
		vi freq_grt_zero;
		for(int i = 0; i<n;i++){
			freq[s[i] - 'A']++;
		}
		for(int i = 0; i<26;i++){
			if(freq[i] > 0){
				freq_grt_zero.pb(freq[i]);
			}
		}
		sort(freq_grt_zero.rbegin(), freq_grt_zero.rend());
		int m = freq_grt_zero.size();
		int result = n;
		// i denotes number of unique char in new string
		for(int i = 1; i<=min(n, 26); i++){
			if(n % i != 0) continue;
			int more_than_req = 0, less_than_req = 0;
			for(int j = 0; j<min(i,m); j++){
				int required = freq_grt_zero[j] - n/i;
				if(required > 0) more_than_req += required;
				else less_than_req -= required;
			}
			result = min(result, max(more_than_req, less_than_req));
		}
		cout << result << endl;

	}
	return 0;
}