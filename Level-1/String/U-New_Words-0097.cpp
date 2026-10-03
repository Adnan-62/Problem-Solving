#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr);
    string s ;
        cin >> s;
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    for (int i = 0; i < s.size(); i++)
    {
 
        if (s[i] == 'e' || s[i] == 'E')
            a++;
 
        if (s[i] == 'g' || s[i] == 'G')
            b++;
 
        if (s[i] == 'y' || s[i] == 'Y')
            c++;
 
        if (s[i] == 'p' || s[i] == 'P')
            d++;
 
        if (s[i] == 't' || s[i] == 'T')
            f++;
    }
    cout << min({a, b, c, d, f});
}