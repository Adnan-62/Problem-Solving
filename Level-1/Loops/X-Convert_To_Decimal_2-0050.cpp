#include <bits/stdc++.h>
using namespace std ; 

int main(){
long long  n  , t; cin>>t;
while(t--){
    long long  x=0 , R=0 ;
    cin>>n;
    while(n!=0){
        if(n%2==1)
        x+=1;
        n/=2;
    }
  
    for(int i = 0 ; x-- ; i++){
            R+=(1*pow(2 ,i));
            
        }
    cout<<R<<endl;
}


}
