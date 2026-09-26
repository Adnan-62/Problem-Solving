#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
 int n , F   , S ; 
 cin>>n;
 int arr[n] ;
for(int i = 0 ; i<n ; i++){
    cin>>arr[i]; 
}
int c =0;
while(c!=n-1){
    c=0;
  for(int i = 0 ; i<n-1 ;i++){
    F=arr[i];
    S=arr[i+1];
    if(S<F){
        arr[i]=S;
        arr[i+1]=F;
    }
    else 
    c++;
  }    
}
    

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

}

/* OR 
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main() {
 int n ; 
 cin>>n;
 int arr[n] ;
for(int i = 0 ; i<n ; i++){
    cin>>arr[i]; 
}
    for(int i = 0 ;i<n ; i++){
        for(int j =i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
            swap(arr[j] , arr [i]);
            }
        }
    }

    

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

}

*/