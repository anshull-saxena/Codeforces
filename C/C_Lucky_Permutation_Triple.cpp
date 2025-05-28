//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

#include <algorithm>
#include <bits/stdc++.h>
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

int main() {
  int n;
  cin >> n;

  bool diff = true;
  int a[n], b[n], c[n];

  if (n > 1) {
    a[0] = 0;
    b[0] = 1;
    c[0] = 1;
    fo(i, n - 1) {
      a[i + 1] = i + 1;
      b[i + 1] = (i + 2) % n;
      c[i + 1] = (a[i + 1] + b[i + 1]) % n;
    }

  } else {
    a[0] = b[0] = c[0] = 0;
  }

  vector<int> vec(c, c + n);
  sort(vec.begin(), vec.end());
  fo(i, n - 1) {
    if (vec[i] == vec[i + 1]) {
      diff = false;
      break;
    }
  }
  if (diff) {

    fo(i, n) cout << a[i] << " ";
    cout << endl;

    fo(i, n) cout << b[i] << " ";
    cout << endl;

    fo(i, n) cout << c[i] << " ";
    cout << endl;
  } else
    cout << -1 << endl;
}