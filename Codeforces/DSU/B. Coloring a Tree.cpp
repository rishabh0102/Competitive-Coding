#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(0);
int color[10005], parent[100005];
int main(int argc, char const *argv[])
{
	io
	int n;
	cin >> n;
	int result = 0;
	for (int i = 2; i<=n; i++){
		cin >> parent[i];
	}
	for (int i = 1; i<=n; i++){
		cin >> color[i];
		if (color[i] != color[parent[i]]) result++;
	}
	cout << result << endl;
	return 0;
}