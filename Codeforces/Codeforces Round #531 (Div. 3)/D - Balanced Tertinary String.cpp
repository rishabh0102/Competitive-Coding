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
	int n;
	cin >> n;
	string s;
	cin >> s;
	int curr[3];
	memset(curr, 0, sizeof(curr));
	for(int i = 0; i<n;i++){
		curr[s[i] - '0']++;
	}
	for(int i = 0; i<n&&curr[0]<n/3; i++){
		if(curr[s[i] - '0'] <=n/3)continue;
		if(s[i]!= '0'){
			curr[s[i] - '0']--;
			s[i] = '0';
			curr[s[i] - '0']++;
		}
	}
	for(int i = 0; i<n&&curr[1]<n/3; i++){
		if(curr[s[i] - '0'] <=n/3)continue;
		if(s[i] == '2'){
			curr[s[i] - '0']--;
			s[i] = '1';
			curr[s[i] - '0']++;
		}
	}
	for(int i = n-1; i>=0&&curr[2]<n/3; i--){
		if(curr[s[i] - '0'] <=n/3)continue;
		if(s[i]!= '2'){
			curr[s[i] - '0']--;
			s[i] = '2';
			curr[s[i] - '0']++;
		}
	}
	for(int i = n-1; i>=0&&curr[1]<n/3; i--){
		if(curr[s[i] - '0'] <=n/3)continue;
		if(s[i]!= '1'){
			curr[s[i] - '0']--;
			s[i] = '1';
			curr[s[i] - '0']++;
		}
	}
	cout << s << endl;
	return 0;
}