#include "khuDeQuy2.h"





void initStack(Stack& s)
{
	s.top = NULL;
}

Node* createNode(Move x)
{
	Node* p = new Node;
	if (p != NULL) {
		p->x = x;
		p->pNext = NULL;
	}
	return p;
}

void push(Stack& s, Move x) {
	Node* p = createNode(x);
	if (s.top == NULL) {
		s.top = p;
		return;
	}
	p->pNext = s.top;
	s.top = p;

}
Move top(Stack s)
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


void thapHaNoi(int n, char source, char destination, char mid)
{
	Stack s;
	initStack(s);
	Move x = { n, source, destination, mid };

	while (true) {
		while (x.n > 1) {
			char temp;
			push(s, x);
			x.n--; 
			x.source = source;	

			temp = x.mid;
			x.mid = x.destination;
			x.destination = temp;

			

		}
		cout << "Di chuyen dia " << x.n << " tu " << x.source << " sang " << x.destination << endl;
		if (!isEmpty(s)) {
			char temp;
			x = top(s);
			pop(s);
			
			cout << "Di chuyen dia " << x.n << " tu " << x.source << " sang " << x.destination << endl;
			
			x.n--;
			temp = x.source;
			x.source = x.mid;
			x.mid = temp;

			x.destination = destination;
			

		}
		else {
			break;
		}
	}
	
}

