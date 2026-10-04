#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Print(ll a[] , ll b[] , ll n){
    ll c[2*n];
    for(int i = 0 ; i<n*2 ; i++){
        if(i<n)
        c[i]=b[i];
        else
        c[i]=a[i%n];
    }
    for(int  i = 0 ; i<n*2 ; i++){
        cout<<c[i]<<" ";
    }
}


int main()
{
	fast();
  // int T ; cin>>T;
  // while(T--)
 ll n ; 
 cin>>n;
 ll a[n] , b[n];
 for(int i = 0 ;i<n ; i++){
    cin>>a[i];
 }
 for(int i = 0 ;i<n ; i++){
    cin>>b[i];
 }
 Print(a , b , n);
}