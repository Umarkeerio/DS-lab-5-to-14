// Singly  Linked  List

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int v): data(v), next(nullptr) {}
};

class LinkedList{
    Node* head;

public:
    LinkedList(): head(nullptr) {}

    // question 1 
    void search(int s){
        Node* t = head;
        while (t != nullptr){
            if (t -> data == s){
                cout << "found" << endl;
                return;
            }
            t = t -> next;
        }
        cout << "!found" << endl;
    }

    // question 2 
    void addf(int v){
        Node* n = new Node(v);
        n-> next = head;
        head = n;
    }
    // question 3
    void update (int v, int l){
    int i = 0;
    Node* t = head;
    while(t != nullptr){
        if (i == l){
            t->data = v;
            return;
        }
        t = t->next;
        i++;
    }
    cout << "!location" << endl;
}

    // question 4
    void LOC (){
    if (head == nullptr) {
        cout << 0 << endl;
        return;
    }
    int l = 1; 
    Node* t = head;
    while(t->next != nullptr){
        t = t->next;
        l++;
    }
    cout << l << endl;
}
    // question 5
    void remove(int v) {
    bool found = false;
    while (head != nullptr && head->data == v) {
        Node* t = head;
        head = head->next;
        delete t;
        found = true;
    }
    Node* t = head;
    while (t != nullptr && t->next != nullptr) {
        if (t->next->data == v) {
            Node* d = t->next;
            t->next = t->next->next;
            delete d;
            found = true;
        } else {
            t = t->next;
        }
    }
    if (!found) {
        cout << "!found" << endl;
    }
}
    
    void addl(int v){
        Node* n = new Node(v);
        if (head == nullptr){
            head = n;
            return;
        }
        Node* t = head;
        while (t->next != nullptr){
            t = t->next;
        }
        t -> next = n;
    }

    void print(){
    Node* t = head;
    while (t != nullptr){
        cout << t->data << "->";
        t = t->next;
    }
    cout << "null" << endl;
    }
};

int main (){
    LinkedList l;
    
    l.addl(1);
    l.addl(2);
    l.addl(3);
    l.addl(4);
    l.addf(0);
    l.addl(20);
    l.addl(22);

    l.print();

    l.search(4);
    l.search(300);

    l.update(4, 2);
    l.update(5, 3);

    l.LOC();

    l.remove(20);
    l.remove(22);

    l.print();
}