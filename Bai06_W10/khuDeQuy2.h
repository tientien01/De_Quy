#ifndef KHUDEQUY2_H
#define KHUDEQUY2_H


#include <iostream>
using namespace std;


struct Move {
    int n;
    char source;
    char destination;
    char mid;

    
};

struct Node {
	Move x;
	Node* pNext;
};


struct Stack {
	Node* top;
};


void thapHaNoi(int n, char source, char destination, char mid);

#endif // !KHUDEQUY2_H
