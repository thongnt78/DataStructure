#pragma once
#include "bits/stdc++.h"
using namespace std;
typedef int typeinfo;
struct node {
	typeinfo data;
	node* link;
};
typedef node* nodeptr;
typedef struct circularLinkedList {
	nodeptr head, tail;
}CLL; 
void init(CLL& l);
nodeptr makeNode( typeinfo x);
bool isEmpty(CLL l);
void addFirst(CLL& l, typeinfo x);
void outList(CLL l);
int length(CLL l);
void createCList(CLL& l);
void addLast(CLL& l, typeinfo x);