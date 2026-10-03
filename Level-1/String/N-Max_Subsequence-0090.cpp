#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int size;
    string s;
    char a;
    int count=0;
    cin >>size>>s;
    for (int  i = 0; i < size; i++)
    {
        if (i==0)
        {
            count++;
            a=s[i];
        }
        else{
            if (s[i]!=a)
            {
                count++;
                a=s[i];
            }
        }
    }
    cout<<count;

}
