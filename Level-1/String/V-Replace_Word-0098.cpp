#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr);
   
       string str;
    cin >> str;
    while (true) {
        int find = str.find("EGYPT");
        if (find != -1) {
            str.replace(find, 5, " ");
        }
        else {
            cout << str;
            return 0;
        }
    }
}