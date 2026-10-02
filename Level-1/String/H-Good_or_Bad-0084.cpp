#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int t ; 
cin>>t; 
while(t--){
string s ; 
cin>>s;  
bool f = false; 
for(int i = 0 ; i<s.size() ; i++){
    if(s[i]=='0' && i+2 <s.size()){
        if(s[i+1]=='1' && s[i+2]== '0' ){
            f=true;
            break;
        }else continue;
    }else if (s[i]=='1' && i+2<s.size()){
        if(s[i+1]=='0' && s[i+2]== '1'){
            f=true;
            break;
        }else continue;
    }
} 
if(f)
cout<<"Good";
else cout<<"Bad";

cout<<endl;
}

}