#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
short n  , counter = 0 , flag = 0; 
cin>>n;
long long arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
}
while(true){
    for(int i = 0 ; i<n ; i++){
        if(arr[i]%2==0){
            arr[i]/=2;
        }
        else{
            flag=1;
            break;
        }
        
    }
    if(flag)
    break;
    counter++;
}
cout<<counter;

}