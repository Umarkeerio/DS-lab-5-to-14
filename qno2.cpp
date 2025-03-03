// qno 2 Queue in Linkedlist format 

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int v): data(v) , next(nullptr) {}
};

struct Queue {
    Node* head;

    Queue(): head(nullptr) {}

    void enqueue(int v){
        Node* n = new Node(v);
        if (head == nullptr){
            head = n;
        } else {
            Node* t = head;
            while (t -> next != nullptr){
                t = t -> next; 
            }
            t -> next = n;
        }
    }

void dequeue() {
    if (head == nullptr) {
        cout << "empty\n";
    } else if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* d = head;
        head = head ->next;      
    }
}

void display(){
    Node* t = head;
    while(t != nullptr){
        cout << t -> data << "->";
        t = t->next;
    }
    cout << "nullptr" << endl;
}
};
int main (){
    Queue l;
    l.enqueue(1);
    l.enqueue(2);
    l.enqueue(3);
    
    l.display();

    l.dequeue();

    l.display();
}