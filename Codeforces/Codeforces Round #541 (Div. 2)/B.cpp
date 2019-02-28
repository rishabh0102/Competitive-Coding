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
	int n;
	cin >> n;
	ll p_a=0, p_b=0;
	ll a,b;
	ll res=0;
	for(int i = 0; i<n;i++){
		cin >> a >> b;
		res+= max(0ll, min(a,b)-max(p_a,p_b)+ (a!=b));
		p_a=a;
		p_b=b;
	}
	cout << (res + (a==b));
	return 0;
}