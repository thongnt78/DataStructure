#pragma once
#include "bits/stdc++.h"
using namespace std;
typedef int typeinfo;
struct  node
{
	typeinfo data;
	node* link;
};
typedef node* nodeptr;
nodeptr makeNode(typeinfo x);
void addFirst(nodeptr& head, typeinfo x);
void outList(nodeptr head);
void addLast(nodeptr& head, typeinfo x);
void create(nodeptr& head);
void addAfter(nodeptr& head,int idx, typeinfo x);
nodeptr nodeIndex(nodeptr head, int idx);
int length(nodeptr head);
void addBefore(nodeptr& head, int idx, typeinfo x);
void insertAt(nodeptr& head, int idx, typeinfo x);
void deleteBegin(nodeptr& head);
void deleteEnd(nodeptr& head);
void deleteMid(nodeptr& head,int idx);
void deleteAt(nodeptr& head,int idx);
int findX(nodeptr head, typeinfo k);