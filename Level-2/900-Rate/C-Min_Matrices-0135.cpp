#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int n , k ; 
   cin>>n>>k;
   vector<vector<int>> v(n ,vector<int>(n,0));
   if(k>=n&&k!=2*n)
   {
    int dif = k - n ; 
    if(dif == 0 ){
       int  c1 = k+1; 
        for(int i = 0 ; i<n ; i++ ){
            for(int j = 0 ; j<n ; j++){
                if(j==i){
                    v[i][j]=i+1;
                }else {
                    v[i][j]=c1;
                    c1++;
                }
            }
        }

    }else if (dif == n-1){
        int c2 = k+1 , j1 = 0 ;
        for(int i = 0 ; i<n ; i++){
            for(int j= 0 ; j<n ; j++){
                if(i==0){
                    v[i][j]=j+1;
                    j1=j+1;
                }else if (j==0){
                    j1++;
                    v[i][j]=j1;
                }else {
                    v[i][j]=c2;
                    c2++;
                }
            }
        }

    }else {
        int cn = n+1 , c3=k+1;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                 if (j==i){
                    if(i>=n-dif){
                    v[0][j]=j+1;
                    v[i][j] = cn;
                    cn++;
                }else{
                    v[i][j]=i+1;
                }
                }else {
                    if(j>=n-dif && i==0)
                    continue;
                    else{
                      v[i][j] = c3;  
                      c3++;
                    }
                    
                }
            }
        }


    }

   for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           cout << v[i][j] << " ";
        }
        cout << "\n";
    }


   }else cout<<-1<<endl;
    
	
}


int main()
{
	fast();
   int T= 1 ;
   cin>>T;
   while(T--){
	
	Solve();
  }
}