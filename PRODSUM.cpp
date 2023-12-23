#include <bits/stdc++.h>
using namespace std;

int kt1(int k, int a[],int l){
   int c[l+2];
   for (int i=1;i<=l+1 ;i++){
        c[i]=a[i-1];
   }
   c[0]=k;
   int s=0,j=1;
   s=s+c[0]*j;
   for (int i=1;i<=l;i++){
     if (c[i]!=k){
        j++;
        s=s+c[i]*j;
     }
   }
   return s;
}


int kt2(int k, int a[], int l){
     int c[l+1];
     for (int i=0;i<=l;i++){
          c[i]=a[i];
     }
     c[l]=k;
     int s=0,j=l;
     s=s+c[j]*j;
     for (int i=l-1;i>=0;i--){
         if (c[i]!=k){
            j--;
            s=s+c[i]*j;
         }
     }
    return s;
}


int main(){
    freopen("PRODSUM.INP","r",stdin);
    freopen("PRODSUM.OUT","w",stdout);
    int n,s=0;
    cin >> n;
    int a[n];
    for (int i=0;i<=n;i++){
         cin >> a[i];
    }
    for (int i=0;i<=n-1;i++){
        int k=kt1(a[i],a,n);
        int m=kt2(a[i],a,n);
        s=max(s,k);
        s=max(s,m);
    }
    cout<<s;
  return 0;

}
