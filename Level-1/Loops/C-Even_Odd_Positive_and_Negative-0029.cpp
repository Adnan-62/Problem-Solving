#include <bits/stdc++.h>
using namespace std ; 

int main(){
   int n ,e=0 ,o =0, p =0,ne =0,x; cin>>n;
   while(n--){
    cin>>x;
    if(x<0)
    ne++;
    else if(x>0)
    p++;
    if(x%2==0)
    e++;
    else
    o++;
    
   }
   cout<<"Even: "<<e<<endl;
   cout<<"Odd: "<<o<<endl;
   cout<<"Positive: "<<p<<endl;
   cout<<"Negative: "<<ne<<endl;
}