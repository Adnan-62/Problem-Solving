#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x , y,n; cin>>y>>x;

    for (int i = 1 ; i<=min(x,y) ; i++){
        if(x%i==0 && y%i==0){
            n=i;
        }
    }
    cout<<n;
    
}