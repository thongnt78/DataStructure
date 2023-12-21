#include "header.h" 
void init(LL& l) {
	l.head = NULL;
	l.tail = NULL;
}
bool isEmpty(LL l) {
	return l.head == NULL;
}
node* makeNode(int x) {
	node* p;
	p = new node();
	if (p == NULL)return NULL;
	p->info = x;
	p->next = NULL;
	return p;
}
int addFirst(LL& l, int x) 
{
	node* p;
	p = makeNode(x);
	if (isEmpty(l))
		l.head = l.tail = p;
	else
	{
		p->next = l.head;
		l.head = p;
	}
	return 1;
}
void createLL(LL& l) {
	int x;
	do
	{
		cout << "Enter a number (0:exit): "; cin >> x;
		if (x == 0)break;
		//addFirst(l, x);
		addLast(l, x);
	} while (true);
}
void outputLL(LL l) {
	while (l.head)
	{
		cout << l.head->info << " ";
		//đi đến giá trị tiếp theo 
		l.head = l.head->next;
		
	}
}
int addLast(LL& l, int x) {
	node* p;
	p = makeNode(x);
	if (isEmpty(l)) l.head = l.tail = p;
	else
	{
		l.tail = l.tail->next = p;
	}
	return 1;
}
node* Search(LL l, int k) {
	while (l.head)
	{
		if (l.head->info == k)return l.head;
		l.head = l.head->next;
	}
	return NULL;
}
int put(LL& l, node* q, node* p) {
	p->next = q->next;
	q->next = p;
	return 1;
}
void put2(LL& l, node* q, node* p) {
	int x;
	x = p->info;
	*p = *q;
	q->next = p;
	q->info = x; 
}
int countLL(LL l) {
	int count = 0;
	while (l.head)
	{
		count++; l.head = l.head->next;
	}return count;
}