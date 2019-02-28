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
	vi arr(n);
	vi result;
	for(int i = 0;i <n; i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i+=2)
	{
		cout << arr[i] <<" ";
	}
	for (int i = (n%2 ? n-2 : n-1); i > 0; i-=2)
	{
		cout << arr[i]<< " ";
	}
	
	return 0;
}