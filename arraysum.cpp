#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int height[n];
	for (int i = 0; i < n; i++)
	{
		cin >> height[i];
	}
	int leftmax[n];
	leftmax[0] = height[0];
	for (int i = 1; i < n; i++)
	{
		leftmax[i] = max(height[i], leftmax[i - 1]);
	}
	int rightmax[n];
	rightmax[n - 1] = height[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		rightmax[i] = max(rightmax[i + 1], height[i]);
	}
	int trapwater = 0;
	for (int i = 0; i < n; i++)
	{
		int water = min(leftmax[i], rightmax[i]);
		trapwater += water - height[i];
	}
	cout << trapwater;
}