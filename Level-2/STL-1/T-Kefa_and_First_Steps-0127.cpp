#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; 
   cin>>n;
   vector<ll> v(n);
   for(int i = 0 ; i<n ; i++){
    cin>>v[i];
   }
   int c= 1 , temp=1 ; 
   for(int i = 0 ; i<n-1 ;i++){
        if(v[i]<=v[i+1]){
            c++;
            temp=max(temp , c);
        }else {
            
            c=1;
        }

   }
   cout<<temp;
	
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