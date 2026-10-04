#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

ll sum(ll x , ll y ){
    ll s ;
    for(ll i = 2 ; i<=y ; i+=2){
        s+=pow(x,i);
    }

    return s ;
}
int main()
{
	fast();
  // int T ; cin>>T;
  // while(T--)
    ll x , y ; 
    cin>>x>>y;
   cout<<sum(x,y);
}