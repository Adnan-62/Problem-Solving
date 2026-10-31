#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n , m ;
   cin>>n>>m;
   vector<int> vmax(m) , vmin(m) ;
   for(int i = 0 ; i<m ; i++){
    cin>>vmax[i];
    vmin=vmax;
   }
	sort(vmin.begin() , vmin.end());
    sort(vmax.rbegin() , vmax.rend());
    int smin = 0 , smax = 0 ;
    for(int i = 0 ; i<n ; i++){
        smax+=vmax.front();
        vmax.front()--;
        sort(vmax.rbegin() , vmax.rend());
    } int j = 0  , i = 0;
    while( i<n ){
      while(vmin[j]>=1&&i<n){
        smin+=vmin[j];
        vmin[j]--;
        i++;
      }
      if(!(i<n))
      break;
      j++;
    }
    cout<<smax<<" "<<smin;

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