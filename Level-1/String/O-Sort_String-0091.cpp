#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int n ; 
 cin>>n; 
 int a[26]={0};
 char c ;
 for (int i = 0 ; i<n ;i++){
    cin>>c;
    a[c-'a']++;
 }
 for(int i = 0  ;i <26 ; i++ ){
    while(a[i]!=0){
        cout<<char('a'+i);
        a[i]--;
    }
 }
}
