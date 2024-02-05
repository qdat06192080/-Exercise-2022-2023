#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   freopen("BT.INP","r",stdin);
   freopen("BT.OUT","w",stdout);
   ios::sync_with_stdio(false);
   cin.tie(0);
   vector<string>a;
   string s;
   cin >> s;
   sort(s.begin(),s.end());
   a.push_back(s);

   while (next_permutation(s.begin(),s.end())){
     a.push_back(s);
   }
   cout<<a.size()<<endl;
   for (int i=0;i<=a.size()-1;i++){
    cout<<a[i]<<endl;
   }
   return 0;
}
