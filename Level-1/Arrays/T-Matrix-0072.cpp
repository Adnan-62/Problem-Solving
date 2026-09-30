#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n ;
cin>>n;
int arr[n][n];
for(int i = 0 ; i<n ;i++){
    for(int j = 0 ; j<n ; j++){
        cin>>arr[i][j];
    }
}
int sum1 = 0 , j1=0 ;
for(int i = 0 ; i<n ; i++){
    sum1+=arr[i][j1];
    j1++;
}
int sum2=0 , j2=n-1;
for(int i = 0 ; i<n ; i++ ){
    sum2+=arr[i][j2];
    j2--;
}
int diff = sum1-sum2 ;
if(diff <0){
    cout<<-1*diff;

}
else 
cout<<diff;
}