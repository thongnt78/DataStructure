#include "Header.h"

void init(nodeptr& head)
{
	head = NULL;
}

bool isEmpty(nodeptr head)
{
	return head == NULL;
}

int lengthL(nodeptr head)
{
	int count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return count;
}

void addFirst(nodeptr& head, typeinfo x) {
	nodeptr p = makeNode(x);
	if (isEmpty(head))head = p;
	else {
		p->next = head;
		head->prev = p;
		head = p;
	}
}
nodeptr makeNode(typeinfo x) {
	nodeptr p = new node;
	if (p == NULL)return NULL;
	p->info = x;
	p->next = p->prev = NULL;
	return p;
}
void outList(nodeptr head) {
	while (head)
	{
		cout << head->info << "  ";
		head = head->next;
	}
}
void createList(nodeptr& head) {
	int x;
	do
	{
		cout << "Enter the number of list(0:exit): "; cin >> x;
		if (x == 0)break;
		//addFirst(head, x);
		addLast(head, x);
	} while (true);
}
void outListReverse(nodeptr head) {
	nodeptr r; int count;
	//in nửa danh sách  
	for (r = head, count = 0; count != lengthL(head) / 2; count++, r = r->next);
	while (r)
	{
		cout << r->info << "  ";
		r = r->prev;
	}
}
void addLast(nodeptr& head, typeinfo x) {
	if (isEmpty(head))head = makeNode(x);
	else {
		nodeptr r, p = makeNode(x);
		for (r = head; r->next != NULL; r = r->next);
		//r là node cuối cùng
		r->next = p;
		p->prev = r;
	}
}

void addAfter(nodeptr q, typeinfo x) {
	nodeptr p = makeNode(x);
	p->next = q->next;
	q->next = p;
	p->next->prev = p;
	p->prev = q;
}

nodeptr findx(nodeptr head, typeinfo x) {
	while (head)
	{
		if (head->info == x)
			return head;
		head = head->next;
	}return NULL;
}
void addBefor(nodeptr q, typeinfo x) {
	nodeptr p = new node();
	*p = *q;
	q->next = p;
	p->next->prev = p;
	p->prev = q;
	q->info = x;
}
//thêm bất kì vào vị trí nào
void insertA(nodeptr& head, int idx, typeinfo x) {
	if (idx == 0)addFirst(head, x);
	else if (idx == lengthL(head))addLast(head, x);
	else {
		nodeptr q; int count = 0;
		for (count = 0, q = head; count < idx; count++, q = q->next);
		addBefor(q, x);
	}
}

void deleteBegin(nodeptr& head) {
	nodeptr p = head;
	head = head->next;
	head->prev = NULL;
	free(p);
}
void deleteEnd(nodeptr head) {
	nodeptr tail,r;
	//tìm nút cuối
	for (tail = head; tail->next != NULL; tail = tail->next);
	if (head == tail) {
		head = NULL;
		delete(tail);
	}else{
	//tìm nút kế cuối
	for (r = head; r->next != tail; r = r->next);
	delete(tail);
	r->next = NULL;
	}
}
void deleteMid(nodeptr head,nodeptr q) {
	nodeptr r;
	for (r = head; r->next != q; r = r->next);
	r->next = q->next;
	q->next->prev = r;
	delete(q);
}
void deleteA(nodeptr& head, int idx, typeinfo x) {
	if (idx == 0)deleteBegin(head);
	else if (idx == lengthL(head)) deleteEnd(head);
	else {
		nodeptr q, r;
		for (r = head; r->next != q; r = r->next);
		deleteMid(head,q);
	}
}
void chuyenDangTen(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		s[i] = tolower(s[i]);
	}
	for (int i = 0; i < strlen(s); i++) {
		if (i == 0) s[i] = toupper(s[i]);
		if (s[i - 1]);
	}
}