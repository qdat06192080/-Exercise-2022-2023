#include <bits/stdc++.h>
#define IQ_FAST cin.tie(NULL), ios_base::sync_with_stdio(false)
using namespace std;
int n,s,x[1000000],t[100000],i,a[1000000],b[1000000],res=0,k;


 void nhap(){
     cin>>n>>s;
     for (int i=0;i<=n;i++){
        cin >> a[i] >> b[i];
     }
 }


 void xuat(int i){
   int d=0;
    for (int k=0;k<=n;k++){
        for (int l=1;l<=i;l++){
            if (a[k]==x[l]){
                d=d+b[k];
            }
        }
    res=max(res,d);
    }
}


void Try(int i){
    for (int j=x[i-1];j<=s-t[i-1];j++){
        x[i]=j;
        t[i]=t[i-1]+j;
        if (t[i]==s){
            xuat(i);
        } else {
          Try(i+1);
        };
    }
}


int main(){
   freopen("FOOD.INP","r",stdin);
   freopen("FOOD.OUT","w",stdout);
   IQ_FAST;
   nhap();
   x[0]=1; t[0]=0;
   Try(1);
   cout<<res;
   return 0;
}
