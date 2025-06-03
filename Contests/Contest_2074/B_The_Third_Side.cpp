//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include<bits/stdc++.h>
#include <iterator>
#include <stack>
#include <utility>
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
vll arr(n);

fo(i,n) cin>>arr[i];

sort(arr.rbegin(),arr.rend());
int sum = 0;
stack<int> st;
fo(i,n) st.push(arr[i]);

while(st.size() >= 2){
    int s = st.top(); st.pop();
    int l = st.top();st.pop();

    st.push(s+l-1);

}
cout<<st.top()<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) {
        _code();
    }
}