#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; 
   cin>>n;
   vector<ll>a(n);
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   sort(a.begin() , a.end());
   vector<ll>b;
   cout<<a[0]<<' ';
   for(int i = 1 ; i<n ; i++){

    if(a[i]==a[i-1] ){
        b.push_back(a[i]);
    }else {
        cout<<a[i]<<" ";
    }

   }
   for(auto i:b){
    cout<<i<<" ";
   }
   cout<<endl;
	
}


int main()
{
	fast();
   int T = 1 ;
   cin>>T;
   while(T--){
	
	Solve();
  }
}