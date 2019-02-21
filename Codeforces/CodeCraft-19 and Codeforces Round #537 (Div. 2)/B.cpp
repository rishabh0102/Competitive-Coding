#include <bits/stdc++.h>
using namespace std;
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

int main(int arg, char const *argv[])
{
	io;
	long long int n, k,m;
	long double power_after_removal_of_i_ele = 0;
	cin >> n >> k >> m;
	vector<long long int> arr(n+1,0);
	long double sum =0, result=0;
	for(int i =1; i<=n;i++){
		cin >> arr[i];
		sum+=arr[i];
	}
	sort(arr.begin()+1, arr.end());
	result = (long double)(sum + min(m,n*k))/ (long double)(n);
	for(int i=1;i<=min(m, n-1);i++){
		sum -= arr[i];
		power_after_removal_of_i_ele = sum + min(m-i, (n-i)*k);
		result = max(result, (long double)(power_after_removal_of_i_ele)/(long double)(n-i));
	}
	cout << fixed << setprecision(10)<<result<<endl;
	return 0;
}