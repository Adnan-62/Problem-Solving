#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; cin>>n;
   string s;  
   stack<char> st ; 
    cin>>s;
    for(int i  = 0 ; i<n ; i ++){
        if(st.empty()){st.push(s[i]) ; continue;}
        if(!st.empty()){
            if(st.top()=='1'){
                if(s[i]=='1')
                st.push(s[i]);
                else
                st.pop();
                continue;
            }else if(st.top() =='0'){
                if(s[i]=='0')
                st.push(s[i]);
                else
                st.pop();
                continue;
            }
        }
    }
    cout<<st.size();
	
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