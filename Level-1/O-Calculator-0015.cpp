  #include <iostream>
    #include<iomanip>
    using namespace std;   
 
 
    int main() {
    
  int x , y ; 
  char ex ; 
  cin>>x>>ex>>y;
  if(ex=='+')
  cout<<x+y;
  else if (ex=='*')
  cout<<x*y;
  else if (ex=='/')
  cout<<x/y;
  else cout<<x-y;
    }