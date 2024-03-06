#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000012];
#define pop pop_back
#define push push_back

void chuan(int n){
     a[0]=a[1]=0;
    for (int i=2;i<=n;i++){
        a[i]=1;
    }
    for (int i=2;i<=sqrt(n);i++){
        if (a[i]){
            for (int j=i*i;j<=n;j+=i){
                a[j]=0;
            }
        }

    }
}

void sang(int n){
    chuan(n);
    int d=1;
    string s=to_string(n);
    string st=s;
    while (s.length()!=1){
       s.erase(0,1);
       int n=stoi(s);
        for (int i=2;i<=n;i++){
            if (i==n && a[i]==true){
                d++;
                break;
            }
        }
    }
    if (d==st.length()){
         cout<<"YES";
    } else cout<<"NO";

}

bool kt(int n){
   if (n<2) return false;
   for (int i=2;i<=sqrt(n);i++){
    if (n%i==0){
        return false;
    }
   }
   return true;
}

int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   int n;
   cin >>n;
   if (kt(n)){
        sang(n);
   } else cout<<"NO";

   return 0;
}
