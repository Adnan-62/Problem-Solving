#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n ; cin>>n ; 
int f1 = 0 , f2 =1 , t  ; 
if(n==1){
    cout<<0;
}else if(n==2)
cout<<1;
else{
   for(int i = 2 ; i<n ; i++){
    t=f2;
    f2 = f1+f2;
    
    f1=t;
} 
cout<<f2;
}


}