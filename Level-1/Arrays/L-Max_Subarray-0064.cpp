#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
short t   ; cin>>t; 
while(t--){

    int n ; 
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        int m = INT_MIN;
        for(int j= i ; j<n ; j++){
            m=max(arr[j], m);
            cout<<m<<" ";
        }
       
    }
cout<<endl;
}
}