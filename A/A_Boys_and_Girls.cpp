//   ____                  _           _ _       
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___ 
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__ 
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/                                       

#include <bits/stdc++.h>
using namespace std;
#define ll                    long long int
#define pb                    push_back
#define vi                    vector<int>
#define vll                   vector<ll>
#define vc                    vector<char>
#define fo(i, n) for (long long i = 0; i < n; i++)
#define s(a) a.size()
#define c(out) cout << out << endl

/*---------------------------------------------------------------CODE BEGINS ->!---------------------------------------------------------------------------*/

int main() {
    // Use file input/output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    int maxCount = max(n, m);
    int minCount = min(n, m);
    char maxC = (n > m) ? 'B' : 'G';
    char minC = (n > m) ? 'G' : 'B';

    for (int i = 0; i < minCount; ++i) {
        cout << maxC << minC;
    }

    for (int i = 0; i < maxCount - minCount; ++i) {
        cout << maxC;
    }

    cout << endl;
    return 0;
}
