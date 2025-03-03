// Doubly  Linked  List

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prv;

    Node(int v): data(v), next(nullptr) , prv(nullptr) {}
};

class LinkedList{
    Node* head;

public:
    LinkedList(): head(nullptr) {}

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
        n->prv = t;
    }

    void addf(int v){
        Node* n = new Node(v);
        n->next = head;
        if (head != nullptr) {
            head->prv = n;  
    }
    head = n;
}

    void print(){
        Node* t = head;
        while (t != nullptr){
        cout << t->data << "<->";
        t = t->next;
        }
    cout << "null" << endl;
    }

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
    
    void update(int v, int l) {
    if (head == nullptr) {
        cout << "empty" << endl;
        return;
    }
    int i = 0;
    Node* t = head;
    while (t != nullptr) {
        if (i == l) {
            t->data = v;
            return;
        }
        t = t->next;
        i++;
    }
    cout << "!location: " << l << endl;
}

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

    void remove(int v) {
    if (head == nullptr) {
        cout << "empty" << endl;
        return;
    }
    
    if (head->data == v) {
        Node* d = head;
        head = head->next;
        if (head != nullptr) {
            head->prv = nullptr;
        }
        delete d;
        return;
    }

    Node* t = head;
    while (t != nullptr) {
        if (t->data == v) {
            if (t->prv != nullptr) {
                t->prv->next = t->next;
            }
            if (t->next != nullptr) {
                t->next->prv = t->prv;
            }
            delete t;
            return;
        }
        t = t->next;
    }
    cout << "!found: " << v << endl;
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