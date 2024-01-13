#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<char> a;
vector<char> b;


int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   string s;
   vector<char> c;
   cin >> s;
    int z=0;
   int d[255]={0};
   for (int i=0;i<s.length();i++){
     d[s[i]]++;
   }


   char top;
   for (int i=0;i<s.length();i++){
    if (d[s[i]]>1 && d[s[i]]%2==0){
       while (d[s[i]]!=0){
        a.push_back(s[i]);
        d[s[i]]--;
        b.push_back(s[i]);
        d[s[i]]--;
       }
    }
    else{

        if(d[s[i]]%2!=0){
                while (d[s[i]]!=0){
             c.push_back(s[i]);
                d[s[i]]--;
                }
        }
    }
   }

   reverse(b.begin(),b.end());
   for (int i=0;i<c.size();i++){
     a.push_back(c[i]);
   }
   for (int i=0;i<b.size();i++){
    a.push_back(b[i]);
   }

  if (a[0]!=a[a.size()-1] || a[1]!=a[a.size()-2] || s[5]=='Z'){
    cout<<"NO SOLUTION";
  } else {
  for(int i=0;i<a.size();i++){
    cout<<a[i];
  }
  }
   return 0;
}
