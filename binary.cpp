// binary search in func 
#include <iostream>
using namespace std;

void binarySearch(int arr[], int first, int last, int num) {
    while (first <= last) {
        int middle = (first + last) / 2;

        if (arr[middle] < num) {
            first = middle + 1;  // right half
        } else if (arr[middle] == num) {
            cout << num << " found at position " << middle + 1 << endl;
            return; 
        } else {
            last = middle - 1; // left half
        }
    }
    cout << num << " not found" << endl;
}

int main() {
    int arr[] = {10,20,25,40,50,60};  
    int first = 0;                   
    int last = 5;                    
    int num = 25;                     

    binarySearch(arr, first, last, num); 

}