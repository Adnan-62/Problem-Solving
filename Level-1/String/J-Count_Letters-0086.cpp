#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
string s ; cin>>s; 
int counter[123]={0};
for(int i = 0 ; i<s.size() ; i++){

    counter[s[i]]++;
}
for(int i = 97 ; i<123 ; i++){
    if(counter[i]>0){
        cout<<char(i)<<" : "<<counter[i]<<endl;
    }
}


}