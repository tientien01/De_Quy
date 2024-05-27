#ifndef KHUDEQUY_H
#define KHUDEQUY_H

#include <iostream>
using namespace std;


struct Node {
	int x;
	Node* pNext;
};


struct Stack {
	Node* top;
};

bool isPalindrome(const char* str);


#endif // !KHUDEQUY_H
