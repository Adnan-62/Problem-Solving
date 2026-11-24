#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; 
   cin>>n ; 
   priority_queue<int> pq ;
   int sum = 0 ; 
   int x ;
   for(int i = 0  ; i<n ; i++)
   { 
    cin>>x;
    sum+=x;
    pq.push(x);
   }
   int sum2 = 0  , c= 0 ;

   while (!pq.empty())
   {
    if(sum2<=sum/2){
        sum2+=pq.top();
        c++;  
        pq.pop();
    }else break; 

   

   }
   cout<<c;
   
 

	
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