#include<bits/stdc++.h>
using namespace std;

void solve(int n, char a, char b, char c){
     if (n==1){
         cout<<a<<" "<<c<<endl;

         return;
     }
        solve(n-1,a,c,b);
        solve(1,a,b,c);
        solve(n-1,b,a,c);




}


int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   int n;
   cin >> n;
   cout<<(1<<n)-1<<endl;
   char a='1', b='2', c='3';
   solve(n,a,b,c);
   return 0;
}
