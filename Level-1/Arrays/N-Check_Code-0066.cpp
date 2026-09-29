#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int s , a , b , flag= 0  ; 
cin>>a>>b;
s=a+1+b;
char arr[s];
for(int i= 0 ; i<s ; i++){
    cin>>arr[i];
    if(i<a){
       if(arr[i]-'0'==0||arr[i]-'0'==1||arr[i]-'0'==2||arr[i]-'0'==3||arr[i]-'0'==4||arr[i]-'0'==5||arr[i]-'0'==6||arr[i]-'0'==7||arr[i]-'0'==8||arr[i]-'0'==9){
            continue;
        }else{
        cout<<"No";
        break;
        }
    }
    if(i==a){
        if(arr[i]=='-')
        flag=1;
        else{
            cout<<"No";
            break;
        }
    }
    if(i>a){
        if(arr[i]-'0'==0||arr[i]-'0'==1||arr[i]-'0'==2||arr[i]-'0'==3||arr[i]-'0'==4||arr[i]-'0'==5||arr[i]-'0'==6||arr[i]-'0'==7||arr[i]-'0'==8||arr[i]-'0'==9){
            continue;
        }else{
        cout<<"No";
        flag=0;
        break;
        }
    }
    }
    if(flag)
    cout<<"Yes";
    

}