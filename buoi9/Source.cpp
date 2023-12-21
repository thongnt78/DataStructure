#include "header.h"
void init(st & s) {
	s.top = -1;
}
bool isEmpty(st s) {
	return s.top == -1;
}
bool isFull(st s) {
	return s.top == Max - 1;
}
void push(st& s, typeinfo x) {
	if (isFull(s))throw "stack is full";
	s.element[++s.top] = x;
}
int pop(st& s) {
	if (isEmpty(s))throw "stack is empty";
	return s.element[s.top--]; 
}
int size(st s) {
	return s.top + 1;
}
void clear(st& s) {
	s.top = -1;
}
int getTop(st s) {
	if (isEmpty(s))throw "stack is empty";
	return s.element[s.top];
}
void view(st s) {
	for (int i = s.top; i >= 0; i--)
		cout << s.element[i] << "  ";
 }
//QUEUE
void init(q& s) {
	s.rear = -1;
}
bool isEmpty(q s) {
	return s.rear == -1;
}
bool isFull(q s) {
	return s.rear == Max - 1;
}
void enQueue(q& s, typeinfo x) {
	if (isFull(s))throw "queue is full";
	s.element[++s.rear] = x;
}
int size(q s) {
	return s.rear + 1;
}
void clear(q& s) {
	s.rear = -1;
}
int getTop(q s) {
	if (isEmpty(s))throw "queue is empty";
	return s.element[s.rear];
}
void view(q s) {
	for (int i = 0; i <= s.rear; i++)
		cout << s.element[i] << "  ";
}
int delQueue(q& s) {
	int x = s.element[0];
	for (int i = 0; i < s.rear - 1; i++)
		s.element[i] = s.element[i + 1];
	s.rear--;
	return x;
}
int viewS(q s) {
	int sum = 0;
	for (int i = 0; i <= s.rear; i++)
		sum += s.element[i];
	return sum;
}
int viewS(q s) {
	int sum = 0;
	for (int i = 0; i <= s.rear; i++)
		if(s.element[i]<0)
		sum++;
	return sum;
}
//enQueue == addLast in DSLK 
//deQueue == removeBegin in DSLK  