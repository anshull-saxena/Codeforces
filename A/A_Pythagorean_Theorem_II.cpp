//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

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

int main(){
    ll n;
    cin>>n;

    int counter = 0;
    for(int i = 1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            int k =  i*i+j*j;
            if(sqrt(k) - floor(sqrt(k))==0 && sqrt(k)<=n) counter++;
        }   
    }
    c(counter);
}