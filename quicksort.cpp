#include <iostream>
using namespace std;

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l, j = h;

    while (i < j) {
        while (a[i] <= pivot && i < h) { // Ensure i does not exceed bounds
            i++;
        }
        while (a[j] > pivot) { // No need to check bounds for j
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j; // Return partition index
}

void quicksort(int a[], int l, int h) {
    if (l < h) {
        int j = partition(a, l, h); // Fix variable declaration
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }
}

int main() {
    int n;
    cout << "Enter an array size: ";
    cin >> n;
    int a[n]; // Variable Length Array (VLA) - allowed in GCC but not standard C++
    cout << "Enter an array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    cout << "\nThe sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
