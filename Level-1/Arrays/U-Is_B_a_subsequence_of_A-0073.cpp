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
int index = 0 ; 
for(int i=0 ; i<n ; i++){
    if(index == m )
    break;
    if(a[i]==b[index]){  
        index++;
    }else if(i==n-1){
        F=false;
        break;
    }
    
}
if(index <m){
    cout<<"NO";
}else
if(F){
    cout<<"YES";
}
else 
cout<<"NO";

}