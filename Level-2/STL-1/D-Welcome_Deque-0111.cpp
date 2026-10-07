#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   deque<ll> dq; 
   int n ; cin>>n;
   while(n--){
    string s; int x ; 
    cin>>s;
    if(s=="push_back"){
        cin>>x;
        dq.push_back(x);
    }else if(s=="push_front"){
        cin>>x;
        dq.push_front(x);
    }else if (s=="pop_front" && !dq.empty()){
        dq.pop_front();
    }else if(s=="pop_back" && !dq.empty()){
        dq.pop_back();
    }else if (s=="front" && !dq.empty()){
        cout<<dq.front()<<endl;
    }else if (s=="back"&& !dq.empty()){
        cout<<dq.back()<<endl;
    }else if (s=="print" &&!dq.empty() ){
        cin>>x;
       x--;
       cout<<dq[x]<<endl;
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