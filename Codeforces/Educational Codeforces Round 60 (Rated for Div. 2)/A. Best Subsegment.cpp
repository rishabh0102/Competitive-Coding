#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(0);
int main(int argc, char const *argv[])
{
	io
	int n;
	cin >> n;
	int mx = -1, cnt = 0, result = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if(x == mx){
			cnt++;
		}
		else if(x > mx){
			mx = x;
			cnt = 1;
			result = 1;
		}
		else{
			result = max(result, cnt);
			cnt = 0;
		}
	}
	result = max(result, cnt);
	cout << result<<endl;
	return 0;
}