
 /*
                _                _____             _                 
     /\        (_)              / ____|           (_)                
    /  \   _ __ _ _   _ _ __   | (___   __ _ _ __  _  ___  _____   __
   / /\ \ | '__| | | | | '_ \   \___ \ / _` | '_ \| |/ _ \/ _ \ \ / /
  / ____ \| |  | | |_| | | | |  ____) | (_| | | | | |  __/  __/\ V / 
 /_/    \_\_|  | |\__,_|_| |_| |_____/ \__,_|_| |_| |\___|\___| \_/  
              _/ |                               _/ |                
             |__/                               |__/                 
*/

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define let(x,a) __typeof(a) x(a)
#define all(a) (a).begin(),(a).end() 
#define endl '\n'
#define present(c,x) ((c).find(x) != (c).end()) 
#define tr(v,it) for(let(it,v.begin()); it != v.end(); it++)
#define rtr(v,it) for(let(it,v.rbegin()); it != v.rend(); it++)

#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

#define ll long long int
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	bool flag[2];
	flag[0]=flag[1]=false;
	int n=s.length();
	for(int i=0;i<n;i++) {
		if(s[i]=='0') {
			if(flag[0]) {
				cout<<"3 1"<<endl;
				flag[0]=false;
			} else {
				cout<<"1 1"<<endl;
				flag[0]=true;
			}
		} else {
			if(flag[1]) {
				cout<<"4 1"<<endl;
				flag[1]=false;
			} else {
				cout<<"4 3"<<endl;
				flag[1]=true;
			}
		}
	}
	return 0;
}