#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cout << "Enter the number for search\n";
	cin >> x;

	int arr2[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)count++;
		arr2[i] = count;
	}
	for (int i = 2; i < n; i++)
	{
		if (i == 2)cout << arr[i] <<  endl;

		else cout << arr2[i] - arr2[i - 3] << "\n";
	}
}
