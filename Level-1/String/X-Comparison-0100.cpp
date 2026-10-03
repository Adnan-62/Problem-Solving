#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)
int main()
{
	fast();
    string s ; 
    cin>> s ;
    string m=s;
    for(int i = 0  ; i<s.size()-1 ; i++){
        string w1 = s.substr(0 , i+1) , w2 = s.substr(i+1);
        sort(w1.begin() , w1.end());
        sort(w2.begin() , w2.end());
        string z=w1+w2;
        m=min(m , z);
    
    }
    cout<<m;
  
}