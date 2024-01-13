#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100],ok;


void tao(){
   for (int i=1;i<=n;i++){
    a[i]=0;
   }
}

void sinh(){
   int j=n;
   while (j>=1 && a[j]==1){
     a[j]=0;
     j--;
   }
   if (j==0){
    ok=0;
   } else {
      a[j]=1;
   }


}

int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   cin >> n;
   ok=1;
   tao();
   while (ok){
       for (int i=1;i<=n;i++){
        cout<<a[i];
       }

       cout<<endl;
       sinh();

   }
   return 0;
}
