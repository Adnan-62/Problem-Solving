#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

    void print (int n ){
        for(int i= 1 ;i<=n ; i++){
            if(i==n)
            cout<<i;
            else
            cout<<i<<" ";
        }
    }



int main()
{
	fast();
  int n ; cin>>n;
   print(n);
}