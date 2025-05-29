//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

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

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  } else
    return gcd(b % a, a);
}

int main() {
	int n,m,x,y,a,b;
	cin>>n>>m>>x>>y>>a>>b;
	int g = gcd(a,b);
	a/=g;
	b/=g;

	int scale = min(n/a,m/b),
		x0 = 0, y0 = 0,
		xn = scale*a, ym = scale*b;
	x0 = x-xn/2 - xn%2;
	y0 = y-ym/2 - ym%2;
	if (x0<0) x0=0;
	if (y0<0) y0=0;
	if (x0+xn>n)x0 = n - xn;
	if (y0 +ym>m)y0 = m - ym;
	cout<<x0<<" "<<y0<<" "<<x0+xn<<" "<<y0+ym<<endl;
  }