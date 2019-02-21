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

int main(int argc, char const *argv[])
{
/*Imagine the array where we remove all "irrelevant" elements that are not in the largest m * k elements.
 It is trivial to see that we can simply place the dividers for every m elements.

Then just re-insert all the "irrelevant" elements back into their proper locations and we now have our complete answer.

*/
    io
    int n,m,k;
    cin >> n >> m >> k;
    vector<ii> vec(n);
    for(int i = 0; i<n;i++){
        cin >> vec[i].first;
        vec[i].second = i;
    }
    sort(vec.rbegin(), vec.rend());
    ll sum_beauty = 0;
    vi index(m*k);
    for(int i = 0; i< m*k; i++){
        sum_beauty += vec[i].first;
        index[i] = vec[i].second;
    }
    sort(index.begin(), index.end());
    cout << sum_beauty << endl;
    for(int i = 0; i<k-1; i++){
        cout << index[(i+1)*m - 1] + 1 << " ";
    }
    return 0;
}