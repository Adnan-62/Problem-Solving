#include <bits/stdc++.h>
using namespace std ; 

int main(){
  long long  n ;
   cin>>n;
   long long w = 0, m = n  ; 
   while(n!=0){
    long long last = n%10;
    n/=10;
    w=(w*10)+last;
    
   }
   cout<<w<<endl;
   if(m==w)
   cout<<"YES";
   else cout<<"NO";
    
}