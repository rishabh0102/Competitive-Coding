#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false)
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

ll gcd(ll a, ll b){
	if(b == 0) return a;
	a %=b;
	return gcd(b,a);
}

int main(int argc, char const *argv[])
{
	io;
	int t;
	cin >> t;
	while(t--){
		ll n,a,b,k;
		ll div_a, div_b, div_ab, temp;
		cin >> n >> a >> b >> k;
		ll lcm = a*b/gcd(a,b);
		div_a = n/a;
		div_b = n/b;
		div_ab = n/lcm;
		if(div_a + div_b - 2*div_ab >= k)
			cout << "Win"<<endl;
		else
			cout << "Lose"<<endl;
	}
	return 0;
}