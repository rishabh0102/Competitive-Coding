#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(0);
        int c[1 << 20][2];
        memset(c, 0, sizeof(c));
        int n;
        cin >> n;
        long long res = 0;
        c[0][0] = 1;
        int s = 0;
        for(int i = 1; i <= n; i++){
                int x;
                cin >> x;
                s ^= x;
                res += c[s][i % 2];
                c[s][i % 2] += 1;
        }
        cout << res << "\n";
}