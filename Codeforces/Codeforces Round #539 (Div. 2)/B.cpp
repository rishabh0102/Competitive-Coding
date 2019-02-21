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
	int sum = 0;
	for(int i = 0; i<n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	int result = sum;
	int mn = *min_element(arr.begin(), arr.end());
	int sum_without_min = sum - mn;
	for(int i = 0; i<n;i++){
		for(int j = 1; j<=min(100, arr[i]); j++){
			if(arr[i]%j == 0){
				int temp  =sum_without_min - arr[i] + arr[i]/j + mn*j;
				result = min(result, temp);
			}
		}
	}
	cout << result << endl;
	return 0;
}