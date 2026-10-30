#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
    string m ; 
    cin>>m;
    stack<char> st ; 
    int c = 0 ; 
    for(int i = 0 ; i<m.size() ; i++){
        if(i==0){
            st.push(m[i]);
        }else{
            if(!st.empty()){
                if(st.top() == m[i]){
                    c++;
                    st.pop();
                }else{
                    st.push(m[i]);
                }
            }else st.push(m[i]);
        }
    }
    if(c%2==0){
        cout<<"No";

    }else cout<<"Yes";
	
}


int main()
{
	fast();
   int T = 1 ;
   //cin>>T;
   while(T--){
	
	Solve();
  }
}