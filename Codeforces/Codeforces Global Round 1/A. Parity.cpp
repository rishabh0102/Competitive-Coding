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
	int b, k;
	cin >> b >> k;
	int a[k];
	int cnt = 0;
	for(int i = 0; i<k;i++){
		cin >> a[i];
		// number of odd is even
		if(a[i]%2) cnt++;
	}
	if(b % 2 == 0){
		if(a[k-1] % 2 == 0)
			cout << "even"<<endl;
		else
			cout << "odd" << endl;
	}
	else{
		if(cnt % 2 == 0)
			cout << "even"<<endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}