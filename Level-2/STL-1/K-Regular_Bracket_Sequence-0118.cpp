#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   stack<char> c ; 
   string s ; 
   cin>>s; 
   int ans = 0 ;
   for(int i = 0 ; i<s.size() ; i++){
    if(s[i]=='('){
    c.push(s[i]);
    continue;
    }else if (s[i]==')' && !c.empty()){
        if(c.top()=='('){
        c.pop();
        ans+=2;
        continue;
        }
    }
   }
   cout<<ans;
   
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