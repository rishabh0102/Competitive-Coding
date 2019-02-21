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
	io;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> attack(n, 0);
		vector<int> defense(n, 0);
		int result = -1;
		for(int i = 0; i<n ;i++){
			cin >> attack[i];
		}
		for(int i = 0; i<n ;i++){
			cin >> defense[i];
		}
		for(int i = 0; i<n; i++){
			if(i == 0){
				if(attack[n-1] + attack[i+1] < defense[i])
					result = max(result, defense[i]);
			}
			else if( i == n-1){
				if(attack[i-1] + attack[0] < defense[i])
					result = max(result, defense[i]);
			}
			else{
				if(attack[i-1] + attack[i+1] < defense[i])
					result = max(result, defense[i]);
			}
		}
		cout << result << endl;
	}
	return 0;
}