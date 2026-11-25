#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n  , q ; 
   cin>>n>>q;

	string s ; 
    int y ; 
    map<string , int > mp ; 
    for ( int i = 0 ; i<n ; i++ )
    {
        cin>>s>>y;
        mp[s]=y;
    }
    while(q--)
    {
        ll t ; cin>>t; 
        if(t==1)
        {
            cin>>s>>y;
            mp[s]+=y;
        }else
        {
            cin>>s;
            cout<<mp[s]<<endl;
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