#include <bits/stdc++.h>
using namespace std ; 

int main(){
   int n , d, flag=0 , x ;
    cin>>x;
   for(int n = 2 ; n<=x ; n++){
    flag=1;
   d=n/2;
   for(int i = 2 ; i<=d ; i++){
    if(n%i==0)
    flag=0;
   }
   if(flag)
   cout<<n<<" ";
 }
   
    
}