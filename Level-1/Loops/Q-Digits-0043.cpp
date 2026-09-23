#include <bits/stdc++.h>
using namespace std ; 

int main(){
 int x ;
 cin>>x;

 while(x--){
    int n ; 
    cin>>n;
   do{

    cout<<n%10<<" ";
    n/=10;
   }while(x!=0);

   cout<<endl;
}

}
