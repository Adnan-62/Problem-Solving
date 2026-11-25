#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   multiset<int> ms ; 

	int q , n  , x; 
    cin>>n;
    while (n--)
    {
        cin>>q;
        if(q==1)
        {
            cin>>x;
            ms.insert(x);
        }else if (q==2)
        {
            cin>>x;
            auto it = ms.find(x);
            if(it!=ms.end())
                ms.erase(it);
        }else 
        {
            if(ms.begin()!=ms.end())
            cout<<*ms.begin()<<endl;
            else
            cout<<"It is Just EMPTY\n";
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