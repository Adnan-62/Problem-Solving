#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   string s ; 
   cin>>s;
   int o = 0 , z = 0 ;
   for(int i = 0 ; i<s.size() ; i++)
   {
    if(s[i]=='0'&&o<7){
        z++;
        o=0;
    }else if (s[i]=='1'&&z<7){
        o++;
        z=0;
    }
    if(z>=7||o>=7){
        cout<<"YES";
        return;
    }
    
   }
	cout<<"NO";
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