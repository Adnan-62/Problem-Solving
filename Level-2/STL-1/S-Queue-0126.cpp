#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
    int n ; cin>>n;
   vector<ll> v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
	sort(v.begin() , v.end());
    int t= 0  , c= 0 ; 
    for(int i = 0 ; i<n ; i++){
        if(v[i]>=t){
            t+=v[i];
            c++;
        }
    }
    cout<<c;
}


int main()
{
	fast();
   int T = 1 ;
   //cin>>T;
   while(T--){
	
	Solve();
  }
}