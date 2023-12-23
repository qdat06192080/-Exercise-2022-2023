#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
 
 
int main(){
   freopen("INCREASINGARRAY.INP","r",stdin);
   freopen("INCREASINGARRAY.OUT","w",stdout);
   int n; 
   cin >> n;
   ll d=0;
   int k;
   cin >>k;
 
   for (int i=1;i<n;i++){
     int m;
     cin >>m;
     if (m<k){
        d=d+(k-m);
     } else {
         k=m;
     }
   }
  cout<<d;
   return 0;
}
