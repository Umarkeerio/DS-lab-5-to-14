#include <iostream>
using namespace std;

void merge(int *array, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    int temp[50];

    while (i <= mid && j <= right) {
        if (array[i] < array[j]) {
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = array[i++];
    }

    while (j <= right) {
        temp[k++] = array[j++];
    }

    for (int l = left; l < k; l++) {
        array[l] = temp[l];
    }
}

void mergeSort(int *array, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(array, left, mid);       
        mergeSort(array, mid + 1, right);  
        merge(array, left, mid, right); 
    }
}

int main() {
    int arr[30], n;

    cout << "Enter the number of elements (up to 30): ";
    cin >> n;

    cout << "Enter the elements (unsorted array):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1); 

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}