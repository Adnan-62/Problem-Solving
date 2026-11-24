#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast() std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr)


void Solve(){
   int k , n ; cin>>n>>k;
   string s ; cin>>s;

   if(k==1){
    for(int i = 0 ;i<s.size() ; i++){

        cout<<"PRINT "<<s[i]<<endl;
        if(!(i==n-1))
        cout<<"RIGHT"<<endl;

    }
   }else if (k==n){

    for(int i = s.size()-1 ;i>=0 ; i--){

        cout<<"PRINT "<<s[i]<<endl;
        if(!(i==0))
        cout<<"LEFT"<<endl;

    }

   }else{

    if(n%2==0){
        if(k<=n/2){
            while (k!=1)
            {
               cout<<"LEFT"<<endl;
               k--;
            }
            for(int i = 0 ;i<s.size() ; i++){

                cout<<"PRINT "<<s[i]<<endl;
                if(!(i==n-1))
                    cout<<"RIGHT"<<endl;

            } 
        }else{

            while (k!=n)
            {
                cout<<"RIGHT"<<endl;
                k++;
            }
            for(int i = s.size()-1 ;i>=0 ; i--){

                cout<<"PRINT "<<s[i]<<endl;
                if(!(i==0))
                    cout<<"LEFT"<<endl;

            }
        }
    }else{


        if(k<=n/2+1){
            while (k!=1)
            {
               cout<<"LEFT"<<endl;
               k--;
            }
            for(int i = 0 ;i<s.size() ; i++){

                cout<<"PRINT "<<s[i]<<endl;
                if(!(i==n-1))
                    cout<<"RIGHT"<<endl;

            } 
        }else{

            while (k!=n)
            {
                cout<<"RIGHT"<<endl;
                k++;
            }
            for(int i = s.size()-1 ;i>=0 ; i--){

                cout<<"PRINT "<<s[i]<<endl;
                if(!(i==0))
                    cout<<"LEFT"<<endl;

            }
        }


    }
   }

	
}


int main()
{
	fast();
   int T= 1 ;
   //cin>>T;
   while(T--){
	
	Solve();
  }
}