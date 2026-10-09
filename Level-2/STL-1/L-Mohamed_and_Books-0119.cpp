#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; cin>>n ;
   deque<int> dq ;
   priority_queue<int> pq ; 
   int x ; 
   for(int  i = 0 ; i<n ; i++){
    cin>>x;
    dq.push_back(x);
   }
   int t ;cin>>t;
   char c ; 
   while (t--)
   {
    cin>>c;
    
    if(c=='L' && !dq.empty()){
     pq.push(dq.front()) ;
       dq.pop_front();
    }else if (c=='R' && !dq.empty()){
        pq.push(dq.back());
        dq.pop_back();
    }else if(c=='Q'){
        if(pq.empty())
        cout<<-1<<endl;
        else{
            cout<<pq.top()<<endl;
            pq.pop();
        }
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