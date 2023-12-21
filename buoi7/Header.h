#pragma once
#include "bits/stdc++.h"
using namespace std;
typedef int typeinfo;
struct node {
	typeinfo info;
	node* prev, * next;
};
typedef node* nodeptr;
void init(nodeptr& head);
bool isEmpty(nodeptr head);
int lengthL(nodeptr head);
nodeptr makeNode(typeinfo x);
void addFirst(nodeptr& head, typeinfo x);
void outList(nodeptr head);
void createList(nodeptr& head);
void outListReverse(nodeptr head);
void addLast(nodeptr& head, typeinfo x);
void addAfter(nodeptr q, typeinfo x);
nodeptr findx(nodeptr head, typeinfo x);
void insertA(nodeptr& head, int idx, typeinfo x);
void deleteBegin(nodeptr& head);
void deleteEnd(nodeptr head);
void deleteMid(nodeptr q);