#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)

   bool Wonderful (ll n){
    if(n%2==0)
    return false ;
    else
    {
        string B ; 
        while(n!=0){
            B+='0'+ n%2;
            n/=2;
        }
        reverse(B.begin() , B.end());
        string s=B;
        reverse(s.begin() , s.end());

        return(s==B);
        
    }
   }
   void Print (bool f){
    if(f){
        cout<<"YES";

    }else cout<<"NO";
   }

int main()
{
	fast();
    int n ;
    cin>>n;
    Print(Wonderful(n));
}