#include <bits/stdc++.h>
using namespace std;
int b[1000];

void sinh(set<int> a){
    int j=0;
     for (auto i: a){
        b[j]=i;
        j++;
     }
}

int main(){
  freopen("BT1.INP","r",stdin);
  freopen("BT1.OUT","w",stdout);
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int n,k;
  cin >> n >> k;
  set<int> a;
  for (int i=0;i<=n;i++){
     int c;
     cin >> c;
     a.insert(c);
  }
  sinh(a);
  int j=a.size()-1;
  int kq=b[j];
  int x=1;
  if (kq==k){
    x=2;
  }
  while (x!=2){
       kq=kq+b[j-1];
       if (kq>k){
         kq=kq-b[j-1];
         j--;
       } else x++;

  }
  cout<<kq;
  return 0;
}


