#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr);

  string n;
   cin>>n;int i=1;
   int c=0;ll l=0,r=0;
   for(i=0;i<n.size();++i){
         if(n[i]=='L'){
        l++;
    }if(n[i]=='R'){
        r++;
    }if(l==r){
 
        c++;
    }
   }
   cout<<c<<endl;
   l=0,r=0;
for(int i=0;i<n.size();i++){
    if(n[i]=='L'){
        l++;
    }if(n[i]=='R'){
        r++;
    }if(l==r){
        cout<<n[i]<<endl;
    }else
    cout<<n[i];
   }
}