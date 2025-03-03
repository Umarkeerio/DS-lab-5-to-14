// infix and postfix with stack 

#include <iostream>
#include <stack>
using namespace std;

int prcd (char op){
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOp(char c){
    return c == '+' ||  c == '-' || c == '*' || c == '/';
}

string itp (string infix){
    stack<char> s;
    string postfix = "";
}