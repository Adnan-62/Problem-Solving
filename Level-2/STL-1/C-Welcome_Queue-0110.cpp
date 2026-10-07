#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   queue<ll>q; 
   int t , id  , n; 
   cin>>t;
   for(int i = 0 ; i<t ; i++){
    cin>>id>>n;
    if(id==1){
        q.push(n);
    }
    else if(id==2 && q.empty()){
        cout<<"no"<<endl;
    }else if(id == 2 && !q.empty()){
        if(q.front()==n){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
        q.pop();

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