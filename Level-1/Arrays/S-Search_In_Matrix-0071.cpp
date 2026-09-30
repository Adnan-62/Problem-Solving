#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n , m ;
cin>>n>>m;
int arr[n][m];
for(int i = 0 ;i<n ; i++){
    for(int j = 0 ; j<m ; j++){
        cin>>arr[i][j];
    }
}
int x ; cin>>x;
bool flag = false ;
for(int i = 0 ;i<n ; i++){
    for(int j = 0 ; j<m ; j++){
        if(x==arr[i][j]){
            flag=true;
            break;
        }
    }
    if(flag)
    break;
}
if(flag)
cout<<"will not take number";
    else
    cout<<"will take number";
}