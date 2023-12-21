#include "iostream"
using namespace std;
struct Array1D {
	int n;
	int a[100];
};
typedef Array1D A1D;
void inputA1D(A1D& m);
void outputA1D(A1D m);
int searchlinear(A1D m, int key);
int searchlinearA(A1D m, int key);
void enterKey(int& key);
void outputmid12(A1D m);
bool compareAr(A1D m);