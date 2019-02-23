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
const int mx = 100005;
int cakes = 100000;
int height[mx], tarcount[mx], tarpluscount[mx];
pair<int,int> query[mx];
int main(int argc, char const *argv[])
{
	io
	int t;
	cin >> t;
	while(t--){
		int n,target,l,r;
		cin >> n >> target;
		for(int i = 0 ; i <= cakes ; i++){
			height[i] = 0;
			tarcount[i] = 0;
			tarpluscount[i] = 0;
		}
		for (int i = 1; i <= n; i++)
		{	
			cin >> l >> r;
			query[i] = {l,r};
			//calculating change in height from the previous cake
			height[l]++;
			height[r+1]--;
		}
		for(int i = 1; i<=cakes; i++){
			// calculating height i.e adding prev cake height in the change
			height[i] += height[i-1];
			tarcount[i] = tarcount[i-1];
			tarpluscount[i] = tarpluscount[i-1];
			if (height[i] == target) tarcount[i]++;
			else if(height[i] == target+1)tarpluscount[i]++;

		}
		int result = 0;
		for(int i = 1; i<=n; i++){
			l = query[i].first;
			r = query[i].second;
			int temp = tarcount[l-1] + tarpluscount[r] - tarpluscount[l-1] + tarcount[cakes] -tarcount[r];
			result = max(result, temp);
		}
		cout << result << endl;
	}
	return 0;
}