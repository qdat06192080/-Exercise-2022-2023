#include bitsstdc++.h
using namespace std;
int a[100000];
int ok=0;

void tao(int m){
   for (int i=1;i=m;i++){
     a[i]=0;
   }
}

void chinhhop(int m){
   int j=m;
   while (j=1 && a[j]==1){
    a[j]=0;
    j--;
   }
   if (j==0){
     ok=1;
   } else a[j]=1;

}


int main(){
   freopen(BT.INP,r,stdin);
   freopen(BT.OUT,w,stdout);
   iossync_with_stdio(false);
   cin.tie(0);
   int n,m,k,x;
   cin nmkx;
   string s;
   cin s;
   string b[26];
   for (int i=0;im;i++){
    cin b[i];
   }
   tao(m);
   int d=0;
   while (!ok){
      if (d==x-1){
        ok=1;
        } else {
          chinhhop(m);
          d++;
      }
     }
   int c=0;
   for (int i=0;i=s.length();i++){
    if (s[i]!='#'){
        couts[i];
    } else {
        coutb[c][a[c+1]];
        c++;
    }
   }

   return 0;
}
