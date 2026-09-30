#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
short T ; cin>>T;
while(T--){

    int n ; cin>> n ;
    int arr[n];

    for(int i = 0  ;i <n ; i++){
        cin>>arr[i];
    }
    int temp  , counter=0; 
    for(int i = 0 ; i<n ; i++){
        temp= arr[i];
        for(int j = i ;j<n ; j++ ){
            if(temp>arr[j]){
                break;
            }
            temp=arr[j];
            counter++;
            
        }
    }
    cout<<counter<<endl;

}
}