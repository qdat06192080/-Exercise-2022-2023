#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

   string s;long long d=1,m=d;
   cin >> s;
   for (int i=0;i<s.length();i++){
     if (s[i]!=s[i+1]){
        d=1;
        continue;
     } else {
        d++;
         m=max(m,d);
     }
   }
   cout<<m;
   return 0;
}


