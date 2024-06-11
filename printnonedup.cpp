#include <iostream>
using namespace std;
int main()
{
	int arr[6] = {1, 2, 2, 3, 3, 4};
	cout << arr[0] << " ";
	int count = 1;
	for (int i = 1; i < 6; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			cout << arr[i] << " ";
			count++;
		}
	}
	cout << "\n" << count << endl;
}