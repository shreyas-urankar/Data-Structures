#include<iostream>

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = A[i];
        int j;
        for (j = i; j > 0 && temp < A[j - 1]; j--) {
            A[j] = A[j - 1];
        }
        A[j] = temp;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements of the array: ";
    std::cin >> n;

    int A[n];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> A[i];
    }

    insertionSort(A, n);

    std::cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }

    return 0;
}


