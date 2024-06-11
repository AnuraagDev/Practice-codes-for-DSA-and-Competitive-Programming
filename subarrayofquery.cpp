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
	int sum[n];
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
		sum[i] = s;

	}
	int q;
	cin >> q;
	int arr1[q], arr2[q];
	for (int i = 0; i < q; i++)
	{
		cin >> arr1[i] >> arr2[i];
	}
	for (int i = 0; i < q; i++)
	{

		cout << "sum for the query " << sum[arr2[i]] - sum[(arr1[i] - 1)] << endl;
		cout << arr2[i] << " " << arr1[i] << endl;
	}
}