#pragma once
#include "bits/stdc++.h"
using namespace std;
typedef int typeinfo;
 const int  Max = 100;
 typedef struct stack {
	int top;
	typeinfo element[Max];
 }st;
 void init(st & s);
 bool isEmpty(st s);
 bool isFull(st s);
 void push(st& s, typeinfo x);
 int pop(st& s);
 int size(st s);
 void clear(st& s);
 int getTop(st s);
 void view(st s);
typedef struct queue {
	 int rear;
	 typeinfo element[Max];
 }q;
void init(q& s);
bool isEmpty(q s);
bool isFull(q s);
void enQueue(q& s, typeinfo x);
int size(q s);
void clear(q& s);
int getTop(q s);
void view(q s);
int delQueue(q& s);