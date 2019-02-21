#include <bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
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

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].first;
		arr[i].second = i;	
	}
	sort(arr.begin(), arr.end());
	vector<vector<int>> buckets(k);
	vector<int> res(n);
	for (int i = 0; i < n; ++i) {
		buckets[i % k].push_back(arr[i].first);
		res[arr[i].second] = i % k;
	}
	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < int(buckets[i].size()) - 1; ++j) {
			if (buckets[i][j] == buckets[i][j + 1]) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i) {
		cout << res[i] + 1 << " ";
	}
	cout << endl;
	return 0;
}