#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   
	set<int> s;
  int n ; cin>>n ; 
  string m ; 
  int x ; 
  while(n--)
  {
    cin>>m;
    if(m=="insert")
    {
      cin>>x;
      s.insert(x);
    }else if (m=="find")
    {
      cin>>x;
      bool find = s.count(x);
      if(find)
        cout<<"found\n";
      else
        cout<<"not found\n";
    }else if (m=="lower_bound")
    {
      cin>>x;
      auto it = s.lower_bound(x); 
      if(it!=s.end())
        cout<<*it<<endl;
      else
        cout<<-1<<endl;
    }else if (m=="upper_bound")
    {
      cin>>x;
      auto it = s.upper_bound(x);
      if(it!=s.end())
        cout<<*it<<endl;
      else
        cout<<-1<<endl;
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