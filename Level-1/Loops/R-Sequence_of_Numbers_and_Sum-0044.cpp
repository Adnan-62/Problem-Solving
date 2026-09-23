#include <bits/stdc++.h>
using namespace std ; 

int main(){

while(true){
    int n , m , sum=0; 
    cin>>n>>m;
    if(m<=0 || n<=0)
    break;
    
    for(int i = min(m , n ); i<=max(m , n ) ; i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    
}

}
