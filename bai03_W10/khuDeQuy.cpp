#include "khuDeQuy.h"


void initStack(Stack& s)
{
	s.top = NULL;
}

Node* createNode(int x)
{
	Node* p = new Node;
	if (p != NULL) {
		p->x = x;
		p->pNext = NULL;
	}
	return p;
}

void push(Stack& s, int x) {
	Node* p = createNode(x);
	if (s.top == NULL) {
		s.top = p;
		return;
	}
	p->pNext = s.top;
	s.top = p;

}
int top(Stack s)
{
	return s.top->x;
}

void pop(Stack& s)
{
	if (s.top == NULL) return;
	if (s.top->pNext == NULL) {
		delete s.top;
		s.top = NULL;
		return;
	}

	Node* p = s.top;
	s.top = p->pNext;
	delete p;
}

bool isEmpty(Stack s) {
	return (s.top == NULL);
}

// tim xau doi xung bang cach khu de quy
bool isPalindrome(const char* str)
{
	int length = std::strlen(str);
	Stack s;
	initStack(s);
	push(s,0);
	push(s,length-1);

	while (!isEmpty(s)) {
		int right = top(s);
		pop(s);
		int left = top(s);
		pop(s);

		// Nếu các chỉ số vượt qua nhau, tiếp tục kiểm tra
		if (left >= right) {
			return true;
		}
		// Nếu ký tự tại vị trí left và right không bằng nhau, chuỗi không phải là palindrome
		if (str[left] != str[right]) {
			return false;
		}
		// Đẩy trạng thái tiếp theo vào ngăn xếp
		push(s,left + 1);
		push(s,right - 1);
	}

}

