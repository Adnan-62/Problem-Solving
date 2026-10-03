#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(NULL);
string s;
	string word = "hello";
	cin >> s;
	int i = 0;
	int j = 0;
	while (1)
	{
		if (i == s.size()||j==word.size())
		{
			break;
		}
		if (s[i] == word[j])
		{
			j++;
		}
		i++;
	}
	if (j == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
