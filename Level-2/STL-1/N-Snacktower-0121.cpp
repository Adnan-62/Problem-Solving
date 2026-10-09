#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
    int n ; 
    cin>>n;
    vector<int> v(n+1);
    priority_queue<int> pq ;  
    for(int i = 1 ; i<=n ; i++){
        cin>>v[i];
    }
    int j = n ;
    for(int i = 1; i<=n ; i++){
        if(v[i]==j){
            cout<<j<<" ";
            j--;
           // cout<<"j="<<j<<" "<<pq.empty();
            while(!pq.empty()){
               
                if(pq.top()==j){
                    cout<<j<<" ";
                    j--;
                    pq.pop();
                }else break;
            }
        }else {
            pq.push(v[i]);
        }
        cout<<endl;
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