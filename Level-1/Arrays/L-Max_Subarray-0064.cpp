#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
int t  , M ; cin>>t; 
while(t--){

    int n ; 
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    if(n<2)
    break;
    int j = 0  , c=j+2; 
    while(j<=n-1){

    while(c<=n){
     for(int i = j ; i<c ; i++){
        if(i==j){
            M=arr[i];
        }
        if(arr[i]>M){
            M=arr[i];
        }
    }   
    c++;
    cout<<M<<" ";
    }
  j++;
  c=j+2;  
}
cout<<endl;
}
}