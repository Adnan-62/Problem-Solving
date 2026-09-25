#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
 int n  , min=0 , pos; 
 cin>>n;
 int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
 
}
for(int i = n-1 ; i>=0;i--){
    cout<<arr[i]<<" ";
}
}