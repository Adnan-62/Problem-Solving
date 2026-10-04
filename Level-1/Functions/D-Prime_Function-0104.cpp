#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

void Solve(){
    ll n ; cin>>n;
    bool f = false; 
    
    
    for(int i = 2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            f = true;
            break;
        }
       
    }
    if(f || n<2){
        cout<<"NO"<<endl;
    }else cout<<"YES"<<endl;

}
 
int main()
{
	fast();
   int T ; cin>>T;
   while(T--)
   Solve();
   
}