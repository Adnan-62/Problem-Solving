#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
 int n  ; 
 cin>>n;
 int arr[n] , rev[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i]; 
   
}
int j = 0;
for(int i = n-1 ; i>=0 ; i--){
    rev[i]=arr[i];
    if(arr[j]==rev[i]){
        j++;
    }
}

if(j==n)
cout<<"YES";
else cout<<"NO";
}
