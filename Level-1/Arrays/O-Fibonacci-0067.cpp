#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n ; cin>>n ; 
long long fb[n];
fb[0]=0;
fb[1]=1;
for(int i = 2 ;i<n ; i++){
    fb[i]=fb[i-2]+fb[i-1];
}
cout<<fb[n-1];
  



}