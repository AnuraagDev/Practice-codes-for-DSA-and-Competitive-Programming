#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{	//Map - Implementation using red black tree uses logn time
//unordered_map - implementation using buckets uses constant time of average case
	unordered_map<int, int> mp;
	vector <int> vec;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		vec.push_back(b);
	}
	for (int i = 0; i < vec.size(); i++)
	{
		mp[vec[i]] = i;
	}
	int n;
	cin >> n;

	for (auto a : mp)
	{
		cout << a.first << " " << a.second << " ";
	}
	auto it = mp.find(3);
	//We use find function to find if a key is there or not if there is no key available it will return end of the table which we can get by mp.end()

	if (it != mp.end())
	{
		mp.erase(3) ;
		cout << endl;
	}
	int count;
	count = mp.count(2);
	cout << count << endl;
	mp[2] = 2;
	mp[2]++;

	mp.erase(2);//Erase function is used to delete a particular key from the table
	count = mp.count(2);
	cout << count << endl;
//	for (int i = 0; i < mp.size(); i++)
//	{
//		cout << vec[i] << " " << mp[vec[i]] << " ";
//	}
//Another way of printing
	for (auto a : mp)
	{
		cout << a.first << " " << a.second << " ";
	}
	return 0;
}
