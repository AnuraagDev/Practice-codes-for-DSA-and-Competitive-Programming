#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct a {
	a *next;
	int d;
	a(int data)
	{
		next = NULL;
		d = data;
	}
};
