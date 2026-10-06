    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long 
    #define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


    void Solve(){
    int n ; cin>>n;
    stack<ll> st ; 
    while (n--)
    {
        
        string t ; 
        ll x ; 
        cin>>t;
        if(t=="push"){
            cin>>x;
            st.push(x);
        }
        else if (t=="top" && !st.empty()){
            cout<<st.top()<<endl;
        }else if(t=="pop" && !st.empty()) st.pop();
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