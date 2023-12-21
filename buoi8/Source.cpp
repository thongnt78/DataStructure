#include "Header.h"
void init(CLL& l) {
	l.head = l.tail = NULL;
}
nodeptr makeNode(typeinfo x) {
	nodeptr p = new node;
	if (p == NULL) return NULL;
	p->data = x;
	p->link = NULL;
	return p;

}
bool isEmpty(CLL l) {
	return l.head == NULL;
}
void addFirst(CLL& l, typeinfo x) {
	nodeptr p = makeNode(x); 
	if (isEmpty(l)) {
		l.head = l.tail = p;
		l.head->link = l.head;
		//l.tail->link = l.head;
	}
	else {
		p->link = l.head;
		l.head = p;
		l.tail->link = p;
	}
}
void outList(CLL l) {
	if (isEmpty(l))
		throw "Circular linked List is Empty.";
	while (true)
	{
		cout << l.head->data << "  ";
		l.head = l.head->link;
		if (l.head == l.tail->link)
			break;
	}
}
int length(CLL l) {
	int count = 0;
	if (isEmpty(l))return 0;
	while (true)
	{
		count++;
		l.head = l.head->link;
		if (l.tail->link == l.head)
			break;
	}
	return count;
}
void createCList(CLL& l) {
	typeinfo x;
	do
	{
		cout << "Enter number: "; cin >> x;
		if (x == 0)break;
		//addFirst(l, x);
		addLast(l, x);
	} while (true);
}
void addLast(CLL& l,typeinfo x) {
	nodeptr p = makeNode(x);
	if (isEmpty(l)) {
		l.head = l.tail = p;
		l.head->link = l.head;
	}
	else {
		l.tail = l.tail->link = p;
		p->link = l.head;
	}
}