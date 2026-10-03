#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr);

 string s;cin>>s;
 
   bool falg =false ;
 
   for(int i=0;i<s.length();i++)
   {
     if   (s[i]=='?')
       {
          falg = true ;
          i++;
       }
     if(falg == true)
     {
         if(s[i]=='=')
         {
             cout<<": ";
         }
         else  if(s[i]=='&')
         {
             cout<<endl;
         }
         else
         {
             cout<<s[i];
         }
 
     }
 
 
     }
}