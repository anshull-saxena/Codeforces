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

void _code() {
  int a, b;
  cin >> a >> b;
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
set<pair<int,int> > set1,set2;
int s[4] = {-1,-1,1,1};
int s2[4] = {1,-1,-1,1};

for (int i = 0; i < 4; i++) {
set1.insert(make_pair(x1 + s[i] * a, y1 + s2[i] * b));
set2.insert(make_pair(x2 + s[i] * a, y2 + s2[i] * b));
set1.insert(make_pair(x1 + s[i] * b, y1 + s2[i] * a));
set2.insert(make_pair(x2 + s[i] * b, y2 + s2[i] * a));
}
int count  = 0;
for ( auto temp : set1){
    if(set2.find(temp)!=set2.end()){
        count++;
    }
}
cout<<count<<endl;
}

  int main() {
    ll t;
    cin >> t;
    while (t--) { 
      _code();
    }
  }