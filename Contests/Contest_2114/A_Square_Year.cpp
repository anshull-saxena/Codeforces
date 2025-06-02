//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define fo(i, n) for (long long i = 0; i < n; i++)
#define s(a) a.size()
#define c(out) cout << out << endl

/*---------------------------------------------------------------CODE BEGINS
 * ->!---------------------------------------------------------------------------*/

void _code() {
  int s;cin>>s;

  int x = ceil(sqrt(s));
    if (x * x == s) {
        cout << 0 << ' ' << x << "\n";
    } else {
        cout << "-1"<<endl;
    }
}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    _code();
  }
}