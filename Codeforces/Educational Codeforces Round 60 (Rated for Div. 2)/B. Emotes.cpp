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
	ll n, m, k;
	ll result = 0;
	cin >> n >> m >> k;
	vector<ll> arr(n);
	for(ll i = 0; i<n ;i ++){
		cin >> arr[i];
	}
	sort(arr.rbegin(), arr.rend());
	ll mx = arr[0];
	ll mx_2 = arr[1];
	int temp = 0;
	int rem = m;
	ll blocks = m/(k+1);
	result = m*mx;
	result -= blocks*mx;
	result += blocks*mx_2;
	cout << result << endl;
	return 0;
}