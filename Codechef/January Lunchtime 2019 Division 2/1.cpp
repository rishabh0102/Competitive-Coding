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
		string s;
		int n;
		cin >> n;
		cin >>s;
		int count0= 0 ,count1=0;
		vector<int> result;
		int temp = 0;
		int index = 0;
		for(int i = 0;i <n;i++){
			if(s[i] == '0'){
				count0++;
			}
			else
				count1++;
		}
		if(count0 == n){
			cout << n/2 + n%2 << endl;
		}

		else{
			while(s[index] == '0'){
				temp++;
				index++;
			}
			if(temp!=0)result.push_back(temp);
			temp = 0;
			for(int i = index; i<n-1;i++){
				if(s[i] == '0'){
					if(s[i] == s[i+1]){
						temp++;
					}
					else{
						if(temp>0){
							result.push_back(temp);
							temp = 0;
						}
					}					
				}
			}
			if(temp!=0) result.push_back(temp+1);
			temp = 0;
			for(int i = 0;i<result.size(); i++){
				// cout <<result[i]<<" ";
				temp += result[i]/2;
			}
			// cout << endl;
			cout << temp << endl;
		}
	}
	return 0;
}