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

bool isSafe(int r, int c){
	if(r<1 || c<1 || r>8 || c>8) return false;
	return true;
}

void calculate(vector<vector<bool>> &visited,vector<vector<bool>> &r_visited, int r, int c, int k, int current){
	if(current >= k)
		return;
	int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
	int dy[8] = {0, -1, 1, -1, 1, 1, 0, -1};
	for(int i = 0; i<8; i++){
		int x = r+dx[i];
		int y = c+dy[i];
		// cout << "before safe " << x << " "<< y<<endl;
		if(isSafe(x, y) && !visited[x][y]){
			// cout << "safe " << x << " "<< y<<endl;
			visited[x][y] = true;
			r_visited[x][y] = true;
			calculate(visited,r_visited, x, y, k, current+1);
			visited[x][y] = false;
		}
	}

}

int main(int argc, char const *argv[])
{
	io;
	int t;
	cin >> t;
	while(t--){
		int r,c,k;
		cin >> r >>c>>k;
		vector<vector<bool>>visited(9,vector<bool>(9, false));
		vector<vector<bool>>r_visited(9,vector<bool>(9, false));
		visited[r][c] = true;
		r_visited[r][c] = true;
		int current = 0;
		calculate(visited,r_visited, r, c, k, current);
		int result = 0;
		for(int i = 1;i<9;i++){
			for(int j = 1; j<9; j++){
				if(r_visited[i][j]){
					result++;
				}
			}
		}
		for(int i = 1;i<9;i++){
			for(int j = 1; j<9; j++){
				cout << r_visited[i][j] <<" ";
			}
			cout << endl;
		}

		cout << result<<endl;
	}
	return 0;
}