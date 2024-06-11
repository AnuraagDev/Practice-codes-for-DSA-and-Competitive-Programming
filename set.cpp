#include <set>
#include <iostream>
using namespace std;

int main() {
	//set<int, greater <int>> s;//For reverse order of arrangement use this.
	set<int> s;
	int arr[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	// Insert elements into the set
	for (int i = 0; i < 10; i++) {
		s.insert(arr[i]); // Insert elements into the set. Duplicate values will be discarded.
	}

	// Create an iterator for the set
	set<int>::iterator it = s.begin();

	// Display elements of the set
	// Elements will be stored in a sorted order
	for (; it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// Erase an element from the set
	s.erase(8); // Erase the element with value 8

	// Display elements of the set after erasure
	for (it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// Find an element in the set
	int valueToFind = 5;
	it = s.find(valueToFind);
	if (it != s.end()) {
		cout << "Element " << valueToFind << " found in the set." << endl;
	} else {
		cout << "Element " << valueToFind << " not found in the set." << endl;
	}

	// Check if the set is empty
	cout << s.empty() << endl; // This will return 0 (false) if the set is not empty

	// Clear all elements from the set
	s.clear();

	// Check if the set is empty after clearing
	cout << s.empty() << endl; // This will return 1 (true) as the set is now empty

	return 0;
}
