#pragma once
#include "bits/stdc++.h"
using namespace std;
struct node{
	int info;
	node* next;
};

typedef struct linkedList {
	node* head;
	node* tail;
}LL;
void init(LL& l);
bool isEmpty(LL l); 
node* makeNode(int x);
int addFirst(LL& l, int x);
void createLL(LL& l);
void outputLL(LL l);
int addLast(LL& l, int x);
node* Search(LL l, int k);
int put(LL& l, node* q, node* p);
void put2(LL& l, node* q, node* p);