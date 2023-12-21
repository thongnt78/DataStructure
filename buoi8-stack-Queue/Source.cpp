#include "Header.h"
void init(nodeptr& head) {
	head == NULL;
}
bool isEmpty(nodeptr head) {
	return head == NULL;
}
nodeptr makeNode(typeinfo x) {
	nodeptr p = new node;
	if (p == NULL)return NULL;
	p->data = x;
	p->link = NULL;
	return p;
}
//stack
void pushFirst(nodeptr& head, typeinfo x) {
	if (isEmpty(head))head = makeNode(x);
	else {
		nodeptr p = makeNode(x);
		p->link = head;
		head = p;
	}
}
int length(nodeptr head) {
	int count = 0;
	while (head)
	{
		count++;
		head = head->link;
	}return count;
}
nodeptr nodeIndex(nodeptr head, int idx) {
	int count = 0;
	if (idx < 0 || length(head) < idx)
		throw "Index incorrect";
	while (head)
	{
		if (count++ == idx)
			return head; 
		head = head->link;
	}
} 
//stack
void removeBegin(nodeptr& head) {
	if (isEmpty(head)) throw "error.";
	nodeptr r, tail;
	tail = nodeIndex(head, length(head) - 1);
	for (r = head; r->link != tail; r = r->link);
	r->link == NULL;
	free(tail);
}
void outStack(nodeptr head) {
	while (head)
	{
		cout << head->data << "  ";
		head = head->link;
	}
}
//Queue
void enQueue(nodeptr& head,typeinfo x) {
	
	if (isEmpty(head)) head=makeNode(x);
	else {
		nodeptr p;
		for (p = head; p->link != NULL; p = p->link);
		p->link= makeNode(x);
	}
}
void createStack(nodeptr& head) {
	int x;
	do
	{
		cout << "Enter x: "; cin >> x;
		if (x == 0)break;
		//pushFirst(head,x);
		enQueue(head, x);
	} while (true);
}
int sum(nodeptr head) {
	int sum = 0;
	while (head)
	{
		sum += head->data;
		head = head->link;
	}return sum;
}