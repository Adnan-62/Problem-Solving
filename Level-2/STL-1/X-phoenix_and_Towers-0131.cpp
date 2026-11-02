#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n , m , x ; cin>>n>>m>>x;
   vector<int> B(n) ;
   
   priority_queue<pair<int , int >, vector<pair<int,int>>,greater<pair<int,int>>> pq;
  
   
   for(int i = 0 ; i<n ; i++){
    cin>>B[i];
   }
 
  
 cout<<"YES"<<endl;
   for(int i = 0 ; i<n ; i++){
    if(i<m){
        pq.push({B[i] , i+1});
        cout<<i+1<<" ";
    }else{
        pair<int , int>p=pq.top();
        p.first+=B[i];
        pq.pop();
        pq.push(p);
        cout<<p.second<<" ";
    }
   }
    cout<<endl;
   
	
}


int main()
{
	fast();
   int T = 1 ;
   cin>>T;
   while(T--){
	
	Solve();
  }
}