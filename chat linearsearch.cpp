#include <iostream>

int linearSearch(const int a[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Example usage:
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchKey = 3;

    int result = linearSearch(arr, size, searchKey);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
         std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

