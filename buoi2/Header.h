#include "bits/stdc++.h"
using namespace std;
const int Max = 100;
typedef struct ContiguousList {
	int n;
	int list[Max];
}CL;
void init(CL& m);
bool isEmpty(CL m);
bool isFull(CL m);
int insert(CL& m, int idx, int k);
void createCL(CL& m);
void output(CL m);
int remove(CL& m, int idx);
//tìm phần tử lớn nhất
int max(CL m);
void sort(CL& m);