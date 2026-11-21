#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
 int l ; cin>>l; 
 stack<ll> st ; 
 st.push(1);
 ll x =  0 , n ; 
 string s ; 
 const  ll over = pow(2,32);
 bool f = true ;
	while(l--)
    {
        cin>>s;
     if(s=="add")
     {
        x+=st.top();
        if(x>=over){
            cout<<"OVERFLOW!!!";
            f= false ;
            break;
        }

     }else if (s=="for"){
        cin>>n;
        if(st.top()>=over){
            st.push(over+1);
        }else st.push(st.top()*n);
     }else{
        st.pop();
     }

    }
    if(f)
    cout<<x;
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