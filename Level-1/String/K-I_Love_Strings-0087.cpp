#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
int T ; 
cin>>T;
while (T--){
string s , t ;
cin>>s>>t;
for(int i = 0  ;i<max(s.size() , t.size()); i++){

    if(i<s.size() && i < t.size()){
        cout<<s[i]<<t[i];
    }else if(i>=min(t.size()  ,s.size())){
        if(s.size()==min(t.size()  ,s.size())){
            cout<<t[i];
        }else cout<<s[i];

    }



}


cout<<endl;

}
}