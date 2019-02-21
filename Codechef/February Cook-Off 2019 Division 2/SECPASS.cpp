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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		vi index_of_1st_char;
		for(int i = 1; i<n; i++){
			if(s[i] == s[0]){
				index_of_1st_char.pb(i);
			}
		}
		if(index_of_1st_char.size() == 0){
			cout << s<< endl;
		}
		else{
			int max_len_prefix = 0;
			for(int i = 0;i<n;i++){
				bool found = true;
				for(int j = 0; j<index_of_1st_char.size(); j++){
					if(index_of_1st_char[j]+i < n){
						if(s[index_of_1st_char[j] + i]!=s[i]){
							found = false;
							break;
						}
					}
					else{
						found = false;
						break;
					}
				}
				if(found)
					max_len_prefix++;
				else
					break;
			}
			cout << s.substr(0, max_len_prefix)<<endl;
		}
	}
	return 0;
}