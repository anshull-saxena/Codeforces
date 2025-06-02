//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include <algorithm>
#include<bits/stdc++.h>
#include <cmath>
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


void _code(){
    int n, k;
    cin >> n >> k; 
    int c0,c1;
    string s;cin>>s;
    c0 = count(s.begin(), s.end(), '0');
    c1 = n-c0;

    int mx = c0/2 + c1/2;
    int mn = (max(c0,c1) - min(c0,c1))/2;

    if(mn == mx && mx==k)cout<<"YES\n";
    else {
        if( k>=mn && (mx - k)%2==0){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}