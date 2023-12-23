#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long


int main(){
  freopen("NUMBERSPIRAL.INP","r",stdin);
  freopen("NUMBERSPORAL.OUT","w",stdout);
  int t;
  cin >>t;
  while (t--){
     ll x,y;
     cin >>y >>x;
     if (x>y){
        if (x%2==1){
            cout<<x*x-y+1;
        } else{
           x--;
           cout<<x*x+y;
        }
     } else {
        if (y%2==0){
            cout<<y*y-x+1;
        } else {
           y--;
           cout<<y*y+x;
        }
     }
    cout<<"\n";
  }
   return 0;
}


