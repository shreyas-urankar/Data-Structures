#include<iostream>

const int max = 100;

void bubbleSort(int A[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int A[max];

    std::cout << "Enter the elements:" << std::endl;
    for(int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    bubbleSort(A, n);

    std::cout << "Sorted array:" << std::endl;
    for(int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }

    return 0;
}

