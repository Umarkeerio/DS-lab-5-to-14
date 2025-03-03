#include <iostream>
using namespace std;

void binarySearch(int arr[], int first, int last, int num) {
    while (first <= last) {
        int middle = (first + last) / 2;

        if (arr[middle] < num) {
            first = middle + 1; // right half  
        } else if (arr[middle] == num) {
            cout << num << " found at " << middle + 1 << endl;
            return;
        } else {
            last = middle - 1; // left half
        }
    }
    cout << num << " not found " << endl;
}

int main() {
    int size;
    cout << "\n Enter the size of an array: ";
    cin >> size;

    int arr[size];
    int num;

    for (int i = 0; i < size; i++) { 
        cout << "\n Enter the value of element at " << i << " : "; 
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }
    
    cout << "\n Enter num to find: ";
    cin >> num;

    int first = 0; 
    int last = size - 1; 

    binarySearch(arr, first, last, num);
}