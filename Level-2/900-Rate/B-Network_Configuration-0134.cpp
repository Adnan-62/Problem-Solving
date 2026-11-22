#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)



void Solve(){

    int n , k ; cin>>n>>k;
   vector<int> v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    sort(v.rbegin() , v.rend());

    cout<<v[k-1];

	
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