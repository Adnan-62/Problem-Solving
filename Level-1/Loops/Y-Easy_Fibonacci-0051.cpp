#include <bits/stdc++.h>
using namespace std ; 

int main(){
int n , f1=0 , f2=1 , x ; 
cin>>n; 

for(int i = 1 ; i<=n ; i++ ){
    if(i==1){
        cout<<f1;
    }else if (i==2){
        cout<<" "<<f2;
    }else{
        x=f1+f2;
    cout<<" "<<x;
    f1=f2 ; 
    f2=x;
    }
    
}


}
