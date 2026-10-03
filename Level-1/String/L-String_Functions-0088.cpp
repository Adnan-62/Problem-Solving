#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
int n,q,l,r,i;
string s,w;
cin>>n>>q>>s;
while(q--){
    cin>>w;
    if(w=="pop_back")s.pop_back();
    if(w=="front")cout<<s.front()<<endl;
    if(w=="back")cout<<s.back()<<endl;
    if(w=="sort"){cin>>l>>r;sort(s.begin()+min(l,r)-1,s.begin()+max(l,r));};
    if(w=="reverse"){cin>>l>>r;reverse(s.begin()+min(l,r)-1,s.begin()+max(l,r));};
    if(w=="print"){cin>>l;cout<<s[l-1]<<endl;}
    if(w=="substr"){cin>>l>>r;cout<<s.substr(min(l,r)-1,abs(l-r)+1)<<endl;};
    if(w=="push_back"){char x;cin>>x;s.push_back(x);}
}

}
