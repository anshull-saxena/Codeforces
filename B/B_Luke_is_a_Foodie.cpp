//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
using namespace std;
#define ll                    long long int
#define pb                    push_back
#define vi                    vector<int>
#define vll                   vector<ll>
#define vc                    vector<char>
#define fo(i, n) for (long long i = 0; i < n; i++)
#define s(a) a.size()
#define c(out) cout<<out<<endl

/*---------------------------------------------------------------CODE BEGINS ->!---------------------------------------------------------------------------*/

void _code() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int changes = 0;
    ll L = a[0] - x, R = a[0] + x; // Initial range for v
    for (int i = 1; i < n; i++) {
        ll L_new = max(L, a[i] - x);
        ll R_new = min(R, a[i] + x);
        if (L_new > R_new) { // Current v cannot cover pile i
            changes++;
            L = a[i] - x;
            R = a[i] + x;
        } else {
            L = L_new;
            R = R_new;
        }
    }
    cout << changes << "\n";
}


int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}