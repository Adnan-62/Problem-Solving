#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
  int n; cin>>n; 
  deque<ll> dq;
  for(int i = 1 ; i<=n ;i++){
    dq.push_back(i);
  }
  for(int i = 1 ; i<n ; i++){
    if(i==n-1){
        cout<<dq.front()<<endl;
        dq.pop_front();
        cout<<dq.front();
        break;
    }
    cout<<dq.front()<<" ";
    dq.pop_front();
    dq.push_back(dq.front());
    dq.pop_front();
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