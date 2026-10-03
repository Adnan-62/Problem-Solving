#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
	std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(nullptr);


    int size; cin >> size;
	string s; cin >> s;
	ll score = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == 0) continue;
 
		if (s[i] == 'V') score += 5;
 
		else if (s[i] == 'W') score += 2;
 
		else if (s[i] == 'X') {
			if (i != s.size() - 1)
				s[i + 1] = '0';
		}
 
 
		else if (s[i] == 'Y') {
			if (i != s.size() - 1) {
				s.push_back(s[i + 1]);
				s[i + 1] = '0';
			}
		}
 
		else if (s[i] == 'Z') {
			if (i != s.size() - 1) {
				if (s[i + 1] == 'V') {
					score /= 5;
					s[i + 1] = '0';
				}
				else if (s[i + 1] == 'W') {
					score /= 2;
					s[i + 1] = '0';
				}
			}
		}
	}
	cout << score;
}