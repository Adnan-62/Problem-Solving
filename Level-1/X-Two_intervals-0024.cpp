#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;   
 
 
int main() {
   
    long long  l1 , r1 , l2 , r2 ; 
    cin>>l1>>r1>>l2>>r2;
    if(l2>=l1 && l2 <=r1){
        if(r2>=r1){
            cout<<l2<<" "<<r1;
        }else cout<<l2<<" "<<r2;
    }
    else if (r2>=l1 && r2<=r1){
        if(l2<=l1){
            cout<<l1<<" "<<r2;
        }else cout<<l2<<" "<<r2;
            
        }
         else if(l1>=l2 && l1 <=r2){
        if(r1>=r2){
            cout<<l1<<" "<<r2;
        }else cout<<l1<<" "<<r1;
    }
    else if (r1>=l2 && r1<=r2){
        if(l1<=l2){
            cout<<l2<<" "<<r1;
        }else cout<<l1<<" "<<r2;
            
        }else cout<<-1;
    
    }