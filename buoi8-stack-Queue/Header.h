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
//hàm khởi tạo stack
//hàm kiểm tra stack rỗng
//hàm thêm một phần tử vào stack(addPush)
//hàm lấy một ptu ra khỏi stack(removeBegin)
//hàm cho biết phần tử của stack(length-> size)
//hàm duyệt stack
void init(nodeptr& m);
bool isEmpty(nodeptr head);
void pushFirst(nodeptr& head, typeinfo x);
int length(nodeptr head);
nodeptr nodeIndex(nodeptr head, int idx);
void removeBegin(nodeptr& head);
void outStack(nodeptr head);
void createStack(nodeptr& head);
void enQueue(nodeptr& head, typeinfo x);
//hàm khởi tạo queue
//hàm kiểm tra queue rỗng
// hàm thêm một phần tử vào queue(addlast->enQueue)
//hàm xóa 1 phần tử ra khỏi queue(removeBegin-> deQueue)
//cho biết phần tử của queue
//hàm hiển thị queue