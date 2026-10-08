#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n , m ;cin>>n>>m;
  queue<pair<int, int >> q;
  int x ; 
  for(int i = 1 ; i<=n ; i++){
   cin>>x;
   q.push(make_pair(x, i));
  }
  while(q.size()!=1){
   if(q.front().first-m>0){
      q.push(make_pair(q.front().first-m , q.front().second));
      q.pop();
   }else{
      q.pop();
   }
  }
  cout<<q.front().second;
  q.pop();
	
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