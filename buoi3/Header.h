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
int& size(CL& m);
void exchangeSort(CL& m);
void BubbleSort(CL& m);
bool increment(CL m);
void split(CL m, CL& m1, CL& m2);
void splitOE(CL m, CL& o, CL& e);
void join(CL m, CL m1, CL m2);
void joinDE(CL& m, CL o, CL e);