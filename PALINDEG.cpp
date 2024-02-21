#include <bits/stdc++.h>
using namespace std;
#define ll long long
 int a[1000][1000];
   int n,m;

bool kt(string s){
    if (s.length()==1 || s[0]!=s[1] && s.length()<=2){
        return false;
    }
    string st=s;
    reverse(s.begin(),s.end());
    if (s==st){
       return true;
    }
   return false;

}



int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   string s;
   cin >>s;
   if (s.length()==1){
    cout<<0;
    return 0;
   }
   if (s[0]!=s[1] && s.length()<=2){
    cout<<0;
    return 0;
   }
   int d=0;

   while (s.length()!=1){
        if (kt(s)){
          d++;
        }
        string st=s;
        s="";
        if (st.length()%2==0){


          for (int i=0;i<st.length()/2;i++){
            s=s+st[i];
          }
        }else{
           for (int i=0;i<=st.length()/2;i++){
            s=s+st[i];
           }
        }
   }
   cout<<d;
   return 0;
}
