//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <regex>
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
		int count = 0;
		string s;
		cin>>s;
		map<char, int> m;
 
		for(char c : s)
		{
			m[c]++;
		}
		
		for(auto &x: m)
		{
			if(x.second >= x.first - 64)
				count++;
		}
		cout<<count<<'\n';regex_constants::error_brace
 
	}


int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}