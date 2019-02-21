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

bool isVowel(char a){
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')return true;
	return false;
}

int main(int argc, char const *argv[])
{
	io;
	string s, t;
	cin >> s >> t;
	if(s.length() != t.length()){
		cout << "No"<< endl;
		return 0;
	}
	else{
		for (int i = 0; i < s.length(); ++i)
		{
			if(isVowel(s[i]) != isVowel(t[i])){
				cout << "No"<< endl;
				return 0;
			}
		}
	}
	cout << "Yes"<<endl;
	return 0;
}