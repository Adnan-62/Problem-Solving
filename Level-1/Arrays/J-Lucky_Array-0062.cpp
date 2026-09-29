#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
  int n, min , c=0 ; cin>>n;
  int arr[n];
  for(int i = 0 ;i<n ; i++){
    cin>>arr[i];
    if(i==0){
        min=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
  }
  for(int i = 0 ; i<n ;i++){
    if(arr[i]==min){
        c++;
    }
  }
  if(c%2==0)
  cout<<"Unlucky";
  else
  cout<<"Lucky";
}