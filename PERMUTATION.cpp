#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long


int main(){
   freopen("PERMUTATION.INP","r",stdin);
   freopen("PERMUTATION.OUT","w",stdout);
   int n;
   cin >> n;
   string s="";
   if (n<=3 && n>1){
     cout<<"NO SOLUTION";
     return 0;
   }
   for (ll i=1;i<=n;i++){
     if (i%2==0){
        cout<<i<<" ";
     } else {
        s+=to_string(i)+" ";
     }
   }
   cout<<s;
   return 0;
}


