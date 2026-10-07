#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   priority_queue<ll> pq;
   int n ; cin>>n;
   while(n--){
    string s ; cin>>s;
    ll x ; 
    if(s=="push"){
        cin>>x;
        pq.push(x);

    }else if (s=="pop" && !pq.empty()){
        pq.pop();
    }else if(s=="top" && !pq.empty()){
        cout<<pq.top()<<endl;
    }

    

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