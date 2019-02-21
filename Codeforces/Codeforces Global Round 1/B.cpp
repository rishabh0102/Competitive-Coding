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
  io
  int n,m,k;
  cin >> n >> m >> k;
  vi v(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> v[i];
  }
  vi gaps;
  for(int i = 0; i<n-1;i++){
    gaps.pb(v[i+1] - v[i] -1);
  }
  // will sort in descending order
  sort(gaps.rbegin(), gaps.rend());
  int result = v[n-1] - v[0] + 1;
  for (int i = 0; i < k-1; ++i)
  {
    result -= gaps[i];
    /* code */
  }
  cout << result << endl;
  return 0;
}