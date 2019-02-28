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

int root(vi &arr, int i){
	while(arr[i]!= i){
		arr[i] = arr[arr[i]];
		i = arr[i];
	}
	return i;
}

void weighted_union(vi &arr, vi &size, int x, int y){
	int root_x = root(arr, x);
	int root_y = root(arr,y);
	if(root_x == root_y) return;
	if(size[root_x] > size[root_y]){
		arr[root_y] = root_x;
		size[root_x] += size[root_y];
		size[root_y] = 0;
	}
	else{
		arr[root_x] = root_y;
		size[root_y]+= size[root_x];
		size[root_x] = 0;
	}
}

void initalize(vi &arr, vi &size, int n){
	for (int i = 1; i <= n; ++i) {
		arr[i] = i;
		size[i] = 1;
	}
}

void printAns(vi &size){
	vi ans(size);
	sort(ans.begin(),ans.end());
	for(int i = 0; i< ans.size(); i++){
		if(ans[i]!=0){
			cout << ans[i] << " ";
		}
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	io
	int n,m;
	cin >> n >> m;
	vector<int> arr(n+1), size(n+1);
	initalize(arr, size, n);
	int x,y;
	for(int i = 0; i<m; i++){
		cin >> x >> y;
		weighted_union(arr,size,x,y);
		printAns(size);
	}
	return 0;
}