#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	s = ' ' + s;
	int l = s.length();
 
	int x = 0;
	for (int i = 0; i < l; i++)
	{
		if ((s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == '!')
			&&( s[i + 1] >= 'a' && s[i + 1] <= 'z' ||  s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
			x++;
		else continue;
 
	}
	cout << x;
 
}