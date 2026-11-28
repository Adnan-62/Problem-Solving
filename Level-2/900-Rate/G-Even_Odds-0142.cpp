#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   ll n , k ; 
   cin>>n>>k;
   if(n%2==0)
   {
    ll  ON = n-1 , result ; 
    if(k<=n/2)
    {
        result = ON - 2*(n/2-k);
    }else
    {
        result = n - 2*(n-k);
    }
    cout<<result<<endl;
   }else
   {
    ll OR =n/2+1 , EN = n-1  , result; 
    if(k<=OR)
    {
        result = n-(OR-k)*2;
    }else
    {
        result = EN - (n-k)*2 ; 
    }
    cout<<result<<endl;
   }
	
}


int main()
{
	fast();
   int T= 1 ;
   //cin>>T;
   while(T--){
	
	Solve();
  }
}