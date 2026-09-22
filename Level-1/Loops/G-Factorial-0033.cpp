#include <bits/stdc++.h>
using namespace std ; 

int main(){
    long long  x , n , f ; 
    cin>>n; 

    while (n--)
    {
       cin>>x;
        long long a =1 ; 
     for(int i = 1 ; i <=x ; i++){
        a=i*a;

     }
     cout<<a<<endl;
    }
    
}