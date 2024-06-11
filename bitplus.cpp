#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int j = 0;
	int n;
	cin >> n;
	vector<string> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];  // Directly read into the vector elements
	}




	for (int i = 0; i < n; i++)
	{
		if (a[i] == "++X" || a[i] == "X++") j++;
		if (a[i] == "--X" || a[i] == "X--") j--;
	}
	cout << j << " ";

	return 0;
}
