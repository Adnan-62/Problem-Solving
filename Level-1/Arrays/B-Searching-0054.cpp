#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
 int n , x , flag=0 , j; 
 cin>>n;
 int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
}
cin>>x;
for(int i = 0 ; i<n ;i++){
    if(x==arr[i]){
        flag=1 ;
        j=i;
        break;
    }
}
if(flag)
cout<<j;
else
cout<<-1;
}