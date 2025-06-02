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

void _code(){
int n;cin>>n;
int a[n]; 

int last = -1;
int counter = 0;
fo(i,n) {
    cin>>a[i];
    if(a[i]-last>1){
        last=a[i];
        counter++;
    }
}
cout<<counter<<endl;


}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}