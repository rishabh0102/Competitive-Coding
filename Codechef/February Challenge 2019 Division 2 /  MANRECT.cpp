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
	int t, res;
	cin >> t;
	while(t--){
		ll R1, R2, R3, R4;
		ll X1, X2, Y1, Y2;
		ll u = 1e9;
		cout << "Q"<<" "<<0<<" "<<0<<endl; // R1 = X1+Y1
		cin >> R1;
		cout << "Q"<<" "<<u<<" "<<0<<endl; // R2 = u-X2 + Y1
		cin >> R2;
		cout << "Q"<<" "<<(R1-R2+u)/2<<" "<<0<<endl; // X1+X2/2 any point btw X1 & X2 give you Y1 as shortest distance
		cin >> R3; // R3=Y1
		cout << "Q"<<" "<<0<<" "<<u<<endl; // R4 = (X1-0) + (u-Y2)
		cin >> R4;
		Y1 = R3;
		X1 = R1-R3;
		X2 = u+Y1-R2;
		Y2 = X1+u-R4;
		cout << "A"<<" "<<X1<<" "<<Y1<<" "<<X2<<" "<<Y2<<endl;
		cin >> res;
		if(res<0)
			return 0;
	}
	return 0;
}