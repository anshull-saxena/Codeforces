//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <string>
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
int n,k;cin>>n>>k;

for(int i=n-k;i<=n;i++){
    cout<<i<<" ";
}
for(int i=n-k-1;i>=1;i--){
    cout<<i<<" ";
}
cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}