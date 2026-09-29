#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
int n , max=INT_MIN , X , min=INT_MAX , N ; 
cin>> n ; 
int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
    if(arr[i]<min){
        min=arr[i];
        N=i;
    }
    if(arr[i]>max){
        max=arr[i];
        X=i;
    }
}
arr[X]=min;
arr[N]=max;
for(int i = 0 ;i<n ;i++){
    cout<<arr[i]<<" ";
}

}