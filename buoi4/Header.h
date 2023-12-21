#pragma once
#include "bits/stdc++.h"
using namespace std;
const int mx = 100;
typedef struct Array1d {
	int n;
	int list[mx];
}AR;
void init(AR& m);
bool isEmpty(AR m);
bool isFull(AR m);
int insert(AR& m, int idx, int k);
void createCL(AR& m);
//void createrCL(AR& m);
void output(AR m);
int& size(AR& m);
void removeExist(AR& m);
int binarySearch(AR m,int k);
bool greaterMin(AR m, int k);
bool greaterMax(AR m, int k);
void reverse(AR& m);