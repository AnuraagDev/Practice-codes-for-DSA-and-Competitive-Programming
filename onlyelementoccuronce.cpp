#include <iostream>
using namespace std;
int main()
{
	int arr[9] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	if (arr[0] != arr[1])
	{
		cout << arr[0] << " ";
	}
	for (int i = 1; i < 9 - 1; i++)
	{
		if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
		{
			cout << arr[i] << " ";
		}
	}
	if (arr[8] != arr[7])
	{
		cout << arr[8] << " ";
	}
}