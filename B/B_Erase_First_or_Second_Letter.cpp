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

void processString(string s, set<string>& setS) {
    if (s.size() <= 1) {  
        return;
    }
    
    setS.insert(s);
    
    int len = s.size();
    
    string temp = s.substr(1); 
    string temp2 = s.substr(0, 1) + s.substr(2);  

    if (!temp.empty()) setS.insert(temp);
    if (!temp2.empty()) setS.insert(temp2);
    
    processString(temp, setS);
    processString(temp2, setS);
}

void _code(){
    int n;cin>>n;
    set<string> setS;
    string s;cin>>s;
    processString(s, setS);


    if(s.size()==1){cout<<1<<endl;}else {
            cout<<setS.size()<<endl;

    }
}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}