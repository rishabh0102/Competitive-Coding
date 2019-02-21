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
		int n,k;
		cin >> n >> k;
		int r, c;
		vector<int> row(n+1, -1);
		vector<int> col(n+1, -1);
		vector<pair<int,int>> result;
		for(int i = 0; i<k; i++){
			cin >> r>>c;
			row[r] = 1;
			col[c] = 1;
		}
		int col_index = 1, row_index = 1;
		while(row_index<=n && row[row_index] == 1){
			row_index++;
		}
		while(col_index<=n && col[col_index] == 1){
			col_index++;
		}
// 		for(int i = 1; i<=n; i++){
// 			cout << row[i]<<" ";
// 		}
// 		cout << endl;
// 		for(int i = 1; i<=n; i++){
// 			cout << col[i]<<" ";
// 		}
// 		cout << endl;
// 		cout << row_index <<" "<< col_index<<" "<<endl;

		for(int i = row_index; i<=n && col_index<=n;i++){
			if(row[i] != 1){
				result.push_back({i, col_index});
				col_index++;
				while(col_index <= n && col[col_index] == 1)col_index++;

			}
		}
		int res_size = result.size();
		cout << res_size<<" ";
		if(res_size > 0){
    		for(int i = 0; i<result.size()-1; i++){
    			cout << result[i].first <<" "<<result[i].second<<" ";
    		}
    		cout << result[res_size-1].first <<" "<<result[res_size-1].second<<endl;
		}


	}

	return 0;
}