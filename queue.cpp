// queue is first in first out ( fifo) datastructure  

#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Enqueue() {
    int val; 
    if (rear == n - 1) { // Check if the queue is full
        cout << "Queue overflow" << endl; 
    } else {
        if (front == -1) // If the queue is empty, set front to 0
            front = 0;
        cout << "Enter the value to enqueue: ";
        cin >> val; 
        rear++; 
        queue[rear] = val; // Store the value at the rear position
        cout << "Value added to the queue." << endl;
    }
}

void Dequeue() {
    if (front == -1 || front > rear) { 
        cout << "Queue underflow" << endl; 
        return;
    } else {
        cout << "Value dequeued: " << queue[front] << endl;
        front++; //The dequeued element is not deleted from memory but is no longer part of the queue. 
        
    }
}


void print() {
    if (front == -1 || front > rear) { 
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) { 
            cout << queue[i] << " "; 
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cout << "Queue Operations:\n";
    cout << "1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\n";
    
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                Enqueue(); 
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                print(); 
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}