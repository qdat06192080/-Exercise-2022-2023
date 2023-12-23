#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
   freopen("WEIRDALGORITHM.INP","r",stdin);
   freopen("WEIRDALGORITHM.OUT","w",stdout);
   ll n;
   cin >> n;
   cout<<n<<" ";
   while (n!=1){
      if (n%2!=0){
        n=n*3+1;
        cout<<n<<" ";
      } else {
          n=n/2;
          cout<<n<< " ";
      }
   }

   return 0;
}


