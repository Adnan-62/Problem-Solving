#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n ; cin>>n;
   deque<int> dq1(n) , dq2;
   
   for(int i = 0 ; i<n ; i++){
    cin>>dq1[i];
   }
   dq2.push_back(dq1.front());
   for(int i = 1 ; i<n; i++){
    if(dq1[i]<dq2.front())
    dq2.push_front(dq1[i]);
    else
    dq2.push_back(dq1[i]);
   }

   for(int i = 0 ; i<n ; i++){
    cout<<dq2.front()<<' ';
    dq2.pop_front();
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