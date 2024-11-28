// Write a function to print intersection of two arrays

#include<iostream>
#include<algorithm>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    // Sort both arrays
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            // If both are equal, print the element and move both pointers
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the two arrays is: ";
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}