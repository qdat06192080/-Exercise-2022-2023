#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long



int main(){
   freopen("TWOSETS.INP","r",stdin);
   freopen("TWOSETS.OUT","w",stdout);
   ll n;
   vector<ll> a;
   vector<ll> b;

   cin >>n;
   if (((n*(n+1))/2)%2!=0){
        cout<<"NO";
        return 0;
   } else cout<<"YES"<<"\n";
   if (n%2==0){
         for (int i=0;i<n/2;i++){
            if (i%2!=0){
              a.push_back(i+1ll);
              a.push_back(n-i);
            } else {
               b.push_back(i+1ll);
               b.push_back(n-i);
              }
         }
      } else {
           for (int i=0;i<(n-1)/2;i++){
             if (i%2==0){
                b.push_back(i+1ll);
                b.push_back(n-i-1);
             } else {
                a.push_back(i+1ll);
                a.push_back(n-i-1);
             }
           }
           if (a.size()>b.size()){
              b.push_back(n);
           } else {
               a.push_back(n);
           }
      }
     cout<<a.size()<<"\n";
     for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
     }
     cout<<"\n";
     cout<<b.size()<<"\n";
     for (int i=0;i<b.size();i++){
        cout<<b[i]<< " ";
     }

   return 0;
}

