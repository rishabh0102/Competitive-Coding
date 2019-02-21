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
	string s;
	cin >> s;
	stack<char>st;
	int n = s.length();
	int count = 0;
	for(int i = 0;i<n; i++){
		if(!st.empty() && st.top() == s[i]){
			count++;
			st.pop();
		}
		else{
			st.push(s[i]);
		}
	}
	if(count%2 == 0){
		cout << "No"<<endl;
	}
	else{
		cout << "Yes"<<endl;
	}
	return 0;
}