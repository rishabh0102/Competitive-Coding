#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
	io
	int b, k;
	cin >> b >> k;
	int a[k];
	int cnt = 0;
	for(int i = 0; i<k;i++){
		cin >> a[i];
		// number of odd is even
		if(a[i]%2) cnt++;
	}
	if(b % 2 == 0){
		if(a[k-1] % 2 == 0)
			cout << "even"<<endl;
		else
			cout << "odd" << endl;
	}
	else{
		if(cnt % 2 == 0)
			cout << "even"<<endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}