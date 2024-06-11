#include <iostream>
#include <set>

using namespace std;
int main()
{
	string a;
	cin >> a;
	set<char> s;
	for (int i = 0; i < a.length(); i++)
	{
		s.insert(a[i]);
	}
	if (s.size() % 2 == 0)
	{
		cout << "CHAT WITH HER!";

	}
	else
	{
		cout << "IGNORE HIM!";
	}

}