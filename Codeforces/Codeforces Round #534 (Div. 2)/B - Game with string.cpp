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
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0;i<s.length()-1 && s.length()>0; i++){
		// cout << "before i " << i<< endl;
		if(s[i] == s[i+1]){
			count++;
			s.erase(s.begin()+i, s.begin()+i+2);
			// cout <<"string " << i<<" " << s << endl;
			// cout << "after erase "<< s <<" "<< s.length()<<endl;
			// cout <<"index "<<s[0]<<s[1]<<endl;
			i = i-2;
			if(i<0){
				i = -1;
			}
			// cout << (s[i] == s[i+1])<< endl;
			// cout << "i "<< i << endl; 
		}

	}
	if(count%2 == 0){
		cout <<"No"<<endl;
	}
	else{
		cout << "Yes"<< endl;
	}
	return 0;

}