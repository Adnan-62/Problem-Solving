#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n   , m=0; ll k; cin>>n>>k;
   deque<pair<ll , ll >> dq(n) ;
   pair<ll , ll > temp   ; 
   for(int i = 0 ; i<n ; i++){
    cin>>dq[i].first; dq[i].second=0;
   if(m<dq[i].first)
   m=dq[i].first;
   } 
   temp.first=dq[0].first ; 
   temp.second=dq[0].second;
   dq.pop_front();
   if(!(k>(2*n))){
  while (!dq.empty())
  {
   if(temp.first>dq.front().first){
    temp.second++;
    dq.push_back(dq.front());
    dq.pop_front();
    if(temp.second==k)
    break;
   } else{
    dq.push_back(temp);
    temp=dq.front();
    dq.pop_front();
    temp.second++;
    if(temp.second==k){
        break;
    }
   }
  }
  cout<<temp.first;}
 else cout<<m;
	
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