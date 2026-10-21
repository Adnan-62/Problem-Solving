#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; cin>>n;
   string s ; cin>>s;
   deque<char> dq(n);
   for(int i =0 ; i<n ; i++){
    dq[i]=s[i];
   }
  
   while(!dq.empty()){
    if((dq.front()=='1' && dq.back()=='0' || dq.front()=='0' && dq.back()=='1' )){
    dq.pop_back();
    dq.pop_front(); 
    }else break;
    
   }
   cout<<dq.size()<<endl;

	
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