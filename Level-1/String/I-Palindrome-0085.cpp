#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
string s ; cin>>s; 
int j ;
j=s.size()-1 ; 
bool f = true ; 
for(int i = 0 ; i < s.size()/2 ; i++){
    if(s[i]!=s[j]){
        f = false ;
        break;
    }
    j--;
}
if(f)
cout<<"YES";
else
cout<<"NO";
}