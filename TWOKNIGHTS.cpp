#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long



int main(){
   freopen("TWOKNIGHTS.INP","r",stdin);
   freopen("TWOKNIGHTS.OUT","w",stdout);
   ll n;
   cin >> n;
   for (ll i=1;i<=n;i++){
     cout<<(i*i*(i*i-1)/2)-4*(i-1)*(i-2)<<"\n";
   }
   return 0;
}


