#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double area = 2;
	double a, b; cin >> a >> b;
	double  d = a * b;
	int c = floor(d / area);
	cout << c;
}