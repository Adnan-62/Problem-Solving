#include <bits/stdc++.h>
using namespace std ; 

int main(){
   int n , d, flag=0 ;
   cin>>n; 
   d=n/2;
   for(int i = 2 ; i<=d ; i++){
    if(n%i==0)
    flag=1;
   }
    if(flag)
    cout<<"NO";
    else cout<<"YES";
    
}