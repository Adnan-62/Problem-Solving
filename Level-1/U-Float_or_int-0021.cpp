  #include <iostream>
    #include<iomanip>
    #include <math.h>
    using namespace std;   
 
 
    int main() {
   float n  ; cin>>n; 
   if(int(n)==n){
    cout<<"int "<<n; 
   }else cout<<"float "<<int(n)<<" "<<n-int(n); 
   
    }