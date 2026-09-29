#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
long long  n , sum=0 , num; cin>>n;
char arr[n];

for(int i = 0 ; i<n ; i++){
   cin>>arr[i];
}
for(int i = 0 ; i<n ; i++){
    sum+=arr[i]-'0';
}
cout<<sum;
}