#include <bits/stdc++.h>
using namespace std ; 

int main(){
   int x , max=0,n; 
   cin>>x;

   while(x--){
    cin>>n;
    if(n>max){
        max=n;
    }
   }
   cout<<max;
}