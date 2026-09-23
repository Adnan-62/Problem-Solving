#include <bits/stdc++.h>
using namespace std ; 

int main(){
int t ; cin>>t;
while(t--){
    int n , m , sum=0; 
    cin>>n>>m;
    
    
    for(int i = min(m , n )+1; i<max(m , n ) ; i++){
       if(i%2!=0)
        sum+=i;
    }
    cout<<sum<<endl;
    
}

}
