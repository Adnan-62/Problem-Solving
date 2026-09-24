#include <bits/stdc++.h>
using namespace std ; 

int main(){
int n , a , b ; 
cin>>n>>a>>b;
long long sum = 0 ; 
for (int i = 1 ; i<=n ; i++){
    int s = 0 , x=i , flag= 0 ;
    while(x!=0){
        s+=(x%10);
        x/=10;
        
        
    }for(int j = min(a,b); j<= max(a,b ) ; j++ ){
            if(s==j)
            flag=1;
        }
    if(flag)
    sum+=i;

}
cout<<sum;

}
