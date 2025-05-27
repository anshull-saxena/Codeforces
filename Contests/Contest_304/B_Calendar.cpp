//   ____                  _           _ _
//  / __ \  __ _ _ __  ___| |__  _   _| | |  ___
// / / _` |/ _` | '_ \/ __| '_ \| | | | | | / __|
//| | (_| | (_| | | | \__ \ | | | |_| | | |_\__
// \ \__,_|\__,_|_| |_|___/_| |_|\__,_|_|_(_)___/
//  \____/

#include <bits/stdc++.h>
#include <string>
#include <utility>
using namespace std;
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define fo(i, n) for (long long i = 0; i < n; i++)
#define s(a) a.size()
#define c(out) cout << out << endl

/*---------------------------------------------------------------CODE BEGINS
 * ->!---------------------------------------------------------------------------*/

int normalYr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isleap(int i) {
  if (i % 4 == 0 && i % 100 != 0) {
    return true;
  } else if (i % 400 == 0) {
    return true;
  } else
    return false;
}

int days(int y1, int m1, int da1, int y2, int m2, int da2) {
  int sum = 0;
  int neg = 0;
  if (isleap(y1)) {
    int tempda = da1;
    for (int i = m1; i < 13; i++) {
      sum += leap[i] - tempda;
      tempda = 0;
    }
  } else {
    int tempda = da1;
    for (int i = m1; i < 13; i++) {
      sum += normalYr[i] - tempda;
      tempda = 0;
    }
  }

  if (isleap(y2)) {
    int tempda = da2;
    for (int i = m2; i < 13; i++) {
      neg += leap[i] - tempda;
      tempda = 0;
    }
    sum += 366 - neg;
  } else {
    int tempda = da2;
    for (int i = m2; i < 13; i++) {
      neg += normalYr[i] - tempda;
      tempda = 0;
    }
    sum += 365 - neg;
  }
  return sum;
}

int main() {
  string d1, d2;
  cin >> d1 >> d2;
  int y1 = stoi(d1.substr(0, 4)), y2 = stoi(d2.substr(0, 4));

  int sum = 0, neg = 0;
  int m1 = stoi(d1.substr(5, 2)), m2 = stoi(d2.substr(5, 2));
  int da1 = stoi(d1.substr(8, 2)), da2 = stoi(d2.substr(8, 2));

  if(y1 == y2 && m1 == m2 &&da1 == da2){
    cout<<0<<endl;
    return 0;
  } else if (y1==y2){
    if(isleap(y1)) sum+=(-366);
    else sum+=(-365);
  }else if(y1 > y2) {
    swap(y1, y2);
    swap(da1, da2);
    swap(m1, m2);
  };

  if (y1 != y2) {

    sum += 365 * (y2 - y1 - 1);
    for (int i = y1+1; i < y2; i++) {
      if (isleap(i))
        sum++;
    }
  }
  sum += days(y1, m1, da1, y2, m2, da2);

  cout << abs(sum) << endl;
}