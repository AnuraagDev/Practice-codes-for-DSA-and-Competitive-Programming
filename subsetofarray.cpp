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
	int total = 0;
	int total_number = 1 << n;
	for (int i = 0; i < total_number; i++)
	{	int xorsum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
			{
				xorsum ^= arr[j];
			}
		}
		total += xorsum;

	}
	cout << "This the sum of xors: " << total << endl;
}