    #include <iostream>
    #include<iomanip>
    #include <math.h>
    using namespace std;   
    
    
    int main() {
    long long  a,b, c, d , x , y  , A; 
    cin>>a>>b>>c>>d;
        x=a*b;
        y=c*d;
        A=(x%100)*(y%100);
        if((A%100)==0)
        cout<<0;
        cout<<A%100;
        
        }