//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include <algorithm>
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
#define vpa pair<int,int>
/*---------------------------------------------------------------CODE BEGINS ->!---------------------------------------------------------------------------*/


void _code(){
int n,k;
cin>>n>>k;  
vector<pair<int,int> > a(n);
fo(i,n) cin>>a[i].first;
fo(i,n) cin>>a[i].second;

int exp = 0,temp =0,maxB = 0;
int ans = 0;
fo(i,min(n,k)){
exp += a[i].first;
maxB  = max(maxB,a[i].second);

int total = exp+maxB*(k-i-1);
ans = max(ans,total);
}

c(ans);

}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}