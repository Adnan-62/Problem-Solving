#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

void swaper(int &x , int &y ){
    int temp ; 
    temp = x ; 
    x=y; 
    y= temp ;
}
 
int main()
{
	fast();
  // int T ; cin>>T;
  // while(T--)
    int x , y ; 
    cin>>x>>y;
    swaper(x , y );
   cout<<x<<" "<<y;
}