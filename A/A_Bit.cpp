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

int main(){
    int n;
    cin>>n;

    int count =  0;
    string dec = "--",inc = "++";
    fo(i,n){
        string s;
        cin>>s;

        int decF = s.find(dec);
        int incF = s.find(inc);

        if(decF!=string::npos){
            count--;
        }else if(incF!=string::npos){
            count++;
        }
    }
    cout<<count<<endl;
}