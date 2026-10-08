#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n  , c=0 , m ; 
   cin>>n ; 
  vector<ll> v(n);
  for(int i = 0 ; i<n ; i++){
    cin>>v[i];
  }
  vector<ll> odd , even ; 
  for(int i = 0 ; i<n ; i++){
    if(v[i]%2==0){
        even.push_back(v[i]);
    }
    else
    odd.push_back(v[i]);
  }
    if(is_sorted(even.begin() , even.end())&& is_sorted(odd.begin() , odd.end())){
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
	
}


int main()
{
	fast();
   int T= 1 ;
   cin>>T;
   while(T--){
	
	Solve();
  }
}