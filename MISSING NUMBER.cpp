#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
   freopen("MISSINGNUMBER.INP","r",stdin);
   freopen("MISSINGNUMBER.OUT","w",stdout);
   int n;
   cin >> n;
   n--;
   long long a[n];
   for (int i=0;i<=n;i++){
       cin >> a[i];
    }
   sort(a,a+n);
   for (int i=0;i<=n;i++){
      if (a[i]!=i+1){
        cout<<i+1;
        break;
      }
    }
   return 0;
}


//https://cses.fi/problemset/task/1083/
