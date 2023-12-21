#include "Header.h"
nodeptr makeNode(typeinfo x) {
	nodeptr p = new node;
	if (p == NULL)return NULL;
	p->data = x;
	p->link = NULL;
	return p;
}
void addFirst(nodeptr& head, typeinfo x) {
	// danh sach dang rong
	if (head == NULL) head = makeNode(x);
	//danh sach khong rong
	else
	{
		nodeptr p = makeNode(x);
		p->link = head;
		head = p;
	}
}
void outList(nodeptr head) {
	while (head)
	{
		cout << head->data << "  ";
		head = head->link;
	}
}
void addLast(nodeptr& head, typeinfo x) {
	if (head == NULL) head = makeNode(x);
	else {
		nodeptr r;
		for ( r = head; r->link != NULL; r = r->link);
		r->link = makeNode(x);
	}
}
void create(nodeptr& head) {
	typeinfo x;
	do
	{
		cout << "Enter number of list(0:exit): "; cin >> x;
		if (x == 0)break;
		addLast(head, x);
	} while (true);
}
//thêm vào node giữa
void addAfter(nodeptr& head, int idx, typeinfo x) {
	if (idx<0 || idx>length(head))
		throw "index incorrect";
	nodeptr r, p; int count;
	for (r = head, count = 0; count != idx; count++, r = r->link);
//có thể viết bằng cách gọi làm r=nodeIndex(head,idx);
	p = makeNode(x);
	p->link = r->link;
	r->link = p;
}

int length(nodeptr head) {
	int count = 0;
	while (head)
	{
		count++; head = head->link;
	}return count;
}
// chen truoc
void addBefore(nodeptr& head, int idx, typeinfo x) {
	if (idx < 0 || length(head) < idx)
		throw "Index incorrect";
	nodeptr r, p;
	r = nodeIndex(head, idx);
	p = new node;
	*p = *r;
	r->link = p;
	r->data = x;
}
void insertAt(nodeptr& head,int idx, typeinfo x) {
	if (idx < 0 || length(head) < idx)
		throw "Index incorrect";
	if (idx == 0) addFirst(head, x);
	else if (idx == length(head)) addLast(head, x);//vi tri cuoi
	else addBefore(head, idx, x);
}
void deleteBegin(nodeptr& head) {
	if (head == NULL)throw "List is empty";
	nodeptr p = head;
	head = head->link;
	free(p);
}
void deleteEnd(nodeptr& head) {
	if (head == NULL)throw "List is empty";
	nodeptr r, tail;
	tail = nodeIndex(head, length(head) - 1);//tail là phần tử cuối
	for (r = head; r->link != tail; r = r->link);// xác định r
	r->link = NULL;
	free(tail);
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
void deleteMid(nodeptr& head,int idx) {
	if (head == NULL)throw "List is empty";
	nodeptr r, p;
	p = nodeIndex(head, idx);
	for (r = head; r->link != p; r = r->link);
	r->link = p->link;
	free(p);
}
void deleteAt(nodeptr& head,int idx) {
	if (head == NULL)throw "List is empty";
	if (idx == 0)deleteBegin(head);
	else if (idx == length(head) - 1) deleteEnd(head);
	else deleteMid(head,idx);
}
int findX(nodeptr head, typeinfo k) {
	int count ;
	nodeptr r;
	for (r = head, count = 0; r->data != k; count++, r = r->link);
	return count;
	/*
	nodeptr r;int idx;
	for(r=head,idx =0;r->data!-k;idx++,r=r->link);
	if(idx<length(head)) return idx;
	return -1;
	*/
}