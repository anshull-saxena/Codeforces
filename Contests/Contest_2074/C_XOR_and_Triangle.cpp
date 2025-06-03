//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

#include <bits/stdc++.h>
#include <bitset>
#include <cstdlib>
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
string decToBinary(int n) {
  string bin = "";

  while (n > 0) {
    int bit = n % 2;
    bin.push_back('0' + bit);
    n /= 2;
  }

  reverse(bin.begin(), bin.end());
  return bin;
}

int binaryToDecimal(string s) {
  int dec_value = 0;
  int base = 1;
  
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '1') {
      dec_value += base;
    }
    base *= 2;
  }
  
  return dec_value;
}

void _code() {
  int x;
  cin >> x;
  string s = decToBinary(x);
  string original = s;
  

}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    _code();
  }
  return 0;
}