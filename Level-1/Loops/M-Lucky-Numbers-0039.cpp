#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int x , y , l , t=0; cin>>y>>x;
    for(int i = min(x , y); i<=max(x,y);i++){
        int flag =0;
        l=i;
        while(l!=0){
            if(l%10==4 || l%10==7){
                l/=10;
                if(l==0){
                    flag=1;
                }
            }else break;
        }
        if(flag==1){
            cout<<i<<" ";
            t++;
        }

    }
    if(t==0)
    cout<<-1;
    
}