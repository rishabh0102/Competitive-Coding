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
		ll n, k ,v;
		cin >> n >> k >> v;
		ll sum = 0;
		for (int i = 0; i < n; ++i)
		{
			ll temp;
			cin >> temp;
			sum+=temp;

		}
		// cout << "sum" << sum<<endl;
		ll org = (n+k)*v -sum;
		ll res = org/k;
		if(res <=0 || org%k!=0){
			cout << -1 << endl;
		}
		else
			cout << res << endl;

	}
	return 0;
}