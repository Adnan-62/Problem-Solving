#include <bits/stdc++.h>
using namespace std ; 

int main(){
int n  , t=1 , tt; cin>>n;
tt=n;
while(n--){

    for(int j = n ; j>0 ; j--){
        cout<<" ";
    }
    for(int i = 1 ; i<=t ; i++){
        cout<<'*';

    }
    cout<<endl;
    t+=2;


}
t-=2;
while(tt--){
    n++; for(int i = 1 ; i<=n ; i++ ){
        cout<<" ";
    }
    for(int i = 1 ;i<=t ; i++){
        cout<<'*';
    }
    t-=2;
   
    cout<<endl;
}

}
