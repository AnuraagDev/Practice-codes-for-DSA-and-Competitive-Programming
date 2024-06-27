#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int smallest = i;
        for (int j = i + 1; j < n; j++) {
            if (a[smallest] > a[j]) {
                smallest = j;
            }
        }
        swap(a[smallest], a[i]);
    }
}

void bubbleSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void insertionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    vector<int> a = {2, 6, 5, 4, 3, 1};

    // Selection Sort
    vector<int> selectionSorted = a;
    selectionSort(selectionSorted);
    cout << "Selection Sort: ";
    for (auto i : selectionSorted) cout << i << " ";
    cout << endl;

    // Bubble Sort
    vector<int> bubbleSorted = a;
    bubbleSort(bubbleSorted);
    cout << "Bubble Sort: ";
    for (auto i : bubbleSorted) cout << i << " ";
    cout << endl;

    // Insertion Sort
    vector<int> insertionSorted = a;
    insertionSort(insertionSorted);
    cout << "Insertion Sort: ";
    for (auto i : insertionSorted) cout << i << " ";
    cout << endl;

    return 0;
}
