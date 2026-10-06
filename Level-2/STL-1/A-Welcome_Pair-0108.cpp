#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

bool comp(pair<int , int >&a , pair<int , int > &b){
    if(a.second>b.second){
        return true; 

    }else 
    return false ; 

}

void solve(){
   
short n ; 
cin>>n;  
int m ;
vector<pair<int , int>> v(n);
for (int i = 0 ; i<n ; i++){
    cin>>v[i].first>>v[i].second;
}
sort(v.begin() , v.end() , comp);
for(int i = 0 ; i<n ; i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}

	
}

int main()
{
	fast;
   int T= 1 ;
   //cin>>T;
   while(T--){
	solve();
  }
}