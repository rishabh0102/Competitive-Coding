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
	int q;
	cin >> q;
	unordered_map<string, string> mp;
	for (int i = 0; i < q; ++i)
	{
		string old_h, new_h;
		cin >> old_h >> new_h;
		if (mp[old_h] != "")
			mp[new_h] = mp[old_h];
		else
			mp[new_h] = old_h;
		mp.erase(old_h);
	}
	cout << mp.size()<<endl;
	for (auto i : mp)
	{
		cout << i.second <<" " << i.first<<endl;
	}
	return 0;
}