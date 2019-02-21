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
	int x, y, z, g, p, b;
	cin >> x >> y >> z >> g >> p >> b;
	bool flag = false;
	int gnp = 0;
	if(g-x >=0){
		g = g-x;
		flag = true;
	}
	if(flag && g+p-y >=0){
		gnp = g+p-y;
	}
	else
		flag = false;
	if (flag && gnp+b -z>=0)
	{
		cout << "YES"<<endl;
	}
	else{
		cout << "NO"<<endl;

	}
	return 0;
}