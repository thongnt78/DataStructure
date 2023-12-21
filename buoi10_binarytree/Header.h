#pragma once
#include "bits/stdc++.h"
using namespace std;
	typedef int typeinfo;
	struct Node {
		typeinfo data;
		Node* left, * right;
	};
	typedef Node* node;
	typedef node BST;
void init(BST& r);
bool isEmpty(BST r);
node makeNode(typeinfo x);
void create(BST& r);
int insert(BST& r, typeinfo x);  
void LNR(BST r);
void LRN(BST r);
void NLR(BST r);
int height(BST r);
int sumLNR(BST r);
int countLNR(BST r);
void level(BST r,int k);
void printLevelOrder(BST r);
int sum1(BST r); 