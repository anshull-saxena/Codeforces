//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <iostream>
#include <stack>
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
    string s;
    cin >> s;
    
    map<char, int> freq;
    for(char c : s) {
        freq[c]++;
    }
    
    int oddCount = 0;
    for(auto& p : freq) {
        if(p.second % 2 == 1) {
            oddCount++;
        }
    }
    
    if(oddCount <= k + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}