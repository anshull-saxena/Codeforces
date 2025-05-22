//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

#include <bits/stdc++.h>
#include <iostream>
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, d;
  cin >> n >> d;
  vll power(n);
  sort(power.begin(), power.end());
  fo(i, n) { cin >> power[i]; }
ll count = 0;

vll temp = power;
ll ans = 0;
fo(i,n){
 ans +=  temp.end() - upper_bound(temp.begin(), temp.end(),d);
// Add elements of power to temp index-wise
fo(i,n){
  temp[i]+=power[i];
}
}
cout << ans << endl;


}