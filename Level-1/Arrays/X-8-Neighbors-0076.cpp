#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
int n , m ; cin>>n>>m;
char arr[n][m];
for(int i = 0 ; i<n ; i++){
    for(int j =0  ;j<m ;j++){
        cin>>arr[i][j];
    }
}
int x , y ;
cin>>x>>y;
x--;
y--;
bool F = true ;
if(x==0 && y == m-1 ){
    if(arr[x][y-1]=='.'){
        F=false;
    }else if(arr[x+1][y]=='.'){
        F=false;
    }else if (arr[x+1][y-1]=='.')
    F=false;
}else if(x== n-1 && y==m-1){
    if(arr[x][y-1]=='.')
    F=false;
    else if (arr[x-1][y]=='.'||arr[x-1][y-1]=='.')
    F=false;
}else if(x==n-1 && y ==0 ){
    if(arr[x-1][1]=='.'||arr[x-1][2]=='.'||arr[x][2]=='.')
    F=false;
}else if(x==0 && y==0){
    if(arr[x][y+1]=='.'||arr[x+1][y]=='.'||arr[x+1][y+1]=='.')
    F=false;
}
if(x==n-1 &&( y!=0 || y!=m-1)){
    if(arr[n][y-1]=='.'||arr[n][y+1]=='.'){
        F=false;
    }for(int i = y-1 ; i<=y+1; i++){
        if(arr[n-1][i]=='.')
        F=false;
    }
}else if ((x!=0||x!=n-1)&&y==m-1){
    if(arr[x-1][y]=='.'||arr[x+1][y]=='.'){
        F=false;
    }for(int i = x-1 ; i<=x+1; i++){
        if(arr[i][y-1]=='.')
        F=false;
    }
}else if(x==0 &&( y!=0 || y!=m-1)){
    if(arr[x][y-1]=='.'||arr[x][y+1]=='.'){
        F=false;
    }for(int i = y-1 ; i<=y+1; i++){
        if(arr[n+1][i]=='.')
        F=false;
    }
}else if ((x!=0||x!=n-1)&&y==0){
    if(arr[x-1][y]=='.'||arr[x+1][y]=='.'){
        F=false;
    }for(int i = x-1 ; i<=x+1; i++){
        if(arr[i][y-1]=='.')
        F=false;
    }
}else{
    if(arr[x][y-1]=='.'||arr[x][y+1]=='.')
    F=false;
    else{
        for(int i = y-1 ; i<=y+1 ; i++){
            if(arr[x-1][i]=='.'||arr[x+1][i]=='.')
            F=false;
        }
       
    }
}
if(F)
cout<<"yes";
else
cout<<"no";
 
 
}