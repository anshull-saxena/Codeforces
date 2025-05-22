//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <cmath>
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

void _code(){
        int n,b,r;
        cin>>n>>r>>b;
        int x=r/(b+1),y=r%(b+1),cnt=0;
        for(int i=1;i<=b;i++)
        {
            for(int j=1;j<=x;j++)
            {cout<<'R';cnt++;}
            if(i<=y)cout<<'R',cnt++;
            cout<<'B';cnt++;
        }
        for(int i=cnt+1;i<=n;i++)
        {
            cout<<'R';
        }
        cout<<'\n';
}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}