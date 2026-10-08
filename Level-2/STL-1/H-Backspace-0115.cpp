#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
  
deque<char> s ; 
string t ; 
cin>>t; 
for(int i = 0 ; i<t.size() ; i++){
    if(t[i]=='<' && !s.empty()){
        s.pop_front();
    }else
    s.push_front(t[i]);
}
while(!s.empty()){
    cout<<s.back();
    s.pop_back();

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