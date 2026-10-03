#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);
	
    string s ;
		getline(cin, s);
	int co = 0;
 
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 65)
		{
			if (s[i + 1] < 65)
			{
				reverse(s.begin() + co, s.begin()+i+1);
				co = i + 2;
			}
		}
	}
	cout << s;
	
 
}