#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve1(int l,int r, int cnt, int ans, int max1, int max2, int d,int n,int a[],int k){
   while (l<n-1){
       cnt++;
       r++;
       max1=max(a[r],a[l]);
       if (cnt==k){
        ans+=max1;
        cnt=1;
       }
       if (r==n-1){
        l++;
        cnt=1;
        r=l;
       }
   }
   cout<<ans;
}
void solve2(int l,int r, int cnt, int ans, int max1, int max2, int d,int n,int a[],int k){
    vector<int>b;
    int c=1;
   while (l<n-1){
      if (c==1){
        d=a[l];
        c++;
      }
       cnt++;
       r++;
       d=max(d,a[r]);
       if (cnt==k){
        ans+=d;
        cnt--;
       }
       if (r==n-1){
        l++;
        c=1;
        cnt=1;
        r=l;
       }
   }
   cout<<ans;
}


int main(){
    freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int n,k,s=0;
   cin >> n>>k;
   int a[n];
   for (int i=0;i<n;i++){
    cin >> a[i];
    s+=a[i];
   }
   int l=0,r=0,cnt=1,ans=0,max1=0,d=0,max2;

   if (k==1){
        cout<<s;
        return 0;
   } else if (k==2){
        solve1(l,r,cnt,ans,max1,d,max2,n,a,k);
        return 0;
   } else {
       solve2(l,r,cnt,ans,max1,d,max2,n,a,k);
       return 0;
    }
   return 0;
}
