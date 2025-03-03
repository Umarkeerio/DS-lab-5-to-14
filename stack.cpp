// stack is lifo (last in first out ) 
// qno3 : Stack in array 

#include<iostream>
using namespace std;

struct Stack{
    int *nums;
    int size;
    int capacity;
     
    Stack(int cap){
        capacity = cap;
        size = 0;
        nums  = new int [capacity];
    }

    bool isEmpty(){
        return size == 0;
    }

    // add
    void push(int v){
        if (size < capacity){
            nums[size++] = v;
        } else{
            cout << "full" << endl;
        }
    }

    // remove 
    int pop(){
        if (!isEmpty()){
            return nums[--size];
        } else{
            cout << "empty" << endl;
            return -1;
        }
    }

    void display(){
        for (int i = 0; i < size; i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main (){
    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);

    s.display();

    s.pop();

    s.display();
}