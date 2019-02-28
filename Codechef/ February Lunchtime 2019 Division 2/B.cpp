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
		ll a;
		cin >> a;
		int flag1=0;
		ll D1, D2;
		for(ll i = 1; i<64; i++){
			if(pow(2, i)-1 > (i)*a){
				D1 = i;
				break;
			}
		}
		for(ll i = 1; i<64; i++){
			if(pow(2, i-1) >= a){
				D2 = i;
				break;
			}
		}
		cout << D1-1 << " " << D2-1 << endl;

	}
	return 0;
}