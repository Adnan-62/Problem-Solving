#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)
int main()
{
	fast();

    int n ; cin>>n;
    string s ,
    k="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"  ,
    o = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    cin>>s;
    ll f1[150] , f2[150]; 
    for(int i = 0 ; i<k.size() ; i++){
        f1[o[i]] = k[i];
        f2[k[i]]= o[i];
    }
    for(int i = 0 ; i<s.size() ; i++){
        if(n==1){
            cout<<char(f1[s[i]]);

        }else{
            cout<<char(f2[s[i]]);
        }
        

        
    }
  
}