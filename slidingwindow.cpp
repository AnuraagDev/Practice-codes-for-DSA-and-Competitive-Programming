#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n; cin >> n;
	vector <int>arr;
	for (int i = 0; i < n; i++) {cin >> arr[i];}
	int x, k;
	cin >> x >> k;
	int count = 0; for (int i = 0; i < k; i++)
	{
		if (arr[i] == k)count++;
	}
	cout << count << " ";
	for (int i = k; i < n; i++) {
		if (arr[i] == x)count++;
		if (arr[i - k] == x)count--;
		cout << count << " ";
	}
	cout << endl;
}