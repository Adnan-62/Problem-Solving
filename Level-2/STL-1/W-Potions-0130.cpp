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
   priority_queue<ll> pq ;
   ll ans = 0 , h = 0 ;
   for(int i = 0 ; i<n ; i++){
    h+=v[i];
    ans++;
    if(v[i]<0){
        pq.push(-v[i]);
    }
    while(h<0){
        h+=pq.top();
        ans--;
        pq.pop();
    }
    
   }
   cout<<ans;
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