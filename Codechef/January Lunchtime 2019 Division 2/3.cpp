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
	int t;
	cin >> t;
	while(t--){
		double n, temp;
		int flag = 1;
		cin >> n;
		vector<double> a(n,0);
		vector<double> b(n,0);
		for(int i = 0;i<n; i++){
			cin >> a[i];			
		}
		for(int i = 0;i<n; i++){
			cin >> b[i];
		}
		if(a[0]!=0 || b[n-1]!=0) cout<<"No"<<endl;
		else if(a[n-1]!=b[0]) cout<<"No"<<endl;
		else{
			int dista_b = b[0];
			for(int i = 1;i<n-1;i++){
			// cout << i <<" "<< n-i-1<<endl;
			if(a[i] + b[i] < dista_b || a[i] == 0 || b[i] == 0 || a[n-1]+b[i] < a[i] || a[i]+b[0] < b[i]){
				cout<<"No"<<endl;
				flag = 0;
				break;
			}
		}
			if(flag){
				cout << "Yes"<<endl;
			}

		}

	}

	return 0;
}

