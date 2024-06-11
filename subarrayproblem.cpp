#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int vec[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	int l, r;
	cin >> l >> r;
	int total = 0;
	for (int i = l - 1; i < r; i++) {


		total += vec[i];
	}
	cout << total;
	return 0;
}