//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <ios>
#include <iostream>
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;cin>>n;
    vll ithprice(n);
    fo(i,n){
        cin>>ithprice[i];
    }
    sort(ithprice.begin(),ithprice.end());
    ll q;cin>>q;
    vll limit(q);
    fo(i,q){
        cin>>limit[i];
    }

    fo(i,q){
        ll ans = upper_bound(ithprice.begin(), ithprice.end(), limit[i]) - ithprice.begin();
        cout<<ans<<endl;    
    }
}