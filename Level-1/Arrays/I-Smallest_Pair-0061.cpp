#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    
 int t, n , min ;cin>>t;
 while(t--){
 cin>>n;
 int arr[n] ;
for(int i = 1 ; i<=n ; i++){
    cin>>arr[i]; 
}
for(int i = 1 ; i<=n ; i++){
    for(int j = i+1 ; j<=n;  j++){
        if(i==1 && j==2){
            min=arr[i]+arr[j]+j-i;
        }
         else if(arr[i]+arr[j]+j-i < min){
            min=arr[i]+arr[j]+j-i;
        }
    }
}
cout<<min;
 }
}