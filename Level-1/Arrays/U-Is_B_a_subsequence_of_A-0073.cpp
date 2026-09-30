#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n , m ;
cin>>n>>m;
long long a[n] , b[m] ; 

for(int i = 0 ; i<n ;i++){
    cin>>a[i];
}
for(int i = 0 ; i<m ;i++){
    cin>>b[i];
}

bool F = true ; 
int jj=0;
for(int i = 0 ; i<m ; i++){
    if(jj>=n){
        F=false;
        break;
    }
    for(int j = jj ; j<n ; j++){    
        if(a[j]==b[i]){
            jj=j+1;
            break;
        }else if(j==n-1){
            jj=j+1;
            F=false;
            break;
        }

    }
}
if(F){
    cout<<"YES";
}
else 
cout<<"NO";

}