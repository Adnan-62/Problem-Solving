#include<bits/stdc++.h>
using namespace std;
 

 
int main() {
 int n  , min=0 , pos; 
 cin>>n;
 int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];

    if(i==0){
        min=arr[i];
        pos=i;
    }
    if(arr[i]<min){
        min=arr[i];
        pos=i;
    }
}
cout<<min<<" "<<pos+1;
}